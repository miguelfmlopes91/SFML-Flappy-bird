#pragma once

#include "InputsManager.hpp"

namespace Bardo
{
	bool InputsManager::IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window)
	{
		if (sf::Mouse::isButtonPressed(button))
		{
			sf::IntRect _playButtonRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);
			if (_playButtonRect.contains(sf::Mouse::getPosition(window)))
			{
				return true;
			}
		}

		return false;
	}

	bool InputsManager::IsTextClicked(sf::Text text, sf::Mouse::Button button, sf::RenderWindow & window)
	{
		if (sf::Mouse::isButtonPressed(button))
		{
			
			sf::IntRect _playButtonRect(text.getPosition().x, text.getPosition().y, text.getGlobalBounds().width, text.getGlobalBounds().height);

			if (_playButtonRect.contains(sf::Mouse::getPosition(window)))
			{
				return true;
			}
		}
		return false;
	}

	sf::Vector2i InputsManager::GetMousePosition(sf::RenderWindow &window)
	{
		return sf::Mouse::getPosition(window);
	}

}