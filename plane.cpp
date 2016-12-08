//Lab1_2
#include "plane.h"
#include <string>
#include <iostream>

using namespace std;

plane::plane()
{
}

plane::plane(string PIB, int YearOfCreating, float Capacity)
{
	this->PIB = PIB;
	this->YearOfCreating = YearOfCreating;
	this->Capacity = Capacity;
}

plane * plane::setPIB(string PIB)
{
	this->PIB = PIB;
	return this;
}

string plane::getPIB()
{
	return PIB;
}
int plane::setYearOfCreating(int YearOfCreating)
{
	this->YearOfCreating = YearOfCreating;
	return YearOfCreating;
}

int plane::getYearOfCreating()
{
	return YearOfCreating;
}

float plane::setCapacity(float Capacity)
{
	this->Capacity = Capacity;
	return Capacity;
}

float plane::getCapacity()
{
	return Capacity;
}

plane::plane(const plane & obj)
{
	PIB = obj.PIB;
	YearOfCreating = obj.YearOfCreating;
	Capacity = obj.Capacity;
	
}


void show(plane & obj)
{
	
	cout << "\nPIB" << "\t" << obj.PIB << "\t" << "YearOfCreating "  <<  obj.YearOfCreating << "\t"  << "Capacity " << obj.Capacity << endl;
}
