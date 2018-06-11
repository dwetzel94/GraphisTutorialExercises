#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Animation.h"
#include "Animation.cpp"
using namespace std ;

class Player
{
public:
    Player() ;
private:
    sf::RectangleShape body ;
    Animation animation ;
    unsigned int row ; //unsigned ensures that integer is never less than 0
    
};

#endif // PLAYER_H
