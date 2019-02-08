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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(i==0) ans++;
            else
            {
                bool b=false;
                for(int j=i-1;j>=0;j--)
                {
                    if(s[j]==s[i])
                    {
                        b=true;
                        break;
                    }
                }
                if(!b) ans++;
            }
        }
        if(ans%2==0) cout<<"CHAT WITH HER!"<<endl;
        else cout<<"IGNORE HIM!"<<endl;
    }

	 return 0;

}

