#include<iostream>

using namespace std;

 class Distance
{
	public:
	int feet;
	int inch;
};
main()
{
	Distance first,second,dist;
	cout<<"Enter first distance feet:";
	cin>>first.feet;
	cout<<"Enter first distnce inch:";
	cin>>first.inch;
	
	cout<<"Emter second distance feet:";
	cin>>second.feet;
	cout<<"Enter second distance inch:";
	cin>>second.inch;
	
	dist.feet=first.feet+second.feet;
	dist.inch=second.inch+second.inch;
	
	
	while((dist.inch)>=12)
	{
		dist.inch=dist.inch-12;
		dist.feet++;
	}
	
	cout<<"Total distance="<<dist.feet<<"feet"<<dist.inch<<"inch";
}
