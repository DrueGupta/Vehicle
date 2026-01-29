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
	void moveUp(double);
	void moveDown(double);
	void moveLeft(double);
	void moveRight(double);
	void display();
};
