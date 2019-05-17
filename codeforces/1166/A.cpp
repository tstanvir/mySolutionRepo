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
int binomial_co(int n)
{
    int c[n+1][2+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,2);j++)
        {
            if(j==0 || j==i)
                c[i][j]=1;
            else
                c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    return c[n][2];
}

int main()

{
	IOS;
	int n;
	cin>>n;
    int arr[26]={0};
    while(n--)
    {
        string s;
        //cout<<"bal"<<endl;
        cin>>s;
        arr[s[0]-97]++;
    }
    int ans=0;
    for(int i=0;i<26;i++)
    {
        int L,R;
        L=arr[i]/2;R=arr[i]-L;
        if(L>1)
        {
            ans+=binomial_co(L);
        }
        if(R>1) ans+=binomial_co(R);
    }
    cout<<ans<<endl;

    return 0;

}

