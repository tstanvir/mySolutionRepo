
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
const int maxx=100005;
int arr[maxx];
int size[maxx];
int root(int x){
    if(arr[x]==-1) return -1;
    while(x!=arr[x]){
        arr[x]=arr[arr[x]];
        x=arr[x];
    }
    return x;
}
void wei_union(int a,int b){
    int roota=root(a);
    int rootb=root(b);
    if(roota==rootb) return;
    if(size[roota]<size[rootb]){
        arr[roota]=arr[rootb];
        size[rootb]+=size[roota];
    }
    else {
        arr[rootb]=arr[roota];
        size[roota]+=size[rootb];
    }

}

int main()

{
	IOS;
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     ll n,m,l;
     while(cin>>n>>m>>l){
            ll brr[n];
            for(int i=0;i<n;i++){
                cin>>brr[i];
                if(brr[i]>l){
                    arr[i]=i;
                    size[i]=1;
                }
                else arr[i]=-1;
            }

            for(int i=0;i<n-1;i++){
                if(arr[i]!=-1 && arr[i+1]!=-1){
                    wei_union(i,i+1);
                }
            }
            //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
           // cout<<endl;
            set<int>st;
            for(int i=0;i<n;i++){
                //cout<<i<<" "<<root(i)<<endl;
                if(root(i)!=-1) st.insert(root(i));
            }
            ll ans=st.size();
            while(m--){
                int op;
                cin>>op;
                if(op==0){
                    cout<<ans<<endl;
                }
                else {
                    ll idx,val;
                    cin>>idx>>val;
                    idx--;
                    if(val+brr[idx]>l){
                        brr[idx]+=val;
                        if(root(idx)==-1){
                            arr[idx]=idx;
                            bool f1=false,f2=false;
                            if(idx-1>-1 && root(idx-1)!=-1){
                                wei_union(idx-1,idx);
                                f1=true;

                            }
                            if(idx+1<n && root(idx+1)!=-1){
                                wei_union(idx+1,idx);
                                f2=true;
                            }
                            if(f1 && f2) ans--;
                            else if(!f1 && !f2) ans++;
                        }
                    }
                    else{
                        brr[idx]+=val;
                    }
                }

            }

     }

	 return 0;

}
///Alhamdulillah
