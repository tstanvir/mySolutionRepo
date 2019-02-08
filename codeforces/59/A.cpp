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
	string s;
	while(cin>>s)
    {
        int n=s.length();
        int l=0,u=0;
        for(int i=0;i<n;i++)
        {
            if(islower(s[i])) l++;
            else u++;
        }

        if(l<u)
        {
            for(int i=0;i<n;i++)
            {
                if(islower(s[i])) s[i]=toupper(s[i]);
            }
        }
        else if(l>u)
        {
            for(int i=0;i<n;i++)
            {
                if(isupper(s[i])) s[i]=tolower(s[i]);
            }

        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(isupper(s[i])) s[i]=tolower(s[i]);
            }
        }
        cout<<s<<endl;
    }

	 return 0;

}

