#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Menu.h"
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
    Menu menu;
    Board board;
    vector<Entity*> entities;

    bool isGameRunning;
};