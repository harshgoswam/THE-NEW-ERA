#include <iostream>
#include<string.h>

using namespace std;

class students

{
	public:
	int l,b,h;
	int hno;
	char housename[100];
	char address [100];
	char city[100];
	char state[100];
	
};

int main()

{
     students s[5];
     
     
    

    for(int i = 0; i < 5; ++i)
    {
       
    
	cout<<" Enter House Name : ";
	cin>>s[i].housename;	
	cout<<"Enter House Number : ";
	cin>>s[i].hno;	
	cout<<"Enter Address->";
	cin>>s[i].address;	
	cout<<"Enter length, breath, height: ";
	cin>>s[i].l>>s[i].b>>s[i].h;
	cout<<"Enter city :";
	cin>>s[i].city;
	cout<<"Enter state : ";
	cin>>s[i].state;

	cout << endl;
	 
    }
  	cout<<"--------------------------------------------"<<endl;

    for(int i = 0; i < 5; ++i)
    {
		
	cout<<"house name ->"<<s[i].housename<<endl;
	cout<<"house number ->"<<s[i].hno<<endl;
	cout<<"Address ->"<<s[i].address<<endl;
	cout<<"Length-> "<<s[i].l<<",Breath-> "<<s[i].b<<", Height-> "<<s[i].h<<endl;
	cout<<"city ->"<<s[i].city<<endl;
	cout<<"state ->"<<s[i].state<<endl;
	cout << endl;

    }

    
}
