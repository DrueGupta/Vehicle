#include <iostream>
#include "Vehicle.h"
using namespace std;

double Vehicle::getX()
{
	return x;
}

double Vehicle::getY()
{
	return y;
}

double Vehicle::getOdometer()
{
	return odometer;
}

void Vehicle::moveUp(double y)
{
	this->y += y;
	odometer += y;
}

void Vehicle::moveDown(double y)
{
	this->y -= y;
	odometer += y;
}

void Vehicle::moveRight(double x)
{
	this->x += x;
	odometer += x;
}

void Vehicle::moveLeft(double x)
{
	this->x -= x;
	odometer += x;
}

void Vehicle::display()
{
	cout << x << " " << y << " " << odometer << endl;
}
