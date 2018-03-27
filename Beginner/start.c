#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	if((1<=a)||(a<=100000)){
		cout<<a <<"is positive";
		}
		else if(a<0)
		{
				cout<<a <<"is negative";
		}
		else
		{
				cout<<a<<" is zero";
			}
	if(a>100000){
			try{
					throw a;
				}
		catch(int a){
			cout<<"exception";
		}
}
	return 0;
}
