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
	int n;
	while(cin>>n)
    {
        string s,t;
        t="***";
        cin>>s;
        bool paichi=false;
        for(int i=0;i<n;i++)
        {
            if((i+2)<n&&s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o')
            {
                int val=i+3;
                int v=0;
                while((val+1)<n&&s[val]=='g'&&s[val+1]=='o') {v+=2; val+=2;}
                s.erase(i,3+v);
                //i=0;
                n=s.size();

                s.insert(i,t);
                n+=3;
                --i;
            }


        }
        cout<<s<<endl;

    }

	 return 0;

}

