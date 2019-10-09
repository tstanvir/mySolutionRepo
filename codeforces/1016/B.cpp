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
vector<int>computeLcp(string pat){
    int m=pat.size();
    vector<int>lcp(m);
    lcp[0]=0;
    int len=0;
    int i=1;
    while(i<m){
        if(pat[i]==pat[len]){
            len++;
            lcp[i]=len;
            i++;
        }
        else {
            if(len!=0){
                len=lcp[len-1];
            }
            else {
                lcp[i]=0;
                i++;
            }
        }
    }
    return lcp;
}
int kmp(string txt,string pat){
    vector<int>lcp=computeLcp(pat);
    int n=txt.size(),m=pat.size();
    int i=0,j=0;
    int cnt=0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++,j++;
        }
        if(j==m){
            cnt++;
            j=lcp[j-1];
        }
        else if(i<n&&pat[j]!=txt[i]){
            if(j!=0){
                j=lcp[j-1];
            }
            else i++;
        }
    }
    return cnt;
}

int main()

{
	IOS;
	//freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     int n;
     while(cin>>n){
        int m,q;
        cin>>m>>q;
        string txt,pat;
        cin>>txt>>pat;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            int ans=kmp(txt.substr(l,r-l),pat);
            cout<<ans<<endl;
        }
     }

	 return 0;

}

