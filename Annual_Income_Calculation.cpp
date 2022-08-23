#include<iostream>
using namespace std;
main()
{
	int salary,sat,san,mon,tus,wed,thu,fri,month,averout,annetout,netanin,totalin,;
	cout<<" entar the Your monthly salary =";
	cin>>salary;
	cout<<" entar the  went out Saturday =";
	cin>>sat;
	cout<<" entar the  went out Sanday =";
	cin>>san;
	cout<<" entar the  went out monday =";
	cin>>mon;
	cout<<" entar the  went out tusday =";
	cin>>tus;
	cout<<" entar the  went out Wednesday =";
	cin>>wed;
	cout<<" entar the  went out Thursday=";
	cin>>thu;
	cout<<" entar the  went out friday =";
	cin>>fri;
	averout=(sat+san+mon+tus+wed+thu+fri)/7;
	cout<<" the Average output ="<<averout<<endl;
	annetout=averout*365;
	cout<<" the Annual net output ="<<annetout<<endl;
	netanin=salary*12;
	cout<<" the Net annual income ="<<netanin<<endl;
	totalin=netanin-annetout;
	cout<<" Total annual income ="<<totalin<<endl;
	system("pause");
	
}
