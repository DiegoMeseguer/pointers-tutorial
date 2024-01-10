#include <iostream>

using namespace std;

int main() {
	
	// Syntax of pointers
	int a;
	int *p;
	p = &a; // p now has the address of a
			// and points to a
  	
  	a = 5;
  	cout<<p<<endl;  // if we try to print p
  					// we get the address of a variable, 
					// in this case of a

  	cout<<&a<<endl; // Will also give us the same
  					// address as above, since it
  					// gives us the address of a
	
	cout<<&p<<endl; // The address of p

	// if we put an * in front of a pointer
	// then it gives us the value at the location
	// that it points to

	cout<<*p<<endl; // This gives us 5. This concept is
					// called dereferencing

	// We can use the concept of dereferencing to change
	// the value of a by operating on the pointer p

	*p = 166;
	cout<<"a is now: "<<a<<endl;

	// So, to summarize
	// p -> address
	// *p -> value at address

	return 0;
}

