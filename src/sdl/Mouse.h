#pragma once
class CMouse
{
public:
	CMouse();
	~CMouse();

	void BtnDown(bool btn);
	void BtnUp(bool btn);

	void GetMousePosition(SDL_Point& point);

	bool btnState[2];

private:
	



};

