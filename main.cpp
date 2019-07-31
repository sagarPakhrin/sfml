#include <SFML/Graphics.hpp>
#include <iostream>
#include "Animation.cpp"


int main(){
		sf::RenderWindow window(sf::VideoMode(512,512), "SFML Tutorial", sf::Style::Close | sf::Style::Resize | sf::Style::Close);
		sf::RectangleShape player(sf::Vector2f(100.0f,150.0f));
		player.setPosition(206.0f,206.0f);

		sf::Texture playerTexture;
		playerTexture.loadFromFile("tux_from_linux.png");
		player.setTexture(&playerTexture);


		Sagar::Animation animation(&playerTexture,sf::Vector2u(3,9),0.3f);
		float deltaTime = 0.0f;
		sf::Clock clock;

		while(window.isOpen())
		{
				deltaTime = clock.restart().asSeconds();
				sf::Event evnt;
				while(window.pollEvent(evnt))
				{
						if(evnt.type==evnt.Closed)
						{
								window.close();
						}
				}
				animation.Update(0,deltaTime);
				player.setTextureRect(animation.uvRect);


				window.clear();
				window.draw(player);
				window.display();
		}
}
