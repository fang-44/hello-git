#include <iostream.h>
#include <iomanip.h>
void main()
{
	int num;
	int indiv,ten,hund,thous,ten_thous,n;//specify every bit of the num.
	int a=10000;//除数
	indiv=ten=hund=thous=ten_thous=0;
	cout<<"input the num:"<<endl;
	cin>>num;
	//取每位数
	if(num/a) {ten_thous=num/a;num%=a;}
	a/=10;
	if(num/a) {thous=num/a;num%=a;}
	a/=10;
	if(num/a) {hund=num/a;num%=a;}
    a/=10;
	if(num/a) {ten=num/a;num%=a;}
	indiv=num;
	//input reverse num.
    if(ten_thous!=0)
	{
		cout<<"reverse num is:"<<indiv<<ten<<hund<<thous<<ten_thous<<endl;
		n=5;
		cout<<"n="<<n<<endl;
	}
	else if(thous!=0)
	{
		cout<<"reverse num is:"<<indiv<<ten<<hund<<thous<<endl;
        n=4;
		cout<<"n="<<n<<endl;
	}
	else if(hund!=0)
	{
		cout<<"reverse num is:"<<indiv<<ten<<hund<<endl;
        n=3;
		cout<<"n="<<n<<endl;
	}
	else if(ten!=0)
	{
		cout<<"reverse num is:"<<indiv<<ten<<endl;
        n=2;
		cout<<"n="<<n<<endl;
	}
	else
    {
		cout<<"reverse num is:"<<indiv<<endl;
        n=1;
		cout<<"n="<<n<<endl;
	}
}
