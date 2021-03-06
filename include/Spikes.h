#pragma once
#include "StaticObject.h"

class Spikes : public StaticObject
{

public:

	//----Constructor for Spikes object------
	Spikes(sf::Vector2i location, char icon);
	void draw(sf::RenderWindow& win, float clock_sample); // draws the object on board
	void changPic()override {}; // changes the picture for animation
	void setLocation(float newState) {}; // sets objects location
	sf::Sprite get_sprite()override { return m_pic; }; // gets picture
	~Spikes() = default;

private:

};

