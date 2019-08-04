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
    int n,m;
    while(cin>>n>>m){
        vector<string>vec;
        int balchal=n;
        while(balchal--){
            string bal;
            cin>>bal;
            vec.pb(bal);
        }
        vector<int>score;
        int h=m;

        while(h--){
            int a;
            cin>>a;
            score.pb(a);
        }
       // int maxi=-1;
      // cout<<"bal"<<endl;
        int arr[m][5];
       memset(arr, 0, sizeof(arr[0][0]) * m * 5);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    //cout<<vec[i][j]<<endl;
                arr[j][vec[i][j]-'A']++;
            }
        }

        //for(int i=0;i<m;i++){
           // for(int j=0;j<5;j++) cout<<arr[i][j]<<" ";
           // cout<<endl;
       // }
        int ans=0;
        for(int i=0;i<m;i++){
                int maxi=-1;
                for(int j=0;j<5;j++){
                    if(arr[i][j]>=maxi) maxi=arr[i][j];
                }
                ans+=(maxi*score[i]);

        }
        cout<<ans<<endl;
    }
	 return 0;

}

