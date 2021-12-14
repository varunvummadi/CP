#include <bits/stdc++.h>
using namespace std;
#include <string>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main()
{
    IOS
    int t;
    cin >> t;
    while (t--)
	{
		int i,j,k,m,n;
		cin>>i >>j >>k;
	    for(m=0;m<=i*(k+1);m++)
		{
			for(n=0;n<=j*(k+1);n++)
			{
				if(m%(k+1)==0)
				cout<<"*";
				else if(n%(k+1)==0)
				cout<<"*";
				else if(n%(2*(k+1))==m%(2*(k+1)))
				cout<<"\\";
				else if(n%(2*(k+1))+m%(2*(k+1))==2*(k+1))
				cout<<"/";
				else cout<<".";
				if(n==j*(k+1))
				cout<<endl;
			
			}
		}
	}
}