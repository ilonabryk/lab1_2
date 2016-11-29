#ifndef PLANE_H
#define PLANE_H
#include <string>

using namespace std;


class plane
{
	string PIB;
	int YearOfCreating;
	float Capacity;
	public:
		plane();
		plane(string PIB, int yearOfCreating, float capacity);
		plane* setPIB(string);
		string getPIB();
		int setYearOfCreating(int);
		int getYearOfCreating();
		float setCapacity(float);
		float getCapacity();
		};

#endif
