#include<iostream>
#include<ctype.h>
using namespace std;
void convertxtoy(char a[]);
void convertytox(char a[]);

void check(char a[])
{
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='\0')
			break;
		if(int(a[i])==95 && islower(a[i+1]))
			{
				convertxtoy(a);
				break;
				
			}
		if(int(a[i])==95 && isupper(a[i+1]))
			{
			cout<<"Error!\n";
			break;
			}
		if(isupper(a[i]))
			{
				convertytox(a);
				break;
			}
		
	}
	if(a[i]=='\0')
	    cout<<a<<"\n";
}

void convertxtoy(char a[])
{
	char ans[101];
	int i,j;
	for(i=0,j=0;a[i]!='\0';i++,j++)
	{
		if(int(a[i])==95)
			{
			        i++;
				ans[j]=char(int(a[i])-32);	
				continue;
			}
		
		ans[j]=a[i];
		
			
	}
	ans[j]='\0';
	cout<<ans<<"\n";
}

void convertytox(char a[])
{
        char ans[101];
        int i,j;
        for(i=0,j=0;a[i]!='\0';i++,j++)
        {
                if(isupper(a[i]))
                        {
                                
                                ans[j]='_';
				ans[j+1]=char(int(a[i])+32);
                                j++;
				continue;
                        
			}

                ans[j]=a[i];


        }
        ans[j]='\0';
        cout<<ans<<"\n";
}
int main()
{
	int n;
	
	char a[50][101];
	int i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		check(a[i]);
	}


}
