#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date : 27-03-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	int test;
	cin>>test;

    int cnt = 1;	
	while(test--)
	{
		int n;
		cin>>n;
	    vector<int>vc;
		for(int i=0; i<n; i++)
		{
			int k;
			cin>>k;
			vc.push_back(k);
		}
		
		int counter = 0;
		for(int i=0; i<n-1; i++)
		{
			int minimum = 1000;
			int lowIndex = -1;
			for(int j=i; j<n; j++)
			{
				if(vc[j]<minimum)
				{
					minimum = vc[j];
					lowIndex = j;
				}
			}
			reverse(vc.begin()+i,vc.begin()+lowIndex+1);
			counter = counter + lowIndex - i + 1;
		}
		cout<<"Case #"<<cnt<<": "<<counter<<endl;
		cnt++;
	}
	
	return 0;
}
