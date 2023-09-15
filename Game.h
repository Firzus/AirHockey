#pragma once

#include <iostream>
#include "Board.h"
#include <SFML/Graphics.hpp>

class Game
{
public:
    Game();

    void Run();
    void ProcessEvents();
    void Update();
    void Render();

private:
    sf::RenderWindow m_window;
    Board board;
};