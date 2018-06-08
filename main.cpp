#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>


using namespace std ;

int main()
{
    
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Tutorial", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize) ;
    sf::RectangleShape player(sf::Vector2f(100, 100)) ; //sets size of object
    player.setFillColor(sf::Color::Red);
    player.setOrigin(50.0f, 50.0f); //changes origin of object to the center
    
    //creating textures
    sf::Texture playerTexture ;
    playerTexture.loadFromFile("mushroom.png") ;
    player.setTexture(&playerTexture) ;
    
    while(window.isOpen())
    {
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
        
        //button controls
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
            player.move(-0.1f, 0.0f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
            player.move(0.1f, 0.0f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        {
            player.move(0.0f, -0.1f);
        }
        
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
            player.move(0.0f, 0.1f);
        }
        
        //mouse controls
//         if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
//         {
//             sf::Vector2i mousePos = sf::Mouse::getPosition(window) ;
//             player.setPosition((float)mousePos.x, (float)mousePos.y) ;
//         }


        
        window.clear(); //can also set a bg color with sf::Color::[color]
        window.draw(player) ; //will leave the drawn path in the window unless window.clear is called 
        window.display() ;
    }
    

}
