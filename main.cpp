#include "header.hpp"
#include <string.h>

int main()
{
	Car car;
	car.ReleaseYear=1999;
	car.customer= "FCA";
	car.speed= 200;
	int k;
	int j;
	car.getValues(car.ReleaseYear, car.customer, car.speed);
	for(k=0;k<5; k++)
	{
		car.accelerate();
		std::cout<<"accelerated speed:"<<car.speed<<"\n";

	}
	for(j=0;j<5; j++)
	{
		car.brake();
		std::cout<<"decelerated speed:"<<car.speed<<"\n";
	}
	return 0;
}
