// Fritz Ammon
// 23 August 2017
// AbstractFactory
// Hand.cpp

#include "Hand.h"

Hand::Hand() : m_side(static_cast<HandSide> (-1)), m_size(Medium) {}

Hand::Hand(HandSide side, HandSize size) : m_size(size), m_side(side) {}

Hand::HandSide Hand::getHandSide() {
	return this->m_side;
}

Hand::HandSize Hand::getHandSize() {
	return this->m_size;
}

void Hand::setHandSide(HandSide side) {
	this->m_side = side;
}

void Hand::setHandSize(HandSize size) {
	this->m_size = size;
}