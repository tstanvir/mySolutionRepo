#include<bits/stdc++.h>

using namespace std;

#define SET(x) memset(x, 0, sizeof(x))
#define SETBOOL(x) memset(x,false,sizeof(x))
#define CLR(x) memset(x, -1, sizeof(x))
#define mp make_pair
#define PII pair<int, int>
#define pf printf

#define sf scanf

#define ALL(x) x.begin(),x.end()
#define pb push_back

#define IOS ios::sync_with_stdio(false); cin.tie(0);
#define np std::string::npos
typedef long long ll;


//this fuction sorts vector pair according to first element in descending order.
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b)
{
    return a.first>b.first;
}

int main()

{
	IOS;
	int k;
	while(cin>>k)
    {
        int n,m;
        int lim=sqrt(k);
        bool pos=false;
        for(int i=5;i<=lim;i++)
        {
            if(k%i==0)
            {
                if(k/i>=5)
                {
                    n=i;
                    m=k/i;
                    pos=true;
                    break;
                }
            }
        }
        //cout<<pos<<endl;
        if(!pos) cout<<-1<<endl;
        else{

        string s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if((i+j)%5==0) s.pb('a');
                if((i+j)%5==1) s.pb('e');
                if((i+j)%5==2) s.pb('i');
                if((i+j)%5==3) s.pb('o');
                if((i+j)%5==4) s.pb('u');
            }

        }
        cout<<s<<endl;
        /*for(int i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }*/
        //cout<<endl;
        }
    }

	 return 0;

}

