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
vector<pair<char,int>>s;
vector<int>edg[210];
int colarr[210];
void mergee(int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    char lf[n1],rt[n2];
    for(int i=0;i<n1;i++){
        lf[i]=s[i+l].first;
    }
    for(int i=0;i<n2;i++){
        rt[i]=s[i+mid+1].first;
    }
    int lin=0,rin=0,mainin=l;
    while(lin<n1 && rin<n2){
        if(lf[lin]<=rt[rin]){
            int tmpi=s[lin+l].second;
            s[lin+l].second=s[mainin].second;
            s[mainin].first=lf[lin];
            s[mainin].second=tmpi;
            mainin++;
            lin++;
        }
        else{
            int vin=lin;
            cout<<"lin: "<<lin<<endl;
            for(int i=vin+l;i<=mid;i++) {
                int u=s[i].second,v=s[rin+mid+1].second;
                cout<<s[i].first<<" "<<s[rin+mid+1].first<<endl;
                cout<<"u: "<<u<<" v: "<<v<<endl;
                edg[u].pb(v);
                edg[v].pb(u);
            }
            int tmpi=s[rin+mid+1].second;
            s[rin+mid+1].second=s[mainin].second;
            s[mainin].first=rt[rin];
            s[mainin].second=tmpi;
            mainin++;
            rin++;
        }
    }
    while(lin<n1){
        int tmpi=s[lin+l].second;
        s[lin+l].second=s[mainin].second;
        s[mainin].first=lf[lin];
        s[mainin].second=tmpi;
        mainin++,lin++;

    }
    while(rin<n2){
        int tmpi=s[rin+mid+1].second;
        s[rin+mid+1].second=s[mainin].second;
        s[mainin].first=rt[rin];
        s[mainin].second=tmpi;
        mainin++,rin++;
    }

}
void mergesort(int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergesort(l,mid);
        mergesort(mid+1,r);
        mergee(l,mid,r);
    }
}
bool isbip(int src){
    colarr[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<edg[u].size();i++){
            int v=edg[u][i];
            //cout<<"v: "<<v<<endl;
            if(colarr[v]==-1){
                colarr[v]=1-colarr[u];
                q.push(v);
            }
            else if(colarr[u]==colarr[v]){
                    return false;

            }
        }
    }
    return true;
}

int main()

{
	IOS;
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n;
     while(cin>>n){
            for(int i=0;i<210;i++) edg[i].clear();
            s.clear();
            for(int i=1;i<=n;i++){
                char ch;
                cin>>ch;
                s.pb(mp(ch,i));
            }
            //mergesort(0,n-1);
            for(int i=0;i<n-1;i++){
                bool sw=false;
                for(int j=0;j<n-i-1;j++){
                    if(s[j]>s[j+1]){
                        //cout<<s[j].first<<" "<<s[j+1].first<<endl;
                        int u=s[j].second,v=s[j+1].second;
                        //cout<<u<<" "<<v<<endl;
                        char tmp=s[j].first;
                        int tmpi=s[j].second;
                        s[j].first=s[j+1].first;
                        s[j].second=s[j+1].second;
                        s[j+1].first=tmp;
                        s[j+1].second=tmpi;
                        edg[u].pb(v);
                        edg[v].pb(u);
                        sw=true;
                    }

                }
                if(sw==false) break;
            }
           /* for(int i=0;i<n;i++) cout<<s[i].first;
            cout<<endl;
            for(int i=1;i<=n;i++){
                cout<<i<<endl;
                for(int j=0;j<edg[i].size();j++){
                    cout<<edg[i][j]<<" ";
                }
                cout<<endl;
                cout<<endl;
            }*/
            for(int i=1;i<=n;i++){
                colarr[i]=-1;
            }
            bool ok=true;
            for(int i=1;i<=n;i++){
                if(colarr[i]==-1) ok&=isbip(i);
                if(ok==false) break;

            }
            if(!ok) cout<<"NO"<<endl;
            else {
                cout<<"YES"<<endl;
                for(int i=1;i<=n;i++){
                    cout<<colarr[i];
                }
                cout<<endl;
            }

     }


	 return 0;

}
///Alhamdulillah
