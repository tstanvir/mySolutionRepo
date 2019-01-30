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

    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                int mul=i*j*k;
                int limit=sqrt(mul);
                int cnt=0;
                for(int i=1;i<=limit;i++)
                {
                    if(mul%i==0)
                    {
                        if(mul/i==i) cnt++;
                        else cnt+=2;
                    }
                }
                ans+=cnt;
            }
        }
    }
    cout<<ans<<endl;

	 return 0;

}

