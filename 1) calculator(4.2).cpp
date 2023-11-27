// 1) WAP to create simple calculator using class.
 
#include<iostream>
using namespace std;
class student{
	public:
	int a,b,sum,mun,sub,div,mod;
	void s1(){
	cout<<"Enter your a value:"<<endl;
	cin>>a;
	cout<<"Enter your b value:"<<endl;
	cin>>b;
	sum=a+b;
	sub=a-b;
	mun=a*b;
	div=a/b;
	mod=a%b;
	cout<<"Total Addition is:"<<sum<<endl;
	cout<<"Total Subtraction is:"<<sub<<endl;
	cout<<"Total mulpication is:"<<mun<<endl;
	cout<<"Total Division is:"<<div<<endl;
	cout<<"Total Modulo is:"<<mod<<endl;
	}
};
int main()
{
	student add;
	add.s1(); 
}
