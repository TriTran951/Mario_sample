#pragma once

#include "GameObject.h"
#include "Platform.h"

// 
// The most popular type of object in Mario! 
// 
class CMovingPlatform : public CPlatform
{
protected:
	float top, bottom;
	int length;				// Unit: cell 
	float cellWidth;
	float cellHeight;
	int spriteIdBegin, spriteIdMiddle, spriteIdEnd;

public:
	CMovingPlatform(float x, float y,
		float cell_width, float cell_height, int length,
		int sprite_id_begin, int sprite_id_middle, int sprite_id_end, float top, float bottom) : CPlatform( x,  y,  cell_width,  cell_height,  length,  sprite_id_begin,  sprite_id_middle,  sprite_id_end)
	{
		this->top = top;
		this->bottom = bottom;
		vx = 0;
		vy = 0.1;
	}
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);
};

typedef CMovingPlatform* LPMOVINGPLATFORM;