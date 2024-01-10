#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int a = 90;
	int *p;
	p = &a;

	cout<<"Size of integer type is "<<sizeof(int)<<endl;
	cout<<"Address = "<<p<<" Value = "<<*p<<endl;

	cout<<"Meep"<<endl;
	char *p0;
	p0 = (char*)p; // typecasting
	cout<<"Size of character type is "<<sizeof(char)<<endl; // works fine in c, but in c++ doesn't
	cout<<"Address = "<<p0<<" Value = "<<*p0<<endl; // works fine in c, but in c++ doesn't

	cout<<endl;
	/*
		Void Pointer
	*/
	cout<<"Void Pointer\n";

	void *p1;
	p1 = p;

	cout<<"Address = "<<p1<<endl;


	return 0;
}
