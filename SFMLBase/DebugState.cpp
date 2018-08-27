#pragma once

#include "GameState.hpp"
#include "DebugState.hpp"
#include "DEFINITIONS.hpp"

namespace Bardo
{
	DebugState::DebugState(GameDataRef data) : _data(data)
	{

	}

	void DebugState::Init()
	{
		

	}

	void DebugState::HandleInput()
	{
		sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}
			//if (this->_data->input.IsSpriteClicked(this->_playButton, sf::Mouse::Left, this->_data->window))
			//{
			//	// Switch To Main Menu
			//	this->_data->machine.AddState(StateRef(new GameState(_data)), true);
			//}
		}
	}

	void DebugState::Update(float dt)
	{

	}

	void DebugState::Draw(float dt)
	{
		this->_data->window.clear(sf::Color::Red);

		//this->_data->window.draw(this->_title);

		this->_data->window.display();
	}
}