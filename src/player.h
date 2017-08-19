#pragma once

#include "main.h"

#include "Sprite.h"

class CCharacter
{
public:
	CCharacter(SDL_Renderer* passed_renderer, std::string FilePath, int x, int y, int w, int h);
	~CCharacter();

	void Draw();

	void Update(bool keyState[4]);
	void Move();

private:
	CSprite* sprite;

	int speed;

	float x;
	float y;

	int angle;
	int frame;

};
