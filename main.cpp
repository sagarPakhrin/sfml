#include <SFML/Graphics.hpp>
#include <iostream>


int main(){
		sf::RenderWindow window(sf::VideoMode(512,512), "SFML Tutorial", sf::Style::Close | sf::Style::Resize | sf::Style::Close);
		sf::RectangleShape player(sf::Vector2f(100.0f,100.0f));
		player.setPosition(206.0f,206.0f);
		while(window.isOpen())
		{
				sf::Event evnt;
				while(window.pollEvent(evnt))
				{
						switch(evnt.type)
						{
								case sf::Event::Closed:
										window.close();
										break;
								case sf::Event::Resized:
										printf("Height: %i\tWidth: %i\n",evnt.size.width,evnt.size.height);
										break;
						}
				}
				if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
				{
						player.move(-0.1f,0.0f);
				}
				if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
				{
						player.move(0.1f,0.0f);
				}
				if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
				{
						player.move(0.0f,-0.1f);
				}
				if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
				{
						player.move(0.0f,0.1f);
				}

				if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
				{
						sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
						player.setPosition(static_cast<float>(mousePosition.x),static_cast<float>(mousePosition.y));
				}

				window.clear();
				window.draw(player);
				window.display();
		}
}
