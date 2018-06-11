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
//   RectangleShape player(Vector2f(150, 100)) ; //sets size of object
//     player.setFillColor(Color::Red);
//    player.setOrigin(50.0f, 50.0f); //changes origin of object to the center
//    player.setPosition(206.0f, 206.0f);
    
    //creating textures
    Texture playerTexture ;
    playerTexture.loadFromFile("../Textures/tux_from_linux.png") ; // UV coordinates
//     Texture mushroom ;
//     mushroom.loadFromFile("../Textures/mushroom.png") ;
//    player.setTexture(&playerTexture) ;
    
    Player player(&playerTexture, Vector2u(3, 9), 0.3f, 100.0f) ;
    
    float deltaTime = 0.0f ;
    Clock clock ;
    
    Vector2u textureSize = playerTexture.getSize() ;
    textureSize.x /= 3 ;
    textureSize.y /= 9 ;
    
//    player.setTextureRect(IntRect(textureSize.x * 2, textureSize.y * 8, textureSize.x, textureSize.y)) ;
    
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
                case Event::Resized:
                    //cout << "New window width: " << evnt.size.width << " New window height: " << evnt.size.height << endl ;
                    
                    printf("New Window Width: %i New window height: %i \n",evnt.size.width, evnt.size.height) ;
                    break ;
                /*case Event::TextEntered: //prints out whatever text the user inputs while running the program
                    if(evnt.text.unicode < 128)
                    {
                        printf("%c", evnt.text.unicode) ;
                    }
                    break ; */                   
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
