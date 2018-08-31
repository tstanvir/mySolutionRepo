
#include<bits/stdc++.h>

using namespace std;

#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


int main()

{
    IOS;
    long long n,k;
    while(cin>>n>>k)
    {
        if((n/k)%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

	 return 0;

}
