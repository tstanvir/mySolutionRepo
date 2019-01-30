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
        int f1=0,f2=1;
        int fibs[50];
        fibs[0]=0;fibs[1]=1;
        int jabo=2;
        for(int i=2;f2<=1e9;i++)
        {
            int tm=f1+f2;
            f1=f2;
            f2=tm;
            if(f2<n) jabo++;
            fibs[i]=f2;

        }
        bool b=true;
        int heda;
        for(int i=0;i<(sizeof(fibs)/sizeof(fibs[0]));i++)
        {
            if(n==fibs[i])
            {
                b=false;
                heda=fibs[i];
                break;
            }
        }
        //cout<<jabo<<endl;
        int cnt=0;
        int arr[3];
        arr[0]=fibs[jabo-1];
        //cout<<arr[0]<<endl;
        int bal=arr[0];
        for(int i=jabo-2;i>=0;i--)
        {
            if(bal+fibs[i]<=n && cnt<3)
            {
                cnt++;
                arr[cnt]=fibs[i];
                bal+=arr[cnt];
            }
        }
        if(!b) {arr[0]=n;arr[1]=0;arr[2]=0;cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;}
        else if(cnt==2) cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
        else cout<<"I'm too stupid to solve this problem"<<endl;
       // for(int i=0;i<vec.size();i++) cout<<vec[i]<<endl;

    }

	 return 0;

}

