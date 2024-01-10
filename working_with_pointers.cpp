#include <iostream>
using namespace std;

int main() {
	
	// Recap:
	// Pointers - variables that store address of other variables

	int x; // integer
	int *pp; // pointer to integer
	char y; // character
	char *pp0; // pointer to character
	double z; // double
	double *pp1; // pointer to double

	// To get the address of a variable we use a statement
	// like p = &a;
	// The ampersand works as an operator that gives us
	// the address of a

	//Guess output
	int a;
	int *p;
	cout<<p<<endl; 	// this will print the address that the
					// pointer p points to
					// Note: in the tutorial it gives an error
					// because the variable p is not initialized

	p = &a; // &a = address of a

	cout<<p<<endl;  // it gives us an address, in this case the
					// address of a

	cout<<*p<<endl; // it gives us the value of a, should be 0
					// because a hasn't been initialized
	a = 20;
	cout<<*p<<endl; // now it should print the value of a
					// which is 20

	cout<<&a<<endl; // this should print the address of a.
					// It should  be the same value as the one
					// that was printed by cout<<p

	*p = 289; // dereferencing
	cout<<"The new value of a is: "<<a<<endl;

	// We can also declare and initialize a pointer at the same time
	int *puntero = &a;

	cout<<endl;

	/*
		Pointer Arithmetic
	*/

	cout<<"Pointer Arithmetic\n";

	cout<<"Address p is: "<<p<<endl;
	cout<<"Value at address p is: "<<*p<<endl;
	cout<<"The size of an int in this platform is: "
		<<sizeof(int)<<endl;
	cout<<"Address p+1 is: "<<p+1<<endl;// We can see that this address is 4 bytes
					 					// after the address of the previous
					 					// pointer, this is because an int uses
					 					// 4 bytes in this platform 
 	cout<<"Value at address p+1 is: "<<*(p+1)<<endl;

	return 0;
}
