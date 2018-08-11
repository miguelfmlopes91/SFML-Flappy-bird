#pragma once

#include <memory>
#include <stack>

#include "State.hpp"

namespace Bardo
{
	typedef std::unique_ptr<State> StateRef;

	class StatesMachine
	{
	public:
		StatesMachine() { }
		~StatesMachine() { }

		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();
		// Run at start of each loop in Game.cpp
		void ProcessStateChanges();

		StateRef &GetActiveState();

	private:
		std::stack<StateRef> _states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding, _isReplacing;
	};
}