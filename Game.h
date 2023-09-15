#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Board.h"
#include "Player.h"
#include "Ball.h"
#include "Entity.h"

using namespace std;

class Game
{
public:
    Game();

    void Run();
    void ProcessEvents();
    void Update();
    void Render();

    void initEntities();
    void renderEntites(sf::RenderWindow& rw);

private:
    sf::RenderWindow m_window;
    Board board;
    vector<Entity*> entities;

};