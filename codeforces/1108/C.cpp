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
        string s,temp[6];
        cin>>s;
        for(int i=0;i<n;i++) {if(i%3==0) temp[0].pb('R');if(i%3==1) temp[0].pb('B');if(i%3==2) temp[0].pb('G');}
        for(int i=0;i<n;i++) {if(i%3==0) temp[1].pb('R');if(i%3==1) temp[1].pb('G');if(i%3==2) temp[1].pb('B');}
        for(int i=0;i<n;i++) {if(i%3==0) temp[2].pb('B');if(i%3==1) temp[2].pb('R');if(i%3==2) temp[2].pb('G');}
        for(int i=0;i<n;i++) {if(i%3==0) temp[3].pb('B');if(i%3==1) temp[3].pb('G');if(i%3==2) temp[3].pb('R');}
        for(int i=0;i<n;i++) {if(i%3==0) temp[4].pb('G');if(i%3==1) temp[4].pb('B');if(i%3==2) temp[4].pb('R');}
        for(int i=0;i<n;i++) {if(i%3==0) temp[5].pb('G');if(i%3==1) temp[5].pb('R');if(i%3==2) temp[5].pb('B');}
        int arr[6]={0};
        for(int i=0;i<n;i++) {
                if(s[i]!=temp[0].at(i)) arr[0]++;
        }
        for(int i=0;i<n;i++) {
                if(s[i]!=temp[1].at(i)) arr[1]++;
        }
        for(int i=0;i<n;i++) {
                if(s[i]!=temp[2].at(i)) arr[2]++;
        }
        for(int i=0;i<n;i++) {
                if(s[i]!=temp[3].at(i)) arr[3]++;
        }
        for(int i=0;i<n;i++) {
                if(s[i]!=temp[4].at(i)) arr[4]++;
        }
        for(int i=0;i<n;i++) {
                if(s[i]!=temp[5].at(i)) arr[5]++;
        }
        int mini=1e9,mini_index;
        for(int i=0;i<6;i++)
        {
            if(arr[i]<mini)
            {
                mini=arr[i];
                mini_index=i;
            }
        }
        cout<<mini<<endl;
        cout<<temp[mini_index]<<endl;

    }


	 return 0;

}

