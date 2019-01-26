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
	int   q;
	while(cin>>q)
    {
        while(q--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            if(n>2)
            {
                cout<<"YES"<<endl;
                cout<<2<<endl;
                cout<<s[0]<<" ";
                for(int i=1;i<s.length();i++) cout<<s[i];
                cout<<endl;
            }
            else
            {
                if(s[0]-48>=s[1]-48) cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                    cout<<2<<endl;
                    cout<<s[0]<<" "<<s[1]<<endl;
                }
            }
        }
    }

	 return 0;

}

