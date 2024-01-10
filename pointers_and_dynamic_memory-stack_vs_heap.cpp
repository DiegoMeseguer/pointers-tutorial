#include <iostream>
using namespace std;

int main() {
	
	int a; // goes on stack
	int *p; // integer pointer

	p = (int*)malloc(sizeof(int));  // returns a void pointer to
									// an address in the heap,
									// because it's a void
									// pointer we need to use
									// a typecast in order to
									// get an integer pointer
									// that we can assign to p

	*p = 10;
	cout<<p<<endl;
	cout<<*p<<endl;	// 10
	free(p); // after we are done, we need to manually clear the
			 // memory with the free() function
	cout<<p<<endl;
	cout<<*p<<endl; // I can still see the address and the value
					// but this is Undefined Behavior, so never
					// do this

	p = (int*)malloc(sizeof(int));
	*p = 20;
	cout<<p<<endl;
	cout<<*p<<endl;
	free(p);
	cout<<endl;

	p = (int*)malloc(20 * sizeof(int)); // creates an array of
										// 20 integers in the
										// heap
	cout<<p<<endl;
	cout<<*p<<endl;
	*p = 199;
	*(p+2) = 100;
	cout<<*p<<endl; // same as p[0]
	cout<<p[1]<<endl;
	cout<<p[2]<<endl;

	for(int i = 0; i < 20; i++) {
		cout<<p[i]<<" ";
	}

	cout<<endl;

	// Now lets do the same as above C++ style

	int b; // goes on stack
	int *r;

	r = new int;
	*r = 80;

	delete r;
	r = new int[20];

	r[5] = 712;

	for(int i = 0; i < 20; i++) {
		cout<<r[i]<<" ";
	}
	cout<<endl;

	delete[] r;

	return 0;
}

