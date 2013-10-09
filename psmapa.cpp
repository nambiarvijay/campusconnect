#include<iostream>
using namespace std;

int main()
{
	int n,i;
	int friends[51];
	
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>friends[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<i+1<<" ";
		if(friends[i]%2==0)
			cout<<"won";
		else
			cout<<"lost";
		
		cout<<"\n";
	}
}
