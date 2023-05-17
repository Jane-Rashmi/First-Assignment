using namespace std;
#include <iostream>
#include <string.h>

class Car{
public: 
	int ReleaseYear;
	string customer;
	int speed;
	void getValues(int year,string name,int vehiclespeed);
	void accelerate();
	void brake();
};

void Car::getValues(int year, string name, int vehiclespeed)
{
	ReleaseYear= year;
	customer= name;
	speed= vehiclespeed;
}

void Car::accelerate()
{
	speed+=10;
	std::cout<<"accelerated speed:"<<speed<<"\n";
}
void Car::brake()
{
	speed-=10;
	std::cout<<"decelerated speed:"<<speed<<"\n";
}