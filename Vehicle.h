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
	double getX();
	double getY();
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();
	void display();
};
