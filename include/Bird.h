#pragma once
#include "Monster.h"
#include <ostream>


class Bird : public Monster
{

public:

	//----Constructor for Bird object------
	Bird(sf::Vector2i location, char icon);

	void draw(sf::RenderWindow& window, float clock_sample)override; //draw func
	void update_time_counter(float add) ; // func to update time counter
	void move(float x, float y, float dirc) override {}; // empty definition used for polymorphism
	void movement(float x, float y, float dirc) override; // empty definition used for polymorphism
	void set_direction() ; // sets Birds direction
	void set_y_position(float y) override { m_location.y = y; }; // empty definition used for polymorphism
	void setLocation(float newState) { m_location.x *= newState; };
	void set_location(sf::Vector2f location); // sets Bird location
	void fix_position(); // fixes Bird position

	directions_t get_direction() const; // gets directions from enum

	const sf::Vector2f get_location() const; // gets location vertex
	const sf::Sprite get_sprite() const { return m_pic; }; // gets Bird picture

private:

	float m_x;
	float m_y;
	float m_time_counter;
};
