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
         bool arr[1000006];
         SET(arr);
         int ans=0;
         int state=0;
         while(n--)
         {
             int bal;
             char chal;
             cin.ignore();
             cin>>chal>>bal;
             if(chal=='+')
             {
                 state++;
                 arr[bal]=true;
                 ans=max(ans,state);
             }
             else if(chal=='-')
             {
                 if(arr[bal])
                    state--;
                 else
                 {
                     arr[bal]=false;
                     ans++;
                 }
             }
         }
         cout<<ans<<endl;
     }
	 return 0;

}

