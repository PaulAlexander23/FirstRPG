#pragma once

class mouse
{
public:
	mouse();
	~mouse();

	void BtnDown(bool btn);
	void BtnUp(bool btn);

	void GetMousePosition(SDL_Point& point);

	bool btnState[2];

private:


};
