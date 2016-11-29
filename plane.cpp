#include "plane.h"
#include <string>


plane::plane()
{
}

plane::plane(string PIB, int YearOfCreating, float Capacity)
{
	this->PIB = PIB;
	this->YearOfCreating = YearOfCreating;
	this->Capacity = Capacity;
}

plane* plane::setPIB(string PIB)
{
	this->PIB = PIB;
}

string plane::getPIB()
{
	return PIB;
}
int plane::setYearOfCreating(int YearOfCreating)
{
	this->YearOfCreating = YearOfCreating;
}

int plane::getYearOfCreating()
{
	return YearOfCreating;
}

float plane::setCapacity(float Capacity)
{
	this->Capacity = Capacity;
}

float plane::getCapacity()
{
	return Capacity;
}


