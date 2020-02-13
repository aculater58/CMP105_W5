#include "Level.h"
#include "Zombie.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	Sprite2TXT.loadFromFile("gfx/animZombie.png");

	zombie.setTexture(&Sprite2TXT);
	zombie.setSize(sf::Vector2f(55, 180));
	zombie.setPosition(200, 200);

	Sprite1TXT.loadFromFile("gfx/SANIC.jpeg");

	Sprite1.setTexture(&Sprite1TXT);
	Sprite1.setSize(sf::Vector2f(100, 100));
	Sprite1.setPosition(100, 100);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{

}

// Update game objects
void Level::update(float dt)
{
	zombie.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(Sprite1);
	window->draw(zombie);
	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}