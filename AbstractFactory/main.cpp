// Fritz Ammon
// 23 August 2017
// AbstractFactory
// main.cpp

#include "HumanoidFactory.h"

Humanoid* createHumanoid(const HumanoidFactory&);

int main() {
	HumanoidFactory humanoidFactory;
	Humanoid *humanoid = createHumanoid(humanoidFactory);

	if (humanoid != nullptr) {
		delete humanoid;
		humanoid = nullptr;
	}

	return 0;
}

Humanoid* createHumanoid(const HumanoidFactory& humanoidFactory) {
	Humanoid *humanoid = humanoidFactory.MakeHumanoid();
	Hand *leftHand = humanoidFactory.MakeHand();
	Hand *rightHand = humanoidFactory.MakeHand();

	leftHand->setHandSide(Hand::HandSide::Left);
	rightHand->setHandSide(Hand::HandSide::Right);

	humanoid->attachHand(leftHand);
	humanoid->attachHand(rightHand);

	return humanoid;
}