#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;
struct beanat
{
	int no_h;
	string nem_send;
	int send_pon;
	string nem_rec;
	string curr;
	double amo;	
	int com;
	string date_time;
};
int comm(string a,double c)

{
	int b=c;
	int gh=0;
	if (a=="YER")
	{
		if (b<50000)
		gh=300;
		else if (b<100001)
		gh=500;
		else if (b<300000)
		gh=700;
		else if (b<800000)
		gh=900;
		else if (b<1000001)
		gh=1000;
		else  if(b>1000002)
		{
			int v=0;
			gh=2000;
			for (int i=1;i<=v;i++)
			{
				if (b%100000==0)
				break;
				else 
				{
					v++;
					gh=gh*v;
				}
			}
		}
	}
	else if(a=="SAR")
	{
		if (b<500)
		gh=300;
		else if (b<1000)
		gh=500;
		else if (b<2000)
		gh=700;
		else if (b<5000)
		gh=1000;
		else if (b<10001)
		gh = 2000;
		else
		{
			int v=1;
				gh=2000;
			for (int i=1;i<=v;i++)
			{
				if (b%10000==0)
				break;
				else 
				{
					v++;
					gh=gh*v;
		}
	}
	
}
}
return (gh);
}
 int main()
{
	
	int ex,m=2,qw,as,pas,g,v,omla,p1=0,pas2=776320141,we=0;
	float po;
	beanat hoa[m],sa[1000],sa1;
	sabedr:
	system("color a9");
	cout<<"             welcom..... "<<endl;
	cout<<"========================================"<<endl;
	string admn,ppa;
	fstream sg,exp,sa_w,sa_wk;
	time_t now=time(0);
	abdu:
	cout<<"user name:-";
	cin>>admn;
	cout<<"password:-";
	cin>>pas;
	if (admn=="bakhash" and pas==pas2)
	{	
	system("cls");
		ali:
		system("color f2");
		cout<<"========================\n";
	 cout<<"Entar [1] alhiwalat alwariduh. \nEnter [2] sarf alhawalat alwariduh.\nEnter[3]Settingsenter\nEnter[4]total sandoqg+ \n.  Enter[5]To close \n  enter =:=";
	 cin>>qw;
	system("cls");
	 switch (qw)
	 {
	case 1:{
		
		cout<<"------------------------------\n";
	cout<<"Enter the number of transfers to be entered :-";
	(cin>>m).get();
	cout<<"-----------------------------\n";
	sg.open("wared.txt",ios::out|ios::app);
	sa_w.open("sandok-wared-YER.txt",ios::out|ios::app);
	sa_wk.open("sandok-wared-SAR.txt",ios::out|ios::app);
	exp.open("expres.txt");
	exp >> hoa[0].no_h;
	exp.close();
	for (int r=0;r<m;r++)
	{
	hoa[r].no_h=hoa[0].no_h+1;

	cout<<"enter nema sand :-";
	getline(cin,hoa[r].nem_send);
	cout<<"enter pon namper sand = ";
	(cin>>hoa[r].send_pon).get();
	cout<<"enter nema rec :-";
	getline(cin,hoa[r].nem_rec);
	jlal:
	cout<<" the currency   enter {Saudi [1] or Yemeni [2]}:-";
	cin>>omla;
	if (omla==1){
	cout<<"      SAR       \n";
	hoa[r].curr="SAR";	
	}
	else if (omla==2)
	{
	cout<<"     YER        \n";
	hoa[r].curr="YER";
	}
	else 
	{
		cout<<"Error entering the currency, enter 1 Saudi or 2 Yemeni\n";
		goto jlal;
	}
	cout<<"enter the amount = ";
	(cin>>hoa[r].amo).get();
	hoa[r].date_time=ctime(&now);
	hoa[r].com=comm(hoa[r].curr,hoa[r].amo);
	cout<<"------------------------------------\n";
	cout<<"His conversion money===[ "<<hoa[r].com<<"] YER :\n";
	cout<<"------------------------------------------\n";
	if (hoa[r].curr=="YER")
	{
		po=hoa[r].com+hoa[r].amo;
		cout<<"Total amoun1`t with commission =["<<po<<"]"<<endl;
		sa_w<<po<<endl;
	}
	else if(hoa[r].curr=="SAR")
	{
		sa_w << hoa[r].com ;
		sa_wk << hoa[r].amo ;
	}

	cout<<"the Hawala Express No:["<<hoa[r].no_h<<"]\n";
	cout<<"=================================\n";
	sg<<hoa[r].no_h<<"\t"<<hoa[r].nem_send<<"\t"<<hoa[r].send_pon<<"\t"<<hoa[r].nem_rec<<"\t"<<hoa[r].curr<<"\t"<<hoa[r].amo
	<<"\t"<<hoa[r].date_time ;
	}
	sa_wk.close();
	sa_w.close();
	sg.close();
	exp.open("expres.txt");
	exp << hoa[m-1].no_h;
	exp.close();
	goto ali;
}
	case 2:{
	cout<<"-------------------\n";
	sg.open("wared.txt");
	cout<<"Enter the hawalat number:-";
	cin >> g;
	for (;sg.eof()==false;)
	{ 
		sg >> sa1.no_h; 
		getline(sg,ppa);
		if (sa1.no_h==g)
		{ system ("color 2b");
		
		p1++;
		cout<<"--------------------------------\n";
			cout <<"namper|nemasand|ponumper|recipient's name|the currency|the amount|History\n";
			cout<<"=============================================================\n";
			cout<<sa1.no_h<<"  "<<ppa<<endl;
			sg.close();
			cout<<"lea sarf alhowa enter [1] lelalga entr [2]\n";
			cin>>as;
			if (as==1)
			{
				system("cls");

				sg.open("masrofa.txt",ios::out|ios::app);
				sg<<"\n"<< sa1.no_h <<"   "<< ppa<<endl;
				cout<< "tam sarf alhoala benjah \n";
				sg.close();
				sg.open("wared.txt");
				for (int jk=0;sg.eof()==false;jk++)
				{
					sg  >> sa[jk].no_h>>sa[jk].nem_send>>sa[jk].send_pon>>sa[jk].nem_rec>>sa[jk].curr>>sa[jk].amo
					;getline(sg,sa[jk].date_time) ;
					we++;	
		
				} 
				sg.close();
				sg.open("wared.txt");
				for (int wb=0;wb<we-1;wb++)
				{
					if(sa[wb].no_h==g)
					{
						sa_w.open("sandok-sarf-YER.txt",ios::out|ios::app);
						sa_wk.open("sandok-sarf-SAR.txt",ios::out|ios::app);
						if (sa[wb].curr=="YER")
						{
							sa_w <<sa[wb].amo;
							sa_w.close();
						}
						else if (sa[wb].curr=="SAR")
						{
						sa_wk << sa[wb].amo;
						sa_wk.close();
						}
						sa[wb].nem_rec="tam_sarf_alhwala";
						sa[wb].amo=0;
						sa[wb].send_pon=0;
						sa[wb].nem_send="tam_sarf_alhwala";
						sa[wb].com=0;
						sa[wb].curr="0";
						sa[wb].date_time=ctime(&now);
					}
					sg <<sa[wb].no_h<<"\t"<<sa[wb].nem_send<<"\t"<<sa[wb].send_pon<<"\t"<<sa[wb].nem_rec<<"\t"<<sa[wb].curr<<"\t"<<sa[wb].amo
					<<"\t"<<sa[wb].date_time <<endl;
				}
				sg.close();
				
				goto ali;
			}
			else goto ali;
		}
		
	}
	if (p1==0)
	{ 		system("cls");

		cout<<"la twged hwalah\n";
		cout<<"-=-=-=-=-=-=-=-=-=-=-=-=\n";
		goto ali;

	 } 
 }
 case 3:{
 	int pp1,pp2,pp3;
 	hadash:
 	system("cls");
 	cout<<"============-=======\n";
 	cout<<"Enter the old password:=";
 	cin>>pp1;
 	system("cls");

 	if (pp1==pas2)
 	{
 		basos:
 		cout<<"Enter the new password =";
 		cin>>pp2;
 		cout<<"Enter Confirm Password =";
 		cin>>pp3;
 		if (pp2==pp3)
 		{
 			pas2=pp2;
 			goto sabedr;
		 }
		 else
		 {
		 	cout<<"Make sure to confirm the password, please try\n";
		 	goto basos;
		 }
	 }
	 else
	 {
	 	system("cls");

	 	cout<<"Error in the password \n";
	 	goto hadash;	
	 }
 }
 case 4:{
 	int ward_y=0,sarf_y=0,total_y,wa,ward_k=0,sarf_k=0,wk=0,total_k;
 	sa_w.open("sandok-wared-YER.txt");
 	for(;sa_w.eof()==false;)
 	{
 		sa_w >> we;
 		ward_y=ward_y+we;
 		we=0;
 		
	 }
 		sa_w.close();
 		sa_w.open("sandok-sarf-YER.txt");
 		for(;sa_w.eof()==false;)
 	{
 		sa_w >> we;
 		sarf_y=sarf_y+we;
 		we=0;
	 }
	 sa_w.close();
	
 total_y=ward_y-sarf_y;
 sa_wk.open("sandok-wared-SAR.txt");
 for (;sa_wk.eof()==false;)
 {
 	sa_wk >>wk;
	 ward_k=ward_k+wk;	
	 wk=0;	
 }
sa_wk.close();
sa_wk.open("sandok-sarf-SAR.txt");
 for (;sa_wk.eof()==false;)
 {
 	sa_wk >>wk;
	 sarf_k=sarf_k+wk;	
	 wk=0;
 }
sa_wk.close();
total_k=ward_k-sarf_k;
cout<<"==========================\n";
cout<<"alrsed yamne ="<<total_y<<endl;
cout<<"alrsed sody KSA="<<total_k<<endl;
cout<<"===========================";
goto ali;

 }
 case 5:{
	break;
 }
	}

}
	else{
		v++;
		system("cls");

	cout<<"An error in the password or username\n";
	if (v<3)	
	goto abdu;
system("pause");
}
}

