// Fritz Ammon
// 23 August 2017
// AbstractFactory
// Hand.cpp

#include "Hand.h"

Hand::Hand() {
	this->side = static_cast<HandSide> (-1);
	this->size = Medium;
}

Hand::Hand(HandSide side, HandSize size) {
	this->size = size;
	this->side = side;
}

Hand::HandSide Hand::getHandSide() {
	return this->side;
}

Hand::HandSize Hand::getHandSize() {
	return this->size;
}

void Hand::setHandSide(HandSide side) {
	this->side = side;
}

void Hand::setHandSize(HandSize size) {
	this->size = size;
}