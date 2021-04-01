#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
#define SET2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)
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
#define for0(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=n-1;i>=0;i--)
#define highest(x) numeric_limits<x>::max()
#define lowest(x) numeric_limits<x>::min()
#define Inf INFINITY
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
	while(cin>>n){
	    vector<int>left,right;
        for(int i=1;i<=n;i++){
            if(i%2){
                left.pb((i*2)-1);
                right.pb((i*2));
            }
            else {
                left.pb(i*2);
                right.pb((i*2)-1);
            }
        }
        ll sum=0;
       // for(int i=0;i<left.size();i++) cout<<left[i]<<" ";
        //cout<<endl;
        for(int i=0;i<left.size();i++) sum+=left[i];
       // cout<<sum<<endl;
        set<ll>bal;
        bal.insert(sum);
      //  vector<int>heda;
        for(int i=0;i<2*n;i++){
            if(i<n){
                sum+=right[i%n];
                sum-=left[i%n];
                bal.insert(sum);
                //heda.pb(sum);
            }
            else {
                sum+=left[i%n];
                sum-=right[i%n];
                bal.insert(sum);
                //heda.pb(sum);
            }
        }
        if(bal.size()>2) cout<<"NO"<<endl;
        else{
            auto it=bal.begin();
            it++;
            if(abs((*bal.begin())-(*it))!=1) cout<<"NO"<<endl;
            else {
                cout<<"YES"<<endl;
                for(int i=0;i<n;i++) cout<<left[i]<<" ";
                for(int i=0;i<n;i++) cout<<right[i]<<" ";
                cout<<endl;
            }
        }

	}

	 return 0;

}

