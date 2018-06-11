#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include "Player.h"
#include "Player.cpp"


using namespace std ;
using namespace sf ;

int main()
{
    
    RenderWindow window(VideoMode(512, 512), "SFML Tutorial", Style::Close | Style::Titlebar | Style::Resize) ;
    
    //creating textures
    Texture playerTexture ;
    playerTexture.loadFromFile("../Textures/tux_from_linux.png") ; // UV coordinates

    
    Player player(&playerTexture, Vector2u(3, 9), 0.3f, 100.0f) ;
    
    float deltaTime = 0.0f ;
    Clock clock ;
    
    
    while(window.isOpen())
    {
        deltaTime = clock.restart().asSeconds() ;
        
        Event evnt ;
        while(window.pollEvent(evnt))
        {
            switch(evnt.type)
            {
                case Event::Closed:
                    window.close();
                    break ;
            }
            
        }
        
       player.Update(deltaTime);
       
        
        //button controls
//         if(Keyboard::isKeyPressed(Keyboard::Key::Left))
//         {
//             player.move(-0.1f, 0.0f);
//         }
//         
//         if(Keyboard::isKeyPressed(Keyboard::Key::Right))
//         {
//             player.move(0.1f, 0.0f);
//         }
//         
//         if(Keyboard::isKeyPressed(Keyboard::Key::Up))
//         {
//             player.move(0.0f, -0.1f);
//         }
//         
//         if(Keyboard::isKeyPressed(Keyboard::Key::Down))
//         {
//             player.move(0.0f, 0.1f);
//         }
//         
        //mouse controls
//         if(Mouse::isButtonPressed(Mouse::Left))
//         {
//             Vector2i mousePos = Mouse::getPosition(window) ;
//             player.setPosition((float)mousePos.x, (float)mousePos.y) ;
//         }


        
        window.clear(Color::Yellow); //can also set a bg color with Color::[color]
        player.Draw(window);
        //window.draw(player) ; //will leave the drawn path in the window unless window.clear is called 
        window.display() ;
    }
    

}
