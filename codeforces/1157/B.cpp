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
        map<char,char>m;
        for(int i=49;i<=57;i++)
        {
            char a;
            cin>>a;
            m[i]=a;
        }
        int last=-1;
        for(int i=0;i<n;i++){
            if(m[s[i]]<=s[i]) cout<<s[i];
            else{
                 last=i;
                 break;
            }
        }
        int slast=-1;
        if(last!=-1){
            for(int i=last;i<n;i++){
                if(m[s[i]]>=s[i]) cout<<m[s[i]];
                else {
                    slast=i;
                    break;
                }
            }
        }
        if(slast!=-1){
            for(int i=slast;i<n;i++) cout<<s[i];
        }
        cout<<endl;
    }
	 return 0;

}

