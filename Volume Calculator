#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double cubeVol(double volume)
{
	for (double length=0.0000; length < volume; length+=.000001)
	{	
		if ((length*length*length)>=(volume-.0001) and (length*length*length)<=(volume+.0001))
			return length;
	}
}

double sphereVol(double volume)
{
	for (double radius=0.0000; radius<volume; radius+=.000001)
	{	
		if ((radius*radius*radius*(4.0/3.0)*3.14159265)>=(volume-.0001) and (radius*radius*radius*(4.0/3.0)*3.14159265)<=(volume+.0001))
			return radius;
	}
}

double cylinderVol(double volume) //when height==radius
{
	for (double radius=0.0000; radius<volume; radius+=.000001)
	{	
		if ((radius*radius*radius*3.14159265)>=(volume-.0001) and (radius*radius*radius*3.14159265)<=(volume+.0001))
			return radius;
	}
}

double coneVol(double volume) //when height==radius
{
	for (double radius=0.0000; radius<volume; radius+=.000001)
	{	
		if ((radius*radius*radius*(1.0/3.0)*3.14159265)>=(volume-.0001) and (radius*radius*radius*(1.0/3.0)*3.14159265)<=(volume+.0001))
			return radius;
	}
}

int main()
{
	double volume;

	cout << "Enter a volume in cubic meters: ";
	cin >> volume;

	cout << "Cube: " << cubeVol(volume) <<"m width, " << cubeVol(volume) <<"m length, " << cubeVol(volume) <<"m height." << endl; 
	cout << "Cylinder: " << cylinderVol(volume) <<"m tall, Diameter of " << cylinderVol(volume) <<"m." << endl; 
	cout << "Sphere: " << sphereVol(volume) <<"m radius." << endl; 
	cout << "Cone: " << coneVol(volume) <<"m tall, " << coneVol(volume) <<"m radius." << endl; 
	
	return 0;
}
