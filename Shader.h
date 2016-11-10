#pragma once

class Shader
{

	private:

		




	public:
	
		Shader();
		~Shader();

		bool load(const char* path);
		bool save(const char* path);

		bool compile();
		bool uncompile();

		bool link();
		bool unlink();











};

