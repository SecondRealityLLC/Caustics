#pragma once
#include "Model.h"
class SubMarine :
	public Model
{

	private:

		float x, y, z;

	public:
	
		SubMarine();
		~SubMarine();

		void down(void);
		void up(void);

		void left(void);
		void right(void);

};

