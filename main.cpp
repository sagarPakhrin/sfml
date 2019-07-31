#include <SFML/Graphics.hpp>
/* #include <iostream> */


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
						}
				}

				window.clear();
				window.draw(player);
				window.display();
		}
}
