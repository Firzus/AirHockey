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
        }

        switch (event.type)
        {
        case sf::Event::Closed:
            m_window.close();
            break;
        }
    }
}

void Game::Update()
{
    if (isGameRunning)
    {
        // update
    }
}

void Game::Render()
{
    if (isGameRunning)
    {
        m_window.clear();
        board.Render(m_window);
        renderEntites(m_window);
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

void Game::renderEntites(sf::RenderWindow& rw) {
    for (auto it = entities.begin(); it != entities.end(); it++) {
        (*it)->Render(rw);
    }
}