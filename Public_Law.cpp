#include<iostream>
using namespace std;
#include<cmath>
main()
{
  float a,b,c,f,y,x;
  cout<<"entar a= ";
  cin>>a;
  cout<<"entar b= ";
  cin>>b;
  cout<<"entrr c= ";
  cin>>c; 
  f=pow(b,2)-4*a*c;
  y=sqrt(f);
  x=(-b+y)/(2*a);
  cout<<x;
  
}
