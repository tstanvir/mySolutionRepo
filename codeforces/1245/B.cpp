/// Bismillahir Rahmanir Rahim
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
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define cases(cs,t) for(int cs=1;cs<=t;cs++)
#define PI acos(-1)
typedef long long ll;
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
int dx4[] = {0, 0, 1, -1};
int dy4[] = {1, -1, 0, 0};

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
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int r,p,sc;
        cin>>r>>p>>sc;
        string bob;
        cin>>bob;
        string alice;
        int posbl=0;
        for(int i=0;i<n;i++){
            if(bob[i]=='R'){
                if(p>0){
                    alice.pb('P');
                    p--;
                    posbl++;
                }
                else{
                    alice.pb('Z');
                }
            }
            else if(bob[i]=='P'){
                if(sc>0){
                    alice.pb('S');
                    sc--;
                    posbl++;
                }
                else{
                    alice.pb('Z');
                }
            }
            else if(bob[i]=='S'){
                if(r>0){
                    alice.pb('R');
                    r--;
                    posbl++;
                }
                else{
                    alice.pb('Z');
                }
            }
        }
        if((n%2==0 && posbl>=n/2) || (n%2==1 && posbl>=((n/2)+1))) {
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(alice[i]=='Z'){
                    if(p>0){
                        alice[i]='P';
                        p--;
                    }
                    else if(r>0){
                        alice[i]='R';
                        r--;
                    }
                    else {alice[i]='S'; sc--;}
                }
            }
            cout<<alice<<endl;
        }
        else cout<<"No"<<endl;
     }

	 return 0;

}
///Alhamdulillah
