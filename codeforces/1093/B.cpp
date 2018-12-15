#include<bits/stdc++.h>

using namespace std;

#define PI 3.1415926535897932384626433832795
#define REP(i,n) for(int i=0;i<(n);i++)
#define SET(x) memset(x, 0, sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define mp make_pair
#define p printf

#define s scanf

#define ll long long

#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#define np std::string::npos
#define INF Ox3f3f3f3f

//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}
bool isPalindrom(string s)
{
    int l=s.length();
    bool pal=true;

    for(int i=0;i<(l/2);i++)
    {
       //cout<<s[i]<<" "<<s[l-i-1]<<endl;
        if(s[i]!=s[l-i-1]) {pal=false; break;}
    }
    //cout<<pal<<endl;
    return pal;
}

int main()
{
	IOS;
	int t;
	cin>>t;
	while(t--)
    {
        string s;
        cin>>s;
        if(isPalindrom(s))
        {
            int l=s.length();char bal=s[0];
            bool possiblena=true;
            for(int i=1;i<l;i++)
            {
                if(s[i]!=bal) {
                        possiblena=false;
                        char tm=s[i];
                        s[i]=bal;
                        s[0]=tm;
                        break;

                }
            }
            if(possiblena) cout<<-1<<endl;
            else cout<<s<<endl;
        }
        else cout<<s<<endl;
    }


    return 0;

}

