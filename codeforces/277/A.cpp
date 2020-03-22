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
const int maxx=100005;

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
int arr[105];
int size[105];
int root(int i){
    while(arr[i]!=i){
        arr[i]=arr[arr[i]];
        i=arr[i];
    }
    return i;
}
void wei_uni(int u,int v){
    int rootu=root(u),rootv=root(v);
    if(rootu==rootv) return ;
    if(size[rootu]>size[rootv]){
        arr[rootv]=rootu;
        size[rootu]+=size[rootv];
    }
    else {
        arr[rootu]=rootv;
        size[rootv]+=size[rootu];
    }
}
int main()

{
    IOS;
    //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);

     int n,m;
     while(cin>>n>>m){
        for(int i=0;i<105;i++){
            arr[i]=i;
            size[i]=1;
        }
        vector<int>vec[105];
        bool bb=1;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            bb&=(x==0);
            for(int j=0;j<x;j++){
                int y;
                cin>>y;
                vec[y].pb(i);
            }
        }
        if(bb) {cout<<n<<endl; continue;}

        for(int i=1;i<=m;i++){
            if(vec[i].size()>1){
                for(int j=0;j+1<vec[i].size();j++){
                    wei_uni(vec[i][j],vec[i][j+1]);
                }
            }
        }
        set<int>st;
        for(int i=1;i<=n;i++){
           // cout<<i<<" : "<<root(i)<<endl;
            st.insert(root(i));
        }
        cout<<st.size()-1<<endl;
     }

     return 0;

}
///Alhamdulillah
