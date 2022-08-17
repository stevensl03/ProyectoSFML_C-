#pragma once
#include <SFML/Graphics.hpp>

#define MAX_NUMBER_OF_ITEMS 4

using namespace sf;



class Menu {
protected:
	int selectedItemIndex;
	Font font;
	Text menu[MAX_NUMBER_OF_ITEMS];

public:
	Menu();
	Menu(float width, float height);

	void draw(RenderWindow& window);
	void moveUp();
	void moveDown();
	int getPressedItem() { return selectedItemIndex; }


};
