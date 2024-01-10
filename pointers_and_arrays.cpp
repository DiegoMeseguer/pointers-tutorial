#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int arr[5] = {2, 4, 6, 8, 10};
	int *p;
	p = &arr[0];
	// p = arr; 

	cout<<"Same address "<<arr<<endl; 
	cout<<"Same address "<<&arr[0]<<endl; //Both addresses are the
									 	  //same, we can simply
										  //just use the name of
										  //the array

	cout<<p<<endl; // we can see that the addresses are the same
	cout<<*p<<endl; // the value should be 2

	cout<<p+1<<endl; // this should be the address of the next 
					 // element in the array arr
	cout<<*(p+1)<<endl; // this should be 4, we no longer get a
						// garbage value since this is an array
	
	/*
		So basically, for an element at index i we can get
		Address if we use either &arr[i] or (arr + i)
		Value if we use either arr[i] or *(arr + i)
	*/

	cout<<p<<endl;
	p++; 	 // We can use the increment operator with the
			 // pointer, but we cannot use it with the array
			 // name... ++arr is invalid
	cout<<p<<endl;

	return 0;
}
