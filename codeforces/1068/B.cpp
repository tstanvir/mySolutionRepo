#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
int numOfdiv(ll n)
{
    ll limit=sqrt(n);
    int cnt=0;
    for(ll i=1;i<=limit;i++)
    {
        if(n%i==0)
        {
            if(n/i==i || n/i==n) cnt++;
            else cnt+=2;
        }

    }
    return cnt;
}

int main()

{
	ll n;
	while(cin>>n)
    {
        int divi=numOfdiv(n);
        //cout<<divi<<endl;
        if(n==1LL) cout<<"1\n";
        else cout<<divi+1<<endl;
    }


	 return 0;

}

