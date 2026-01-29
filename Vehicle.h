#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
private:
	int x = 0;
	int y = 0;
	int odometer = 0;
public:
	double getX();
	double getY();
	double getOdometer();
	void moveUp(double);
	void moveDown(double);
	void moveLeft(double);
	void moveRight(double);
	void display();
};
