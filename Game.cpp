#include "Game.h"

Game::Game() : m_window(sf::VideoMode(500, 800), "AirHockey")
{
    m_window.setFramerateLimit(60);
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
  
}

void Game::Render()
{
    m_window.clear();
    board.Render(m_window);
    renderEntites(m_window);
    m_window.display();
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