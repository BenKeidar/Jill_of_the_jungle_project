#pragma once

#include <ostream>
#include "Monster.h"

class Ant : public Monster
{

public:

	//----Constructor for Ant object------

	Ant(sf::Vector2i location, char icon);

	void draw(sf::RenderWindow& window, float clock_sample)override; // draw func
	void update_time_counter(float add) ; // func to update time counter
	void move(float x, float y, float dirc) override {}; // empty definition used for polymorphism
	void movement(float x, float y, float dirc) override; // empty definition used for polymorphism
	void set_y_position(float y) override {}; // empty definition used for polymorphism
	void set_location(sf::Vector2f location) ; // sets Ant location
	void setLocation(float newState) { m_location.x *= newState; };
	void set_direction() ; // sets Ants direction
	void fix_position() ; // fixes Ants position

	const sf::Sprite get_sprite() const { return m_pic; }; // gets ants picture
	const sf::Vector2f get_location() const;  // gets location vertex
	directions_t get_direction() const; // gets directions from enum

private:
	float m_x;
	float m_time_counter;
};
