#pragma once
#include <string>
#include <string_view>

class Window
{
private:
	std::string title;
	unsigned short x, y, w, h;

public:
	Window(std::string_view title, unsigned short x, unsigned short y, unsigned short w, unsigned short h);
	void Clear();


};

