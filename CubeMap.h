#pragma once

class CubeMap
{


	private:



		float cx, cy, cz;



	public:
	
		CubeMap();
		~CubeMap();

		bool setNegX();
		bool setPosX();

		bool setNegY();
		bool setPosY();

		bool setNegZ();
		bool setPosZ();



};

