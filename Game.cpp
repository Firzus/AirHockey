#include "Game.h"

Game::Game() : m_window(sf::VideoMode(500, 800), "AirHockey")
{
    m_window.setFramerateLimit(60);
    isGameRunning = false;
    new Board();
    initEntities();
}

void Game::Run()
{
    while (m_window.isOpen())
    {
        ProcessEvents();
        Update();
        Render();
    }
}

void Game::ProcessEvents()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::MouseButtonPressed) {
            if (event.mouseButton.button == sf::Mouse::Left) {
                if (!isGameRunning) {
                    isGameRunning = true;
                }
            }
            processPlayerEvent(m_window, event.mouseButton.button, true);
        }

        if (event.type == sf::Event::MouseButtonReleased) {
            processPlayerEvent(m_window, event.mouseButton.button, false);
        }

        switch (event.type)
        {
        case sf::Event::Closed:
            m_window.close();
            break;
        }

        // Test
    }
}

void Game::Update()
{
    if (isGameRunning)
    {
       updateEntities(m_window);
    }
}

void Game::Render()
{
    if (isGameRunning)
    {
        m_window.clear();
        board.Render(m_window);
        renderEntities(m_window);
        m_window.display();
    }
    else
    {
        menu.Render(m_window);
    }
}

void Game::initEntities() {
    entities.push_back(new Player(false));
    entities.push_back(new Player(true));
    entities.push_back(new Ball());
}

void Game::renderEntities(sf::RenderWindow& rw) {
    for (auto it = entities.begin(); it != entities.end(); it++) {
        (*it)->Render(rw);
    }
}

void Game::updateEntities(sf::RenderWindow& rw) {
    for (auto it = entities.begin(); it != entities.end(); it++) {
        (*it)->Update(rw);
    }
}

void Game::processPlayerEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress) {
    for (auto it = entities.begin(); it != entities.end(); it++) {
        if (!(*it)->getBall() && (*it)->getPlayer() && !(*it)->getOpponent()) {
            (*it)->processEvent(rw, mouse, isPress);
        }

    }
}