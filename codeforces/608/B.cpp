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
#define SET2d(x,m,n) memset(x, 0, sizeof(x[0][0]) * m * n)

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
int freq[200015][2];

int main()

{
	IOS;
	string a,b;
	while(cin>>a>>b)
    {
        SET2d(freq,200015,2);
        ll sum=0,sizea=a.size();
        int sizeb=b.size();
        int dif=sizeb-sizea;
        for(int i=1;i<=sizeb;i++){
            freq[i][b[i-1]-'0']++;
        }
        for(int i=1;i<=sizeb;i++){
            freq[i][0]+=freq[i-1][0];
            freq[i][1]+=freq[i-1][1];
        }
        //cout<<abs((a[0]-'0')-1)*(freq[dif+0+1][1]-freq[0][1])<<endl;
        for(int i=0;i<sizea;i++){
            sum+=(abs((a[i]-'0')-0)*(freq[dif+i+1][0]-freq[i][0]));
           // cout<<sum<<endl;
            sum+=(abs((a[i]-'0')-1)*(freq[dif+i+1][1]-freq[i][1]));
            //cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }

	 return 0;

}

