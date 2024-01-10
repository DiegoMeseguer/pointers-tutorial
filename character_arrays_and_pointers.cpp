#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// char C[4] = "JOHN"; this gives an error because the
	// string literal terminates with the NULL character
	// so the array is too small to hold the whole string

	char C[] = "JOHN";
	cout<<sizeof(C)<<endl;	// this should be 5 bytes
	cout<<sizeof(C[0])<<endl;	// this should be 1 byte

	/* 
	Arrays and pointers are different types that are used
	in similar manner (also there are differences)
	*/

	char c1[6] = "Hello";
	char *c2;

	c2 = c1; // gives the address of the first element of the
			 // char array c1 to the pointer c2
	cout<<c2<<" is equal to "<<c1<<endl; // Nevertheles when I
										 // print this it gives
										 // me the whole c-string
										 // instead of the address

	cout<<(void*)c2<<endl; // so apparently the << operator is
						   // overloaded, so I have to cast the
						   // pointer if I want to get the
						   // address, now they should be the same
 	cout<<&c1<<endl;

 	cout<<c2[1]<<" is equal to "<<c1[1]<<endl;
 	c2[0] = 'A'; // Aello
 	cout<<c1<<endl;

 	// c2[i] is *(c2+i)
 	// we can write c1[i] or *(c1 + i)

 	// Some differences

 	//c1 = c2; // ILLEGAL
 	//c1 = c1 + 1; // ILLEGAL

 	/* 
	Arrays are always passed to function by reference
	*/

	return 0;
}

