#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
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

int main()

{
	IOS;
	ll n;
	while(cin>>n)
    {
        vector<ll>div;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                div.pb(i);
                if(n/i==i) continue;
                div.pb(n/i);
            }
        }
        set<ll>st;ll l=n+1;
        for(int i=0;i<div.size();i++)
        {
            ll N=n/div[i];
            //cout<<N<<endl;

            ll ans=(N*(1+(l-div[i])))/2;
            st.insert(ans);
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

    }

	 return 0;

}

