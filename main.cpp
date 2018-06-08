#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>


using namespace std ;

int main()
{
    
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML Tutorial", sf::Style::Close | sf::Style::Titlebar | sf::Style::Resize) ;
    
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
                case sf::Event::TextEntered:
                    if(evnt.text.unicode < 128)
                    {
                        printf("%c", evnt.text.unicode) ;
                    break ;
                    
                    
            }
        }
    }
}
