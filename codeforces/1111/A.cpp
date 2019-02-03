#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
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
	string s,t;
	while(cin>>s>>t)
    {
        if(s.length()==t.length())
        {
            bool b=true;
            for(int i=0;i<s.length();i++)
            {

                if(s[i]=='a' || s[i]=='u' || s[i]=='i' || s[i]=='o' || s[i]=='e'  )
                    if(t[i]=='a' || t[i]=='u' || t[i]=='i' || t[i]=='o' || t[i]=='e') continue;
                    else {b=false; break;}
                else
                {
                    if(t[i]!='a' && t[i]!='u' && t[i]!='i' && t[i]!='o' && t[i]!='e') continue;
                    else {b=false; break;}
                }

            }
            if(!b) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }

	 return 0;

}

