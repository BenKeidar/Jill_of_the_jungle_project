#pragma once

#include <ostream>
#include "Monster.h"

class Alligator : public Monster
{

public:

	//----Constructor for Alligator object------
	Alligator(sf::Vector2i location, char icon);

	void draw(sf::RenderWindow& window, float clock_sample)override; // draw func
	void update_time_counter(float add) ; // func to update time counter
	void move(float x, float y, float dirc) override {}; // empty definition used for polymorphism
	void movement(float x, float y, float dirc) override; // empty definition used for polymorphism
	void set_y_position(float y) override {}; // empty definition used for polymorphism
	void set_direction(); // sets aligator direction
	void setLocation(float newState) { m_location.x *= newState; };
	void set_location(sf::Vector2f location); // sets aligator location
	void fix_position() ; // fixes alligators position

	directions_t get_direction() const; // gets directions from enum
	sf::Vector2f get_location() const; // gets location vertex
	sf::Sprite get_sprite() { return m_pic; }; // gets alligators picture

private:
	float m_x; 
	float m_time_counter;
};
