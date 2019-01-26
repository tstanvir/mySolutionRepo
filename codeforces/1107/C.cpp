
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
	int n,k;
	while(cin>>n>>k)
    {
        ll arr[n+1];
        for(int i=1;i<=n;i++) cin>>arr[i];
        string s;
        cin>>s;
        ll arac[n+1];
        ll maxi=0;
        char a=s[0];
        int cons=1;
        int trace=1;
        for(int i=1;i<s.size();i++)
        {
            if(a==s[i])
                {
                    cons++;
                   //cout<<"AIF: "<<a<<endl;
                }
            else
                {
                    if(cons<=k)
                    {
                        for(int j=0;j<cons;j++,trace++) maxi+=arr[trace];
                        a=s[i];
                        //cout<<"Maxiif: "<<maxi<<endl;
                    }
                    else
                    {
                        for(int j=0;j<cons;j++,trace++) arac[j]=arr[trace];
                        sort(arac,arac+cons,greater<int>());
                        for(int j=0;j<k;j++) maxi+=arac[j];
                    }
                    //cout<<"Aelse: "<<a<<endl;
                   //cout<<"cnt: "<<cons<<endl;
                    cons=1;a=s[i];
                    //cout<<"Maxi: "<<maxi<<endl;
                }
                //cout<<"Maxi: "<<maxi<<endl;
               // cout<<"TRACE: "<<trace<<endl;

        }
        if(cons<=k) for(int j=0;j<cons;j++,trace++) maxi+=arr[trace];
        else
        {
            for(int j=0;j<cons;j++,trace++) arac[j]=arr[trace];
                        sort(arac,arac+cons,greater<int>());
                        for(int j=0;j<k;j++) maxi+=arac[j];
        }
        cout<<maxi<<endl;

    }

	 return 0;

}
