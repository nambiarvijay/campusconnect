#include<iostream>
using namespace std;

int main()
{
	char arr[101];
	cin>>arr;
	for(int i=0;arr[i]!='\0';i++)
	{
		arr[i]-=7;
	}

	cout<<arr<<"\n";
}

