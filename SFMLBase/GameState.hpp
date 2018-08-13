#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include "State.hpp"
#include "GameLoop.hpp"


namespace Bardo
{
	class GameState : public State
	{
	public:
		GameState(GameDataRef data);

		void Init();

		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;

		sf::Sprite _background;

		sf::Clock clock;

		int _gameState;

		sf::RectangleShape _gameOverFlash;
		bool _flashOn;

		int _score;

		sf::SoundBuffer _hitSoundBuffer;
		sf::SoundBuffer _wingSoundBuffer;
		sf::SoundBuffer _pointSoundBuffer;

		sf::Sound _hitSound;
		sf::Sound _wingSound;
		sf::Sound _pointSound;

	};
}

