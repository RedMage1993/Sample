// Fritz Ammon
// 23 August 2017
// AbstractFactory
// HumanoidFactory.cpp

#include "HumanoidFactory.h"

HumanoidFactory::HumanoidFactory() {}

Humanoid* HumanoidFactory::MakeHumanoid() const {
	return new Humanoid();
}

Hand* HumanoidFactory::MakeHand() const {
	return new Hand();
}