#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Taxi : public Vehicle
{
private:
	double rate;
	double balance = 0;
public:
	void callTaxi(int pickUpX, int pickUpY, int destinationX, int destinationY);
	void display();
	Taxi(int x, int y, double rate);
};

void Taxi::callTaxi(int pickUpX, int pickUpY, int destinationX, int destinationY)
{
	odometer += ((pickUpX - x) + (pickUpY - y)) + ((destinationX - pickUpX) + (destinationY - pickUpY));
	balance += (destinationX - pickUpX) + (destinationY - pickUpY) * rate;
	this->x = destinationX;
	this->y = destinationY;
}
void Taxi::display()
{
	cout << "Position: " << x << ", " << y << endl
		<< "Odometer: " << odometer << endl
		<< "Rate: " << rate << endl << "Balance: " << balance
		<< endl;
}
Taxi::Taxi(int x, int y, double rate)
{
	this->x = x;
	this->y = y;
	this->rate = rate;
}
