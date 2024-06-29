#include<iostream>
#include <math.h>
using namespace std;
int main()
{
	float R,V,a,g=9.8;
	cout<<"Enter the value of intial velocity 'v' in m/s:"<<endl;
	cin>>V;
	cout<<"Enter the value of angle 'a' in radians:"<<endl;
	cin>>a;
	float rad_a= a*(M_PI/180);
	R=(V*V*sin(2*rad_a))/(g);
	cout<<" Distance travlled by Ball 'R' before hitting the ground :"<<R<<" m";
	return 0;
}
