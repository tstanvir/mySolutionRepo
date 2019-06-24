#include<bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007;
#define SET(x) memset(x, 0, sizeof(x))
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
    int n,m,k;
    while(cin>>n>>m>>k){
        vector<pair<int,int>> vec;
        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>arr[i][j];
        }
        if(k==0){
            for(int i=0;i<m;i++)
            {
                for(int j=i+1;j<m;j++)
                {
                        vec.pb(mp(i+1,j+1));
                }
            }
            cout<<vec.size()<<endl;
            for(int i=0;i<vec.size();i++){
                cout<<vec[i].first<<" "<<vec[i].second<<endl;
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                for(int j=i+1;j<m;j++)
                {

                        vec.pb(mp(j+1,i+1));
                }
            }
            cout<<vec.size()<<endl;
            for(int i=0;i<vec.size();i++){
                cout<<vec[i].first<<" "<<vec[i].second<<endl;
            }
        }
    }

	 return 0;

}

