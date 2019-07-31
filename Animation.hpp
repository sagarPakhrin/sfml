#pragma once
#include <SFML/Graphics.hpp>

namespace Sagar
{
		class Animation
		{
				public:
						Animation(sf::Texture* texture, sf::Vector2u imgCount,float switchTime);
						~Animation(){};

						void Update(int row, float deltaTime);

				public:
						sf::IntRect uvRect;

				private:
						sf::Vector2u imgCount;
						sf::Vector2u currentImage;

						float totalTime;
						float switchTime;
		};
}
