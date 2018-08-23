#pragma once

#include <SFML/Graphics.hpp>
#include "GameManager.hpp"
#include "DEFINITIONS.hpp"

namespace Bardo
{
	class Flash
	{
	public:
		Flash(GameDataRef data);
		~Flash();

		void Show(float dt);
		void Draw();

	private:
		GameDataRef _data;

		sf::RectangleShape _shape;

		bool _flashOn;

	};
}