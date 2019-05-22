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
struct node{
    int a,t;
}p,q;
queue<node>que;
int visited[30000];
int main()

{
	IOS;
	int n,m;
	while(cin>>n>>m)
    {   p.a=n;
        p.t=0;
        fill_n(visited,30000,0);
        bool f=false;
        while(!que.empty()) que.pop();
        que.push(p);
        while(!que.empty())
        {
            p=que.front();
            que.pop();
            if(p.a==m)
            {
                f=true;
                break;
            }
            q=p;
            q.a--;
            q.t++;
            if(q.a>=0&&visited[q.a]==0)
            {
                visited[q.a]=1;
                que.push(q);
            }
            q=p;
            q.a*=2;
            q.t++;
            if(q.a>=0&&q.a<=20000&&visited[q.a]==0)
            {
                visited[q.a]=1;
                que.push(q);
            }
        }
        if(f==true)
            cout<<p.t<<endl;
        else
            cout<<0<<endl;

    }

    return 0;

}

