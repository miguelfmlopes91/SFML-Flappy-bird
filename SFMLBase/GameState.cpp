#pragma once

#include <sstream>
#include "DEFINITIONS.hpp"
#include "GameState.hpp"

#include <iostream>

namespace Bardo
{
	GameState::GameState(GameDataRef data) : _data(data)
	{

	}

	void GameState::Init()
	{


		this->_data->assets.LoadTexture("Game Background", GAME_BACKGROUND_FILEPATH);
		//this->_data->assets.LoadTexture("Pipe Up", PIPE_UP_FILEPATH);
		//this->_data->assets.LoadTexture("Pipe Down", PIPE_DOWN_FILEPATH);
		//this->_data->assets.LoadTexture("Land", LAND_FILEPATH);
		//this->_data->assets.LoadTexture("Bird Frame 1", BIRD_FRAME_1_FILEPATH);
		//this->_data->assets.LoadTexture("Bird Frame 2", BIRD_FRAME_2_FILEPATH);
		//this->_data->assets.LoadTexture("Bird Frame 3", BIRD_FRAME_3_FILEPATH);
		//this->_data->assets.LoadTexture("Bird Frame 4", BIRD_FRAME_4_FILEPATH);
		//this->_data->assets.LoadTexture("Scoring Pipe", SCORING_PIPE_FILEPATH);
		//this->_data->assets.LoadFont("Flappy Font", FLAPPY_FONT_FILEPATH);


		_background.setTexture(this->_data->assets.GetTexture("Game Background"));

		_score = 0;

		_gameState = GameStates::eReady;
	}

	void GameState::HandleInput()
	{
		sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}

		}
	}

	void GameState::Update(float dt)
	{
	}

	void GameState::Draw(float dt)
	{
		this->_data->window.clear(sf::Color::Red);

		this->_data->window.draw(this->_background);

		this->_data->window.display();
	}
}