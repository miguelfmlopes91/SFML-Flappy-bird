#pragma once

#include <SFML/Graphics.hpp>
#include "GameLoop.hpp"
#include <vector>

namespace Bardo
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		void DrawPipes();


	private:
		GameDataRef _data;
		std::vector<sf::Sprite> pipeSprites;

	};
}