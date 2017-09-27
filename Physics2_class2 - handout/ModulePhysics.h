#pragma once
#include "Module.h"
#include "Globals.h"

#define GRAVITY_X 0.0f
#define GRAVITY_Y -7.0f

#define PIXELS_PER_METER 50.0f // if touched change METER_PER_PIXEL too
#define METER_PER_PIXEL 0.02f // this is 1 / PIXELS_PER_METER !

#define METERS_TO_PIXELS(m) ((int) floor(PIXELS_PER_METER * m))
#define PIXEL_TO_METERS(p)  ((float) METER_PER_PIXEL * p)

class b2World;
class b2Body;

// TODO 6: Create a small class that keeps a pointer to tghe b2Body
// and has a method to request the position
// then write the implementation in the .cpp
// Then make your circle creation function to return a pointer to that class


class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

	// TODO 4: Move body creation to 3 functions to create circles, rectangles and chains
	bool CreateCircle(float rad);
	bool CreateRectangle(float x, float y);
	bool CreateChain();
private:

	bool debug;
	b2World* world;

	int rick_head[74] = {
		1, 76,
		30, 64,
		13, 36,
		42, 38,
		41, 1,
		75, 32,
		87, 5,
		94, 40,
		111, 34,
		104, 57,
		105, 63,
		115, 66,
		109, 77,
		110, 84,
		108, 89,
		105, 94,
		110, 100,
		103, 105,
		101, 117,
		105, 121,
		105, 125,
		99, 126,
		96, 135,
		91, 143,
		84, 147,
		75, 149,
		65, 147,
		57, 144,
		50, 138,
		45, 132,
		35, 135,
		39, 126,
		24, 124,
		31, 114,
		10, 103,
		29, 91,
		8, 82
	};
};