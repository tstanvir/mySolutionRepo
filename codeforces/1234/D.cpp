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
int BIT[26][100005];
int n;
void init(){
    SET2d(BIT,26,100005);
}

void update(int index,int pos, int val)
{
   // cout<<x<<" "<<delta<<endl;
      for(; pos <= n; pos += pos&-pos)
        BIT[index][pos] += val;
   // cout<<BIT[x]<<endl;
}
int query(int index,int pos)
{
     int sum = 0;
     for(; pos > 0; pos -= pos&-pos)
        sum += BIT[index][pos];
     return sum;
}
int main()

{
	IOS;
	string s;
	while(cin>>s){
    init();
    int q;
    n=s.size();
    //set<char>st;
    for(int i=1;i<=n;i++){
        update(s[i-1]-'a',i,1);
    }
    cin>>q;
	while(q--){
        int a;
        cin>>a;
        if(a==1){
            int pos;
            char c;
            cin>>pos>>c;
            update(s[pos-1]-'a',pos,-1);
            s[pos-1]=c;
            update(s[pos-1]-'a',pos,1);
        }
        if(a==2){
            int l,r;
            cin>>l>>r;
            int cnt=0;
            for(int i=0;i<26;i++){
                if(query(i,r)-query(i,l-1)>0) cnt++;
            }
            cout<<cnt<<endl;
        }
	}
	}

	 return 0;

}

