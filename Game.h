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

private:
    sf::RenderWindow m_window;
    Menu menu;
    Board board;
    vector<Entity*> entities;

    void initEntities();
    void renderEntities(sf::RenderWindow& rw);
    void updateEntities(sf::RenderWindow& rw);
    void processPlayerEvent(sf::RenderWindow& rw, sf::Mouse::Button mouse, bool isPress);
    bool isGameRunning;
};