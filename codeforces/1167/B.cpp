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
	PII q[4]={{1,2},{3,4},{1,5},{3,6}};
	int prearr[6]={4, 8, 15, 16, 23,  42};
	int product[4];
    for(int i=0;i<4;i++)
    {
        printf("? %d %d\n",q[i].first,q[i].second);
        fflush(stdout);
        cin>>product[i];
        //assert(product[i]);
    }
    do{
        bool pos=true;
        for(int i=0;i<4;i++)
        {
            if(prearr[q[i].first-1]*prearr[q[i].second-1]!=product[i]) pos=false;
        }
        if(pos){
            printf("!");
            for(int i=0;i<6;i++) {
                printf(" %d",prearr[i]);
            }
            fflush(stdout);
            return 0;
        }
    }while(next_permutation(prearr,prearr+6));

	 return 0;

}

