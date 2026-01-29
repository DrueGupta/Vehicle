#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int x;
	int y;
	int odometer;
public:
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void display();
};
