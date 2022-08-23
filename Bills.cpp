#include<iostream>
using namespace std;
main()
{
	float quantityF,unit_priceF,total_valuaF,quantityS,unit_priceS,total_valuaS,quantityR,unit_priceR,total_valuaR,quantityW,unit_priceW,total_valuaW,total_all,Discount;
	cout<<"pleas enter quantity flor=";
	cin>>quantityF;
	cout<<"pleas enter unit_price flor=";
	cin>>unit_priceF;
	total_valuaF=quantityF*unit_priceF;
	cout<<"total_valua flor=";
	cout<<total_valuaF;
	cout<<"\n\n";
	cout<<"pleas enter quantity sugar=";
	cin>>quantityS;
	cout<<"pleas enter unit_price sugar=";
	cin>>unit_priceS;
	total_valuaS=quantityS*unit_priceS;
	cout<<"total_valua sugar=";
	cout<<total_valuaS;
	cout<<"\n\n";
	cout<<"pleas enter quantity raic=";
	cin>>quantityR;
	cout<<"pleas enter unit_price raic=";
	cin>>unit_priceR;
	total_valuaR=quantityR*unit_priceR;
	cout<<"total_valua raic=";
	cout<<total_valuaR;
	cout<<"\n\n";
	cout<<"pleas enter quantity wheat=";
	cin>>quantityW;
	cout<<"pleas enter unit_price wheat=";
	cin>>unit_priceW;
	total_valuaW=quantityW*unit_priceW;
	cout<<"total_valua wheat=";
	cout<<total_valuaW;
	cout<<"\n\n";
	cout<<"Discount";
	cin>>Discount;
	total_all=total_valuaF+total_valuaS+total_valuaR+total_valuaW-Discount;
	cout<<"\n\n\n------------------------------\n\n";
	cout<<"total all=";
	cout<<total_all;
	cout<<"\n\n\n====Thankful for your visit=====\n\n\n";
	system("pause");
	
	
}
