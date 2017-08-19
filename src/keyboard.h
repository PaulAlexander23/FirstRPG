#pragma once

class keyboard
{
public:
	keyboard();
	~keyboard();

    bool GetState(SDL_Keycode key);

private:
    const Uint8 *state;
	
};
