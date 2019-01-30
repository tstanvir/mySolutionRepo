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
        ll arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

            int sq=sqrt(arr[i]);
            if(pow(sq,2)==arr[i])
            {
                bool b=false;
                int lim=sqrt(sq);
                for(int i=2;i<=lim;i++)
                {
                    if(sq%i==0)
                    {
                        b=true;
                        break;
                    }
                }
                if(sq==1) b=true;
                if(b) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }

    }

	 return 0;

}

