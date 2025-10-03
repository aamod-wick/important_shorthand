#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE
 int t;
cin>>t;
while(t--)
{

int n,x1,y1,x0,y0;
cin>>n>>x1>>y1>>x0>>y0;
int ans=0;
vector<int>v(4,0);

int t1 =0,t2=0;
t1 = y1,t2=y0; 
if(t1<t2)
v[0] = t2;

t1 =0,t2=0;
t1 = x1,t2=x0; 
if(t1<t2)
v[1] = t2;
t1 =0,t2=0;
t1 = n-x1,t2=n-x0; 
if(t1<t2)
v[2] = t2;

t1 = n-y1,t2=n-y0; 
if(t1<t2)
v[3] = t2;

cout<<*max_element(v.begin(),v.end())<<endl;

}
}
