
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
	int n;
	while(cin>>n)
    {
        int arr[n];
        ll sumofod=0,sumofeven=0;
        for(int i=0;i<n;i++) {
                cin>>arr[i];
                if(i!=0){
                if(i%2==0) sumofeven+=arr[i];
                else sumofod+=arr[i];
                }
        }
        int cnt=0;
        //cout<<sumofeven<<" "<<sumofod<<endl;
        if(sumofeven==sumofod) cnt++;
        for(int i=1;i<n;i++)
        {
            if(i%2==0) {
                sumofeven-=arr[i];
                sumofeven+=arr[i-1];
            }
            else
            {
                sumofod-=arr[i];
                sumofod+=arr[i-1];
            }
            if(sumofod==sumofeven) cnt++;
        }
        cout<<cnt<<endl;
    }

	 return 0;

}
