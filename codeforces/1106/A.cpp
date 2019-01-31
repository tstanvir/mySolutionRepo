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
	int n;
	while(cin>>n)
    {
        char mat[n+1][n+1];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++) cin>>mat[i][j];
        int cnt=0;
        for(int i=2;i<n;i++)
        {
            for(int j=2;j<n;j++)
            {
                if(i+1<=n && j+1<=n&&i-1>=0&&j-1>=0)
                {
                    if(mat[i-1][j-1]=='X' && mat[i+1][j+1]=='X'&&mat[i+1][j-1]=='X'&&mat[i-1][j+1]=='X'&&mat[i][j]=='X') cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

	 return 0;

}

