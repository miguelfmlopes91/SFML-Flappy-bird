#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "GameManager.hpp"

namespace Bardo
{
	class DebugState : public State
	{
	public:
		DebugState(GameDataRef data);

		void Init();

		// No pause() or resume() methods here as this
		// is a very simple example of a game state.

		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
		GameDataRef _data;


	};
}
