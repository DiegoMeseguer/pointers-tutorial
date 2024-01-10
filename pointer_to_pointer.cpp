#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int x = 5;
	int *p = &x; // a pointer that points to the address of x
	*p = 6;

	int **q = &p; // a pointer to the pointer that points to x
	int ***r = &q; // a pointer to the pointer to the pointer that points to x\

	cout<<*p<<endl; // this is 6
	cout<<*q<<" are the same "<<&x<<endl;  // this is the address of x

	//Now we are gonna do dereferencing twice
	cout<<*(*q)<<endl; // this should be 6
	cout<<**q<<endl; // same as above

	cout<<*(*r)<<endl; // this is the address of x
	cout<<*(*(*r))<<endl; // this is 6

	***r = 2010;
	cout<<x<<endl;

	**q = *p + 4;
	cout<<x<<endl;

	return 0;
}
