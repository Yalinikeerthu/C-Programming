#include <iostream>
using namespace std;
int main() {
	int a;
		cin>>a;
	if( (1<=a) && (a<=100000) ){
		cout<<a <<"is positive";
			}
		else if(a<0)
		{
				cout<<a <<"is negative";
		}
		else if(a==0)
		{
				cout<<a<<" is zero";
			}
		else
		{
		cout<<"exception";
}
	return 0;
}
