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
	string a,b,c;
	while(cin>>a>>b>>c)
    {
        int ln=c.length();
        int arr[26]={0};
        int arr2[26]={0};
        for(int i=0;i<ln;i++) arr[c[i]-'A']++;
        bool b1=false;
        for(int i=0;i<a.length();i++) arr2[a[i]-'A']++;
        for(int i=0;i<b.length();i++) arr2[b[i]-'A']++;
        for(int i=0;i<26;i++)
        {
            if(arr2[i]==arr[i] ) continue;
            else {b1=true;break;}
        }
        if(b1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

	 return 0;

}

