// Fritz Ammon
// 23 August 2017
// AbstractFactory
// HumanoidFactory.h

#pragma once

#include "Humanoid.h"

class HumanoidFactory {
public:
	HumanoidFactory();

	virtual Humanoid* MakeHumanoid() const;

	virtual Hand* MakeHand() const;
};