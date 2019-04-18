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
	int n;
	while(cin>>n)
    {
        string s;
        cin>>s;
        int mini=INT_MAX;
        for(int i=0;i<=n-4;i++)
        {
            int res;
            int a=s[i]-'A';
            int b=90-s[i]+1;
            res=min(a,b);
            if(s[i+1]>='C')
            {
                a=s[i+1]-'C';
                b=90-s[i+1]+3;
                res+=min(a,b);
            }
            else
                res+='C'-s[i+1];
            if(s[i+2]<='T')
            {
                a='T'-s[i+2];
                b=90-'T'+(s[i+2]-65)+1;
                res+=min(a,b);
            }
            else
                res+=s[i+2]-'T';
            if(s[i+3]>='G')
            {
                a=s[i+3]-'G';
                b=90-s[i+3]+7;
                res+=min(a,b);
            }
            else
                res+='G'-s[i+3];

            mini=min(res,mini);

        }
        cout<<mini<<endl;
    }

	 return 0;

}

