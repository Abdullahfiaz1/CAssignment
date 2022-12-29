//Skip value at index 3 and 5.

#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int y[10];
	for(int i=0; i<=9; i++){
		cin>>y[i];
	}
	for(int i=0; i<=9; i++){
	
	
	if(i==3)
	{
		continue;
	}
	else if(i==5)
	{
		continue;
	}
	
	sum=sum+y[i];
}
    cout<<"Sum of numbers skip 3 and 5="<<sum;
    return 0;
}


//Reverse orders of input

#include<iostream>
using namespace std;
int main()
{
	int y[10];
    for(int i=0; i<=9; i++){
    cin>>y[i];
	}
	cout<<"Entered numbers are:"<<endl;
	for(int i=0; i<=9; i++){
		cout<<y[i]<<" ";
	}
	cout<<endl;
	cout<<"Reversed Numbers are:"<<endl;
	for(int i=9; i>=0; i--){
		cout<<y[i]<<" ";
	}
	
	return 0;
}
