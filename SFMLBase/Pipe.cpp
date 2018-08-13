#include "Pipe.hpp"
#include "DEFINITIONS.hpp"

#include <iostream>

namespace Bardo
{
	Pipe::Pipe(GameDataRef data) : _data(data)
	{

	}

	void Pipe::DrawPipes()
	{
		for (unsigned short int i = 0; i < pipeSprites.size(); i++)
		{
			this->_data->window.draw(pipeSprites.at(i));
		}
	}
}