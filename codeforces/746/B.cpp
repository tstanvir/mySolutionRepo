#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define p printf

#define s scanf

#define ALL(x) x.begin(),x.end()
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
	int n;
	while(cin>>n)
    {
        string s;
        cin>>s;
        string t;
        if(n%2!=0)
        {
            int trace=1;
            for(int i=0;i<n;i++)
            {
                if(i%2==0) t.pb(s[i]);
                else if(i%2==1) {t.insert(trace-1,1,s[i]); trace=1;}
            }
            cout<<t<<endl;
        }
        else
        {
            int trace=1;
            t.pb(s[0]);
            for(int i=1;i<n;i++)
            {
                if(i%2==1) t.pb(s[i]);
                else if(i%2==0) {t.insert(trace-1,1,s[i]);trace=1;}
            }
            cout<<t<<endl;
        }
    }

	 return 0;

}

