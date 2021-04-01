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
	int h,w;
	cin>>h>>w;
	int arr[h][w];
	for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) arr[i][j]=0;
	}
	vector<int>rr,cc;
	for(int i=0;i<h;i++){
        int a;
        cin>>a;
        rr.pb(a);
        for(int j=0;j<a;j++) arr[i][j]=1;
	}
	for(int i=0;i<w;i++){
        int a;
        cin>>a;
        cc.pb(a);
        for(int j=0;j<a;j++) arr[j][i]=1;
	}
	/*for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cout<<arr[i][j]<<" ";
        cout<<endl;
	}
	cout<<endl;*/
	vector<int>tmrr,tmcc;
	for(int i=0;i<h;i++){
            int cnt=0;
            for(int j=0;j<w;j++){
                if(arr[i][j]==1) cnt++;
                else break;
            }
            tmrr.pb(cnt);
	}
	for(int i=0;i<w;i++){
        int cnt=0;
        for(int j=0;j<h;j++)
            {
                if(arr[j][i]==1) cnt++;
                else break;
            }

        tmcc.pb(cnt);
	}
	bool ok1=false,ok2=false;
	for(int i=0;i<h;i++){
        if(rr[i]!=tmrr[i]) {
            ok1=true;
            break;
        }
	}
	for(int i=0;i<w;i++){
        if(cc[i]!=tmcc[i]) {
            ok2=true;
            break;
        }
	}
	if(ok1 || ok2) {
        cout<<0<<endl;
        return 0;
	}


	int bb[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) bb[i][j]=0;
	}
	for(int i=0;i<h;i++){
            bool b=false;
            int index=0;
        for(int j=0;j<w;j++){
            if(arr[i][j]==0){
                b=true;
                index=j;
                break;
            }

        }
        if(b){
            for(int j=index+1;j<w;j++){
                //if(i==0 || j-1==0) continue;
                if(arr[i][j]==0) bb[i][j]=1;
            }
        }
	}
	/*for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cout<<bb[i][j]<<" ";
        cout<<endl;
	}
	cout<<endl;
	*/

	for(int i=0;i<w;i++){
            bool b=false;
            int index=0;
        for(int j=0;j<h;j++){
            if(arr[j][i]==0){
                b=true;
                index=j;
                break;
            }

        }
        if(b){
            for(int j=index+1;j<h;j++){
                //if(i==0 || j-1==0) continue;
                if(arr[j][i]==0) bb[j][i]+=1;
            }
        }
	}
	/*for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cout<<bb[i][j]<<" ";
        cout<<endl;
	}*/
	ll cnt=0;
	for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(bb[i][j]==2) cnt++;
        }

	}
	cnt>0?cout<<Bigmod(2ll,cnt,MOD):cout<<1;
	cout<<endl;

	 return 0;

}
