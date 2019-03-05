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
	int a1,a2,a3,a4;
	while(cin>>a1>>a2>>a3>>a4)
    {
        map<char,int>mp;
        mp['1']=a1;mp['2']=a2;mp['3']=a3;mp['4']=a4;
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.size();i++) sum+=mp[s[i]];
        cout<<sum<<endl;
    }

	 return 0;

}

