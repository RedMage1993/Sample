// Fritz Ammon
// 23 August 2017
// AbstractFactory
// Humanoid.h

#pragma once

#include "Hand.h"

class Humanoid {
public:
	Humanoid();

	~Humanoid();

	bool attachHand(Hand* const);
	bool detachHand(Hand::HandSide side);

private:
	Hand *m_leftHand;
	Hand *m_rightHand;

	void deleteHand(Hand*&);
};
