#include<iostream>
#include<cmath>

using namespace std;

int main() {
	const PI = 3.1459;
	double radius;

	cout << "Type the radius of the sphere." << endl;
	cin >> radius;

	double area = PI * pow(radius, 3);

	cout << "The area of the sphere is " << area << endl;
}
