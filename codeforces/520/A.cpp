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
        int arr[26]={0};
        for(int i=0;i<n;i++)
        {
            if(isupper(s[i]))
            {
                arr[tolower(s[i])-'a']++;
            }
            else arr[s[i]-'a']++;
        }
        bool b=false;
        for(int i=0;i<26;i++)
        {
            if(arr[i]>=1) continue;
            else {b=true;break;}
        }
        if(b) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

	 return 0;

}

