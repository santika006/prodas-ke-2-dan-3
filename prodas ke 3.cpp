/*SANTIKA LANA HAYATI*/
/*20051397006*
/*2020B*/
/*SEGITIGA SIKU-SIKU*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(void) {
	cout<<"Menghitun luas segitiga siku-siku"<<endl;
	int a=12, t=16, l=(0,5*a*t), jwb;
	cout<<"masukkan sisi alas = "<<endl;
	cin>>a;
	cout<<endl;
	cout<<"masukkan sisi tinggi = "<<endl;
	cin>>t;
	cout<<endl;
	cout<<"=============="<<endl;
	cout<<"maka luas segitiga\t\t\t\t ="<<endl;
	cin>>l;
	jwb *0,5*12*16 ;
	cout<< jwb <<"\n";
	cout<<endl;
	getch();
	cout<<endl;
	cout<<"Menghitung sisi miring"<<endl;
	int c=(a*a)+(t*t), d=sqrt(c);
	cout<<"masukkan sisi alas = "<<endl;
	cin>>a;
	cout<<endl;
	cout<<"masukkan sisi tinggi = "<<endl;
	cin>>t;
	cout<<endl;
	cout<<"==============="<<endl;
	cout<<"hasilnya adalah : akar dari"<<c<<endl;
	cout<<"\nakar "<<c<<" = "<<d<<endl;
	getch();
	cout<<endl;
	cout<<"Menghitung keliling segitiga siku-siku"<<endl;
	int k=a+t+d;
	cout<<"masukkan sisi alas = "<<endl;
	cin>>a;
	cout<<endl;
	cout<<"masukkan sisi tinggi = "<<endl;
	cin>>t;
	cout<<endl;
	cout<<"masukkan sisi miring = "<<endl;
	cin>>d;
	cout<<endl;
	cout<<"================"<<endl;
	cout<<"hasilnya adalah : "<<k<<endl;
	getch();
	
	
	return 0;
}
