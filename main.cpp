// Caustics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "API.h"

int main(int argC, char* argV[])
{

	API* audioAPI;
	API* renderAPI;
	API* sceneAPI;
	
		audioAPI->init();
		renderAPI->init();
		sceneAPI->init();

		audioAPI->add("..\submar.wav");
		sceneAPI->add("..\submar.obj");

		sceneAPI->addNegX("skyNegX.png");
		sceneAPI->addPosX("skyPosX.png");
		sceneAPI->addNegY("skyNegY.png");
		sceneAPI->addPosY("skyPosY.png");
		sceneAPI->addNegZ("skyNegZ.png");
		sceneAPI->addPosZ("skyPosZ.png");

		// loop
		
		while (!kbhit())
		{

			sceneAPI->sky(true);

			sceneAPI->water(true);

			sceneAPI->caustics(true);

			sceneAPI->godrays(false);

			sceneAPI->sunflare(false);

			sceneAPI->submarine(0.0, 0.0, 0.0);

			audioAPI->playSFX(0.0, 0.0, 0.0);

			sceneAPI->camera(0.0, 0.0, 0.0);

			sceneAPI->update();

		}

		// loop

		audioAPI->del("..\submar.wav");
		sceneAPI->del("..\submar.obj");

		audioAPI->shut();
		renderAPI->shut();
		sceneAPI->shut();

    return 0;
}

