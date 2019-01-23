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
        int arr[n+1];
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int>vec(arr,arr+n);
        sort(arr,arr+n);
        sort(vec.begin(),vec.end());
        int maxi=-1;
        int cnt=0;
        for(int i=0;i<n;)
        {
            if(i+1<n && arr[i]==arr[i+1])
            {
                if(arr[i]>maxi) maxi=arr[i];
                i+=2;
            }
            else i++;
        }
        //cout<<"Maxi: "<<maxi<<endl;
        for(int i=n-2;i>=0;i--)
        {
            if(vec[n-1]%vec[i]==0)
            {
                if(vec[i]==maxi) continue;
                vec[i]=0;
            }
            else break;
        }
        vec[vec.size()-1]=0;
        //for(int i=0;i<vec.size();i++) cout<<vec[i]<<endl;
        sort(vec.begin(),vec.end());

        cout<<vec[vec.size()-1]<<" "<<arr[n-1]<<endl;
    }

	 return 0;

}

