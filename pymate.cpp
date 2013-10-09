#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n,i;
	int a,b,c;
	vector <int> arr[51];
	cin>>n;
	for(i=0;i<n;i++)
	{	
		cin>>a>>b>>c;	
		arr[i].push_back(a);
		arr[i].push_back(b);
		arr[i].push_back(c);
		sort(arr[i].begin(),arr[i].end());
	}
	for(i=0;i<n;i++)
	{
		
		if(arr[i][2]*arr[i][2]==((arr[i][0]*arr[i][0])+(arr[i][1]*arr[i][1])))
			cout<<"RIGHT TRIANGLE";
		else 
			cout<<"NOT RIGHT TRIANGLE";
		
		cout<<"\n";
	}
	
}
