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
	IOS;
	int n;
	while(cin>>n){
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int cur=0;
        int maxi=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==1){
                cur++;
            }
            else{
                if(arr[0]!=1) maxi=cur-1;
                else maxi=cur;

                break;
            }
            if(i+1==n-1){
                if(arr[0]!=1) maxi=cur-1;
                else maxi=cur;
            }
        }
        cur=0;
        for(int i=n-1;i>0;i--){
            if(arr[i]-arr[i-1]==1){
                cur++;
            }
            else {
                if(arr[n-1]!=1000) maxi=max(maxi,cur-1);
                else maxi=max(maxi,cur);
                break;
            }
            if(i-1==0){
                if(arr[n-1]!=1000) maxi=max(maxi,cur-1);
                else maxi=max(maxi,cur);
            }

        }
        cur=0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]==1){
                cur++;
            }
            else{
                    cur++;
                maxi=max(maxi,cur-2);
                cur=0;
            }
            if(i+1==n-1){
                cur++;
                maxi=max(maxi,cur-2);
            }
        }
        cout<<max(maxi,0)<<endl;
	}
	 return 0;

}

