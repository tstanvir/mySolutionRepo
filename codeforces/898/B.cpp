#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	int n,a,b;
	while(cin>>n>>a>>b)
    {
        int limit=n/a;
        bool paichi=false;
        for(int i=0;i<=limit;i++)
        {
            if((n-(a*i))%b==0)
            {
                cout<<"YES\n";
                cout<<i<<" "<<(n-(a*i))/b<<endl;
                paichi=true;
                break;
            }
        }
        if(!paichi) cout<<"NO"<<endl;
    }

	 return 0;

}

