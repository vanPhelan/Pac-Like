#pragma once
#include "Agent.h"

class Pac : public Agent
{
public:
	Pac(float x, float y, float speed);

	virtual void draw() override;

	virtual void onCollision(Actor* other) override;
};

