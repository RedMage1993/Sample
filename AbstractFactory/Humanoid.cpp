// Fritz Ammon
// 23 August 2017
// AbstractFactory
// Humanoid.cpp

#include "Humanoid.h"

Humanoid::Humanoid() {}

Humanoid::~Humanoid() {
	detachHand(Hand::Left);
	detachHand(Hand::Right);
}

bool Humanoid::attachHand(Hand* const hand)
{
	switch (hand->getHandSide()) {
	case Hand::Left:
		this->m_leftHand = hand;
		break;
	case Hand::Right:
		this->m_rightHand = hand;
		break;
	default:
		return false;
	}

	return true;
}

void Humanoid::deleteHand(Hand* &hand) {
	if (hand != nullptr) {
		delete hand;
		hand = nullptr;
	}
}

bool Humanoid::detachHand(Hand::HandSide side) {
	switch (side) {
	case Hand::Left:
		deleteHand(this->m_leftHand);
		break;
	case Hand::Right:
		deleteHand(this->m_rightHand);
		break;
	default:
		return false;
	}

	return true;
}