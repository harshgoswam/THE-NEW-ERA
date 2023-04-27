#include <iostream>
#include<string.h>

using namespace std;

class students

{
	private:
	int roll;
	char name[100];
	int std;
	char contact[11];
	char ad[100];
	
};

int main()

{ students s[5];


    for(int i = 0; i < 5; ++i)
    {
       
    cout<<"Enter Roll Number->";
	cin>>s[i].roll;
	cout<<"Enter Name->";
	cin>>s[i].name;
	cout<<"Enter standard->";
	cin>>s[i].std;
	cout<<"Enter Contact Deails->";
	cin>>s[i].contact;
	cout<<"Enter Address->";
	cin>>s[i].ad;
	cout << endl;
	 
    }
    
  	cout<<"--------------------------------------------"<<endl;

    for(int i = 0; i < 5; ++i)
    {
		
    cout<<"Roll number ->"<<s[i].roll<<endl;
	cout<<"Name ->"<<s[i].name<<endl;
	cout<<"Standard ->"<<s[i].std<<endl;
	cout<<"Contact Detail ->"<<s[i].contact<<endl;
	cout<<"Address ->"<<s[i].ad<<endl;
	cout << endl;

    }

    
}
