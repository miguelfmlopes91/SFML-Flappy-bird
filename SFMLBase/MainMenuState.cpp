#pragma once

#include <sstream>

#include "GameState.hpp"
#include "MainMenuState.hpp"
#include "DEFINITIONS.hpp"


#include <iostream>

namespace Bardo
{
	MainMenuState::MainMenuState(GameDataRef data) : _data(data)
	{

	}

	void MainMenuState::Init()
	{
		this->_data->assets.LoadTexture("MainMenu Background", MAIN_MENU_BACKGROUND_FILEPATH);
		this->_data->assets.LoadTexture("Game Title", GAME_TITLE_FILEPATH);
		this->_data->assets.LoadTexture("Play Button", PLAY_BUTTON_FILEPATH);
		this->_data->assets.LoadFont("Debug Font", DEBUG_FONT_FILEPATH);

		_background.setTexture(this->_data->assets.GetTexture("MainMenu Background"));
		_title.setTexture(this->_data->assets.GetTexture("Game Title"));
		_playButton.setTexture(this->_data->assets.GetTexture("Play Button"));

		_debugTitle.setFont(this->_data->assets.GetFont("Debug Font"));
		_debugTitle.setString("DEBUG");
		_debugTitle.setCharacterSize(25);
		_debugTitle.setFillColor(sf::Color::Green);
		_debugTitle.setStyle(sf::Text::Bold);

		_title.setPosition((SCREEN_WIDTH / 2) - (_title.getGlobalBounds().width / 2), _title.getGlobalBounds().height / 2);
		//_playButton.setPosition((SCREEN_WIDTH / 2) - (_playButton.getGlobalBounds().width / 2), (SCREEN_HEIGHT / 2) - (_playButton.getGlobalBounds().height / 2));
		_debugTitle.setPosition((SCREEN_WIDTH / 2) - (_playButton.getGlobalBounds().width / 2), (SCREEN_HEIGHT / 2) - (_playButton.getGlobalBounds().height / 2));

	}

	void MainMenuState::HandleInput()
	{
		sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}
			if (this->_data->input.IsSpriteClicked(this->_playButton, sf::Mouse::Left, this->_data->window))
			{
				// Switch To Main Menu
				this->_data->machine.AddState(StateRef(new GameState(_data)), true);
			}
			if (this->_data->input.IsTextClicked(this->_debugTitle, sf::Mouse::Left, this->_data->window))
			{
				// Switch To Main Menu
				//this->_data->machine.AddState(StateRef(new GameState(_data)), true);
				std::cout << "PUTARIA MAXIMA"<<std::endl;
			}
		}
	}

	void MainMenuState::Update(float dt)
	{

	}

	void MainMenuState::Draw(float dt)
	{
		this->_data->window.clear(sf::Color::Red);

		this->_data->window.draw(this->_background);
		this->_data->window.draw(this->_title);
		this->_data->window.draw(this->_playButton);
		this->_data->window.draw(this->_debugTitle);
		this->_data->window.display();
	}
}