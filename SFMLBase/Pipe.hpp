#pragma once

#include <SFML/Graphics.hpp>
#include "GameLoop.hpp"
#include <vector>
#include "DEFINITIONS.hpp"

namespace Bardo
{
	class Pipe
	{
	public:
		Pipe(GameDataRef data);

		void DrawPipes();
		void SpawnBottomPipe();
		void SpawnTopPipe();
		void SpawnInvisiblePipe();
		void MovePipes(float dt);
		void RandomisePipeOffset();

		const std::vector<sf::Sprite> &GetSprites() const;

	private:
		GameDataRef _data;
		std::vector<sf::Sprite> pipeSprites;

		int _landHeight;
		int _pipeSpawnYOffset;

	};
}