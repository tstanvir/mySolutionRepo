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
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        //bool b=false ;
        int cnt=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='>') break;
            cnt++;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='<') break;
            cnt2++;
        }
        cout<<min(cnt,cnt2)<<endl;

    }

	 return 0;

}

