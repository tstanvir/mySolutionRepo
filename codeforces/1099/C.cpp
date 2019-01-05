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

int main()

{
	//IOS;
	string s;
	while(cin>>s)
    {
        int k;
        cin>>k;
        int koyta=0;
        bool qus=true,star=true;
        int start,kom=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=97 && s[i]<=122) koyta++;
            if(s[i]=='*' && star) {start=i-1;star=false;}
            if((s[i]=='?' || s[i]=='*')  ) {qus=false;kom++;}

        }
       //cout<<"KOyta: "<<koyta<<endl;
    // cout<<"sTar: "<<star<<endl;
        if(qus && star)
        {
            if(k==koyta) cout<<s<<endl;
            else cout<<"Impossible"<<endl;
        }
        else
        {
            if(koyta-k==0)
            {
                for(int i=0;i<s.size();i++)
                {
                    if((s[i]=='?' || s[i]=='*')) continue;
                    cout<<s[i];
                }
                cout<<endl;
            }
           else if(koyta-k>0 )
            {
               if( koyta-k>kom) cout<<"Impossible"<<endl;
            else{
                    bool bal=false;
                    int com=koyta-k;
                for(int i=0;i<s.size();i++)
                {
                    if((s[i]=='?' || s[i]=='*') && com!=0) {s.erase(i-1,1); com--;}
                }
                for(int i=0;i<s.size();i++)
                {
                    if((s[i]=='?' || s[i]=='*')) continue;
                    cout<<s[i];
                }

                cout<<endl;}
            }
            else{
                    if(star) cout<<"Impossible"<<endl;
            else{
                    bool bal=false;
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]=='*' && !bal)
                    {
                        int beshi=k-koyta;
                        //cout<<"beshi: "<<beshi<<endl;
                        //cout<<"start: "<<start<<endl;
                        for(int i=0;i<beshi;i++) cout<<s[start];
                        bal=true;
                    }
                    if( s[i]=='*' || s[i]=='?') continue;
                    cout<<s[i];

                }
                cout<<endl;
            }
            }

        }
        //cout<<koyta<<endl;
    }

	 return 0;

}

