#include "stdafx.h"
#include "Character.h"


CCharacter::CCharacter(SDL_Renderer* passed_renderer, std::string FilePath, int passed_x, int passed_y, int w, int h)
{
	

	x = float(passed_x);
	y = float(passed_y);

	sprite = new CSprite(passed_renderer, FilePath, x, y, w, h);
	speed = 8;
	frame = 0;

}


CCharacter::~CCharacter()
{
	delete sprite;
}

void CCharacter::Draw()
{

	sprite->Draw(angle, frame);
}

void CCharacter::Update(bool keyState[4])
{
	float dist = 0;
	float angleDist = 0;

	if ((keyState[UP] || keyState[DOWN]) && (keyState[LEFT] || keyState[RIGHT]))
	{
		dist = float(speed / sqrt(2));
		angleDist = 45;
	}
	else
	{
		dist = speed;
		angleDist = 90;
	}

	x += dist * (- keyState[LEFT] + keyState[RIGHT]);
	y += dist * (- keyState[UP] + keyState[DOWN]);

	if (int(x) - sprite->GetX() != 0 || int(y) - sprite->GetY() != 0)
	{
		frame = (frame + 1) % 2;		
		angle = (1 - 2 * keyState[DOWN]) * angleDist * (-keyState[LEFT] + keyState[RIGHT]) + 180 * keyState[DOWN];
	}
	
	sprite->SetPosition(int(x),int(y));
}


void CCharacter::Move()
{


}
