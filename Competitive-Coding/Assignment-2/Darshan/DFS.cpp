#include <bits/stdc++.h>
#define f(i,n) for(int i=1;i<=n;++i)
#define all(c) (c).begin(),(c).end()
#define sz(a) int((a).size())
#define pb push_back
#define vi vector<int>
#define mod 1000000007
#define ll long long
using namespace std;
int main()
{   int n,m,i,j,x,y;
    cin>>n;
    cin>>m;
    vector<int>v[n+1];
    for(int k=1;k<=m;k++)
      {   cin>>x;
          cin>>y;
          v[x].push_back(y);
          v[y].push_back(x);
      }
    stack<int> s;
    bool visited[n+1];
     for(i=0;i<n+1;i++)
     visited[i]=false;
      s.push(1);

     while(!(s.empty()))
     {
          int t=s.top();
          s.pop();
            if(visited[t]==false)
              {
                  cout<<t<<" ";
                  visited[t]=true;
              }

          for(i=0;i<v[t].size();i++)
          {
              if(visited[v[t][i]]==false)
               s.push(v[t][i]);
           }

     }
return 0;
}
