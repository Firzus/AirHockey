#include "Game.h"
#include "Board.h"

Game::Game() : m_window(sf::VideoMode(500, 800), "AirHockey")
{
    m_window.setFramerateLimit(60);
    //Board* board = new Board();
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
    //board->Render(m_window);
    m_window.display();
}
