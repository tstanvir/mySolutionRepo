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
	int n;
	while(cin>>n)
    {
        int cnt=0;
        while(n--){
        string s;
        cin>>s;

        if(s=="Tetrahedron") cnt+=4;
        else if(s=="Cube") cnt+=6;
        else if(s=="Octahedron") cnt+=8;
        else if(s=="Dodecahedron") cnt+=12;
        else if(s=="Icosahedron" ) cnt+=20;
        }
        cout<<cnt<<endl;
    }

	 return 0;

}

