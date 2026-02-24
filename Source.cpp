#include <iostream>
#include "Vehicle.h"
#include "Taxi.h"
using namespace std;

int main()
{
	Taxi* b = new Taxi(0, 0, 5);
	b->callTaxi(7, 4, 5, 10);
	b->display();
}
