#pragma once

#include "Item.h"

class Key : public Item
{

public:

	//----Constructor for key object------
	Key(sf::Vector2i location, char icon) ;
	void draw(sf::RenderWindow& win, float clock_sample); // draws the object on board
	void changPic()override {}; // changes the picture for animation
	void setLocation(float newState) {}; // sets objects location
	sf::Sprite get_sprite()override { return m_pic; }; // gets picture
	~Key() = default;

private:

	int m_pic_frame;
	int m_time_counter;
};