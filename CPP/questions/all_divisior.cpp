#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mod 1000000007
#define endl '\n'

int main(){

	int n;cin>>n;
	for (int i = 1; i < n; ++i)
	{
		if(n%i==0)
			cout<<i<<" ";
	}
	
	return 0;
}
