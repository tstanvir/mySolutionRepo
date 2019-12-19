#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
typedef long long ll;


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

template<typename T>inline T Bigmod(T base, T power, T MOD){
    T ret=1;
    while(power)
    {
        if(power & 1)ret=(ret*base)%MOD;
        base=(base*base)%MOD;
        power>>=1;
    }
    return ret;
}

int main()

{
	IOS;
	int n;
	while(cin>>n)
    {
        //vector<pair<int,int>>v;
        vector<ll >odd,even;
        vector<ll>vec;
        for(int i=1;i<=n;i++) {
            ll a;
            cin>>a;
            //v.pb({a,i});
            vec.pb(a);
            if(a%2) odd.pb(a);
            else even.pb(a);
        }
        sort(ALL(odd)),sort(ALL(even));
        if(odd.size()==0 || even.size()==0){
            for(int i=0;i<n;i++) cout<<vec[i]<<" ";
            cout<<endl;
            continue;

        }
        int i=0,j=0;
        while(1){
            if(i==odd.size() || j==even.size()) break;
            if(odd[i]<even[j]){
                cout<<odd[i]<<" ";
                i++;
            }
            else if(even[j]<odd[i]){
                cout<<even[j]<<" ";
                j++;
            }


        }
        for(;i<odd.size();i++) cout<<odd[i]<<" ";
        for(;j<even.size();j++) cout<<even[j]<<" ";
        cout<<endl;


    }

	 return 0;

}

