#include "MovingPlatform.h"
#include <algorithm>
#include "Sprite.h"
#include "Sprites.h"
#include "Mario.h"
#include "Textures.h"
#include "Game.h"
#include "Collision.h"

void CMovingPlatform::Update(DWORD dt,  vector<LPGAMEOBJECT>* coObjects)
{
	/*CCollision::GetInstance()->Process(this, dt, coObjects);*/
	if (y <= top || y >= bottom)
	{
		vy = -vy;
	}

	y += dt * vy;
};

