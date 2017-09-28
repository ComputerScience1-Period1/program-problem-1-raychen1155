/*
ray chen - 22 September 2017 period 1
*/
// Libraries
#include <iostream> // gives access to cin, out, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	cout << "Hello World!" << endl;
	cout << "Ray Chen" << endl;
	cout << int(1) << endl;
	pause();
}