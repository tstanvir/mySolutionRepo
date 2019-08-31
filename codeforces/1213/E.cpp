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
vector<int> compute_lps(string pat,int m){
    vector<int>lps(m);
    lps[0]=0;
    int i=0,j=1;
    while(j<m){
        if(pat[i]==pat[j]){
            i++;
            lps[j]=i;
            j++;
        }
        else {
            if(i!=0){
                i=lps[i-1];
            }
            else {
                i=0;
                j++;
            }
        }
    }
    return lps;
}
bool kmp(string st,string pat){
    int n=st.size(),m=pat.size();
    vector<int>lps=compute_lps(pat,m);
    int i=0,j=0;
    while(i<n){
        if(st[i]==pat[j]){
            i++;
            j++;
        }
        if(j==m){
            return true;
        }
        else if(st[i]!=pat[j]) {
            if(j!=0) j=lps[j-1];
            else i++;
        }
    }
    return false;
}

int main()

{
	IOS;
    int n;
    vector<string>vec;
    string s="abc";
    do{
        vec.pb(s);
    }while(next_permutation(ALL(s)));
    //for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
    //cout<<endl;
    while(cin>>n){
        string a,b;
        cin>>a>>b;
        vector<string>tmp(vec.size()*2);
        for(int i=0;i<vec.size();i++){
                tmp[i]="";
            for(int j=0;j<n;j++){
                tmp[i]+=vec[i];
            }
            for(int j=0;j<3*n;j++)
            {
                if(j<n) tmp[i+6]+=vec[i][0];
                if(j>=n&&j<2*n) tmp[i+6]+=vec[i][1];
                if(j>=2*n&&j<3*n) tmp[i+6]+=vec[i][2];
            }
        }
        bool ok=false;
        for(int i=0;i<tmp.size();i++){
            if(!kmp(tmp[i],a)&& !kmp(tmp[i],b)){
                cout<<"YES"<<endl;
                cout<<tmp[i]<<endl;
                ok=true;
                break;
            }
        }
        if(!ok) cout<<"NO"<<endl;


    }
	 return 0;

}

