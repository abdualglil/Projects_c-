#include<iostream>
using namespace std;
main()
{
	float f,gf,af,tf,s,gs,as,ts,r,gr,ar,tr,w,gw,aw,tw,f1,s1,r1,w1,ta,tg,pi;
	cout<<"ples entar cost price"<<endl;
	cout<<"flour =";
	cin>>f1;
	cout<<"sugar =";
	cin>>s1;
	cout<<"raic =";
	cin>>r1;
	cout<<"whwat =";
	cin>>w1;
	cout<<"\twelcom\n    Al - Bukhash Stores"<<"\n______Invoice salen_______"<<"\n_______________________________________"<<endl;
	cout<<" entar quantity flor =";
	cin>>gf;
	cout<<"entar unit prlice =";
	cin>>af;
	tf=gf*af;
	cout<<"total value ="<<tf<<endl;
		cout<<" entar quantity sugar =";
	cin>>gs;
	cout<<"entar unit prlice =";
	cin>>as;
	ts=gs*as;
	cout<<"total value ="<<ts<<endl;
		cout<<" entar quantity raic =";
	cin>>gr;
	cout<<"entar unit prlice =";
	cin>>ar;
	tr=gr*ar;
	cout<<"total value ="<<tr<<endl;
		cout<<" entar quantity wheat =";
	cin>>gw;
	cout<<"entar unit prlice =";
	cin>>aw;
	tw=gw*aw;
	cout<<"total value ="<<tw<<endl<<"============================================";
	ta=tw+tr+ts+tf;
	cout<<"\ntotal all  ="<<ta;
	tg=gf+gs+gr+gw;
	cout<<"\nTotal quantity ="<<tg;
	pi=tf-(f1*gf)+ts-(s1*gs)+tw-(w1*gw)+tr-(r1*gr);
	cout<<"\nProfit Invoice  ="<<pi;
		cout<<"\n\n\n====Thankful for your visit=====\n\n\n";
	system("pause");
}
