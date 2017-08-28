#pragma once

class mouse
{
public:
	mouse();
	~mouse();

    bool GetState(int button);
    SDL_Point GetPosition();

private:
    SDL_Point position;
};
