#include<iostream>
using namespace std;

class Public
{	
	public:
    char name[100] ;
};
main()
{
	Public a1;
	cout<<"Enter your name->";
	cin>>a1.name;
	
	
	cout<<"Name ->"<<a1.name;
	
}

