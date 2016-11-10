#pragma once

class API
{

	private:

		long type;	
	
	public:
	
		API();
		~API();

		bool init();
		bool shut();

		bool add(const char* path);
		bool del(const char* path);

};

