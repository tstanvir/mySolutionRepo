#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
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
	int b,k;
	while(cin>>b>>k)
    {
        int arr[k];
        for(int i=0;i<k;i++) cin>>arr[i];
        if(b%2==0)
        {
            if(arr[k-1]%2==0) cout<<"even"<<endl;
            else cout<<"odd"<<endl;
        }
        else
        {
            int numofodd=0;
            for(int i=0;i<k;i++)
            {
                if(arr[i]%2!=0) numofodd++;
            }
            //cout<<numofodd<<endl;
            if(numofodd%2!=0) cout<<"odd"<<endl;
            else cout<<"even"<<endl;
        }
    }

	 return 0;

}

