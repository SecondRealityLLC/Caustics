#pragma once

class Texture
{

	private:

		void* data;
		
		int height, width;

		long size;

	public:
	
		Texture();
		~Texture();

		bool load(const char* path);
		bool save(const char* path);


};

