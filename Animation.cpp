#include "Animation.hpp"


namespace Sagar
{
		Animation::Animation(sf::Texture* texture, sf::Vector2u imgCount,float switchTime)
		{
				this->imgCount = imgCount;
				this->switchTime = switchTime;
				totalTime = 0;
				currentImage.x = 0;


				uvRect.width = texture->getSize().x / static_cast<float>(imgCount.x);
				uvRect.height = texture->getSize().y / static_cast<float>(imgCount.y);
		}

		void Animation::Update(int row,float deltaTime)
		{
				currentImage.y = row;
				totalTime = deltaTime;

				if(totalTime >= switchTime)
				{
						totalTime -= switchTime;
						currentImage.x++;
						if(currentImage.x>=imgCount.x)
						{
								currentImage.x = 0;
						}
				}
				uvRect.left = currentImage.x * uvRect.width;
				uvRect.top = currentImage.y * uvRect.height;
		}










}
