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
        int a=0,g=0,c=0,t=0,q=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A') a++;
            if(s[i]=='C') c++;
            if(s[i]=='T') t++;
            if(s[i]=='G') g++;
            if(s[i]=='?') q++;
        }
        if(n%4!=0) cout<<"==="<<endl;
        else
        {
            int pos=n/4;
            if(a>pos || c>pos || t>pos || g>pos) cout<<"==="<<endl;
            else
            {
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='?')
                    {
                        if(a<pos) {s[i]='A'; a++;q--;}
                        else if(c<pos) {s[i]='C'; c++;q--;}
                        else if(g<pos) {s[i]='G';g++;q--;}
                        else if(t<pos) {s[i]='T';t++;q--;}
                    }
                }
                if(q!=0) cout<<"==="<<endl;
                else cout<<s<<endl;
            }
        }
    }

	 return 0;

}

