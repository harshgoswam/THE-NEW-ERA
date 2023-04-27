#include<iostream>
using namespace std;

class time
{
	public:
	int seconds,sec,hr,min;

};
main()

{    
       time t ;

     cout<<"Enter seconds:";
     cin>>t.seconds;
     
     t.hr=t.seconds/3600;
     t.seconds=t.seconds%3600;
     t.min=t.seconds/60;
     t.sec=t.seconds%60;

     cout<<"HH:MM:SS->"<<t.hr<<":"<<t.min<<":"<<t.sec;


}
