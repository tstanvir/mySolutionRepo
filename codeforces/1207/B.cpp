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
int fx[]={0,0,-1,1,+1,-1,-1,+1};
int fy[]={1,-1,0,0,+1,+1,-1,-1};


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
    int n,m;
    while(cin>>n>>m){
        int arr[n][m];
        int brr[n][m];
        SET2d(brr,n,m);
        vector<pair<int,int> >vec;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]) {
                       if(i+1<n&&j+1<m) vec.pb(mp(i,j));
                }
            }
        }
        vector<pair<int,int> >ans;
        for(int i=0;i<vec.size();i++){
            int x,y;
            x=vec[i].first,y=vec[i].second;
            if(arr[x][y]&&arr[x][y+1]&&arr[x+1][y]&&arr[x+1][y+1]) {
                brr[x][y]=1,brr[x][y+1]=1,brr[x+1][y]=1,brr[x+1][y+1]=1;
                ans.pb(mp(x+1,y+1));
            }
        }
        bool bb=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]!=brr[i][j]) {bb=true;break;}
            }
        }
        if(!bb) {
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++) {
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }
        else cout<<"-1"<<endl;

    }
	 return 0;

}

