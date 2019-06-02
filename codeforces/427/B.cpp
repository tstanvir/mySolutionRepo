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
	int n,t,c;
	while(cin>>n>>t>>c)
    {
        queue<int>q;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=t) q.push(arr[i]);
            else{
                while(!q.empty()) q.pop();
            }
            if(q.size()==c) {
                cnt++;
                q.pop();
            }
        }
        cout<<cnt<<endl;
    }

	 return 0;

}

