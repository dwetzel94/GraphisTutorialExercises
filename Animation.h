#ifndef ANIMATION_H
#define ANIMATION_H
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>



using namespace std ;


class Animation
{
public:
    Animation(sf::Texture* texture, sf::Vector2u imageCount, float switchTime) ;
    
    void Update(int row, float deltaTime, bool faceRight) ;
    
public: 
    sf::IntRect uvRect ;
    
private:
    sf::Vector2u imageCount ;
    sf::Vector2u currentImage ;
    
    float totalTime ;
    float switchTime ;
    
};

#endif // ANIMATION_H
