#pragma once
#include "StaticObject.h"

class Ladder : public StaticObject
{

public:

	//----Constructor for Vine object------
	Ladder(sf::Vector2i location, char icon);
	void draw(sf::RenderWindow& win, float clock_sample); // draws the object on board
	void changPic()override {}; // changes the picture for animation
	void setLocation(float newState) {}; // sets objects location
	sf::Sprite get_sprite()override { return m_pic; }; // gets picture
	~Ladder() = default;

private:

};

