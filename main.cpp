#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Animation.h"
#include "Animation.cpp"


using namespace std ;

int main()
{
    
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Tutorial", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize) ;
    sf::RectangleShape player(sf::Vector2f(150, 100)) ; //sets size of object
//     player.setFillColor(sf::Color::Red);
    player.setOrigin(50.0f, 50.0f); //changes origin of object to the center
    
    //creating textures
    sf::Texture playerTexture ;
    playerTexture.loadFromFile("/home/demi/Git/GraphicsTutorialExercises/tux_from_linux.png") ; // UV coordinates
//     sf::Texture mushroom ;
//     mushroom.loadFromFile("/home/demi/Git/GraphicsTutorialExercises/mushroom.png") ;
    player.setTexture(&playerTexture) ;
    
    Animation animation(&playerTexture, sf::Vector2u(3, 9), 0.3f) ;
    
    float deltaTime = 0.0f ;
    sf::Clock clock ;
    
//     sf::Vector2u textureSize = playerTexture.getSize() ;
//     textureSize.x /= 3 ;
//     textureSize.y /= 9 ;
    
//     player.setTextureRect(sf::IntRect(textureSize.x * 2, textureSize.y * 8, textureSize.x, textureSize.y)) ;
    
    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds() ;
        
        sf::Event evnt ;
        while(window.pollEvent(evnt))
        {
            switch(evnt.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break ;
                case sf::Event::Resized:
                    //cout << "New window width: " << evnt.size.width << " New window height: " << evnt.size.height << endl ;
                    
                    printf("New Window Width: %i New window height: %i \n",evnt.size.width, evnt.size.height) ;
                    break ;
                /*case sf::Event::TextEntered: //prints out whatever text the user inputs while running the program
                    if(evnt.text.unicode < 128)
                    {
                        printf("%c", evnt.text.unicode) ;
                    }
                    break ; */                   
            }
            
        }
        
        animation.Update(0, deltaTime, false) ;
        player.setTextureRect(animation.uvRect);
        
        //button controls
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        {
            player.move(-0.1f, 0.0f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        {
            player.move(0.1f, 0.0f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        {
            player.move(0.0f, -0.1f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        {
            player.move(0.0f, 0.1f);
        }
//         
        //mouse controls
//         if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
//         {
//             sf::Vector2i mousePos = sf::Mouse::getPosition(window) ;
//             player.setPosition((float)mousePos.x, (float)mousePos.y) ;
//         }


        
        window.clear(sf::Color::Green); //can also set a bg color with sf::Color::[color]
        window.draw(player) ; //will leave the drawn path in the window unless window.clear is called 
        window.display() ;
    }
    

}
