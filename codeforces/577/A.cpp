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
int solve(int a,int n)
{
    int cnt=0;
    int limit=sqrt(a);
    bool paichi=false;
    for(int i=1;i<=limit;i++)
    {
        if(a%i==0)
        {
            paichi=true;
            if(a/i<=n)
            {
                if(a/i==i) cnt++;
                else cnt+=2;
            }
        }
    }
    if(!paichi) cnt=2;
    return cnt;
}

int main()

{
	IOS;
	int n,x;

    while(cin>>n>>x)
    {
        int cnt;
        cnt=solve(x,n);
        cout<<cnt<<endl;
    }

	 return 0;

}

