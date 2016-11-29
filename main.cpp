#include <iostream>
#include <string>
#include "plane.h"

using namespace std;

int main(int argc, char** argv) {
	plane obj;
	string PIB;
	int YearOfCreating;
	float Capacity;
	cout << "input PIB" <<"\t" << "input YearOfCreating" << "\t" << "input Capacity" << endl;
	cin >> PIB >> YearOfCreating >> Capacity;
	obj.setPIB(PIB);
	obj.setYearOfCreating(YearOfCreating);
	obj.setCapacity(Capacity);
	cout << "PIB" << obj.getPIB() << endl;
	cout << "YearOfCreating" << obj.getYearOfCreating() << endl;
	cout << "Capacity" << obj.getCapacity() << endl;
	
	
	return 0;
}
