//Function with no argument and no return value
#include<iostream>
using namespace std;
void func(int n)
{
	if(n%2==0)
	cout<<"Even";
    else
	cout<<"Odd";
}
int main()
{
	int n;
	cin>>n;
	func(n);
	
	return 0;
}


//Function with  no argument but return value
#include<iostream>
using namespace std;
int fun()
{
	int n;
	cin>>n;
	if(n%2==0)
	return 1;
	else
	return 2;
}

int main()
{
	int x;
	x=fun();
	if(x==1)
	cout<<"Even";
	else
	cout<<"Odd";
	
	return 0;
}


//Function with argument but no return value
#include<iostream>
using namespace std;
void fun(int n)
{
	if(n%2==0)
	cout<<"Even";
	else 
	cout<<"Odd";
}
int main()
{
	int n;
	cin>>n;
	fun(n);
	
	return 0;
}


//Function with argument and return value
#include<iostream>
using namespace std;
int fun(int n)
{
	if(n%2==0)
	return 1;
	else
	return 2;
	
}
int main()
{
	int n,x;
	cin>>n;
	x=fun(n);
	if(x==1)
	cout<<"Even";
	else
	cout<<"Odd";
	
	return 0;
}
