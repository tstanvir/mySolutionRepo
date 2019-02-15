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
        string s,t;
        cin>>s;
        t.pb(s[0]);
       // cout<<t<<endl;
        for(int i=1;i<n;)
        {
            if(s[i-1]=='R' && s[i]=='R' && s[i+1]!='B') {t.pb('B'); t.pb(s[i+1]);i+=2;}
            else if(s[i-1]=='R' && s[i]=='R' && s[i+1]!='G') {t.pb('G');t.pb(s[i+1]);i+=2;}
            else if(s[i-1]=='B' && s[i]=='B' && s[i+1]!='R') {t.pb('R');t.pb(s[i+1]);i+=2;}
            else if(s[i-1]=='B' && s[i]=='B' && s[i+1]!='G') {t.pb('G');t.pb(s[i+1]);i+=2;}
            else if(s[i-1]=='G' && s[i]=='G' && s[i+1]!='R') {t.pb('R');t.pb(s[i+1]);i+=2;}
            else if(s[i-1]=='G' && s[i]=='G' && s[i+1]!='B') {t.pb('B');t.pb(s[i+1]);i+=2;}
            else {t.pb(s[i]);i++;}
        }
        t.pb('\0');
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=t[i]) cnt++;
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++) cout<<t[i];
        cout<<endl;
    }

	 return 0;

}

