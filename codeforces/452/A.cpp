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
bool sortinrev(const pair<int,string> &a,const pair<int,string> &b)
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
     string s[]={"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
     int n;
     while(cin>>n){
        string t;
        cin>>t;
        if(n==8) cout<<s[0]<<endl;
        else if(n==6) cout<<s[3]<<endl;
        else{
            vector<pair<int,string>>vec;
            for(int i=0;i<8;i++){
                int cnt=0;
                if(i!=0 && i!=3){
                    for(int j=0;j<7;j++){
                        if(s[i][j]==t[j]) cnt++;
                    }
                vec.pb(mp(cnt,s[i]));
                }
            }
            sort(ALL(vec),sortinrev);
            //for(int i=0;i<vec.size();i++){
                //cout<<vec[i].first<<" "<<vec[i].second<<endl;
            //}
            cout<<vec[0].second<<endl;
        }

     }

	 return 0;

}
///Alhamdulillah
