#pragma once

class Camera
{
	
	private:

		float x, y, z;

	
	public:
	
		Camera();
		~Camera();

		void lookAt(float x, float y, float z);

};

