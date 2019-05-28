#include<bits/stdc++.h>

using namespace std;

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

int main()

{
	IOS;
	int n,c;
	while(cin>>n>>c)
    {
        int p[n],t[n];
        for(int i=0;i<n;i++) cin>>p[i];
        for(int i=0;i<n;i++) cin>>t[i];
        int limak=0,ros=0;
        int cur=t[0];
        for(int i=0;i<n;i++)
        {
            limak+=max(0,p[i]-(c*cur));
            cur+=t[i+1];
        }
        cur=t[n-1];
        for(int i=n-1;i>=0;i--)
        {
            ros+=max(0,p[i]-(c*cur));
            cur+=t[i-1];
        }
        //cout<<limak<<" "<<ros<<endl;
        if(limak>ros) cout<<"Limak"<<endl;
        else if(limak<ros) cout<<"Radewoosh"<<endl;
        else cout<<"Tie"<<endl;

    }

	 return 0;

}

