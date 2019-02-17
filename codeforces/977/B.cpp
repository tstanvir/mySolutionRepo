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
        string s;
        cin>>s;
        vector<string>vec;
        for(int i=0;i<n-1;i++)
        {
            string t;
            t.pb(s[i]);t.pb(s[i+1]);
            vec.pb(t);
        }
       // for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
        //cout<<endl;
        int maxi=-1;
        string tmp;
        for(int i=0;i<vec.size();i++)
        {
            size_t found=s.find(vec[i],0);
            int cnt=0;
            while(found!=np)
            {
                cnt++;
                found=s.find(vec[i],found+1);
            }
            //cout<<"cnt: "<<cnt<<endl;
            if(maxi<=cnt)
            {
                maxi=cnt;
                tmp=vec[i];
            }
        }
        cout<<tmp<<endl;
    }

	 return 0;

}

