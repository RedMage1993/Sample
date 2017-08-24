// Fritz Ammon
// 23 August 2017
// AbstractFactory
// Hand.h

#pragma once

class Hand {
public:
	enum HandSide { Left, Right };
	enum HandSize { Small, Medium, Large };

	Hand();
	Hand(HandSide, HandSize = Medium);

	HandSide getHandSide();
	HandSize getHandSize();

	void setHandSide(HandSide);
	void setHandSize(HandSize);

private:
	HandSide m_side;
	HandSize m_size;
};