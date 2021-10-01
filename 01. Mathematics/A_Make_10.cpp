// PROBLEM STATEMENT: https://atcoder.jp/contests/arc126/tasks/arc126_a
#pragma GCC optimize ("trapv")
#include <bits/stdc++.h>
#include<algorithm>
#include <vector>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<cstdlib>
#include<sstream>
#include <string.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(),v.end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ff first 
#define ss second 
#define pp pair<ll,ll>
#define ll  long long
#define ld  long double
#define endl "\n"
 
const ll mod=1e9+7;
void solve()
{
ll  n, a=0,b=0,m=1, c=-1,k=0, i=0, j=0, l=1e9+5;
string s,p, q;
cin>>n>>a>>m;
c=n;i=a;j=m;
if(c>=1 && j>=2 ){
    n=c;m=j;
    b=m/2;
    if(n>=b){
        k=max(m/2,k);
        n-=m/2;
        m-=2*b; 
    }
    else{
        k=max(k,n);
         m-=2*n;
        n=0;
    }
}
if(j>=1 && c>=3){
    n=c;m=j;
    b=n/3;
    if(m>=b){
        k=max(k,n/3);
        m-=n/3;
        n-=3*b;
        
    }
    else{
        k=max(k,m);
         n-=3*m;
        m=0;
       
    }
}
if(j>=1 && i>=2){
    a=i;m=j;
    b=a/2;
    if(m>=b){
        k=max(k,a/2);
        m-=a/2;
        a-=2*b;;
        
    }
    else{
        k=max(k,m);
         a-=2*m;
        m=0;
       
    }
}
 if(c>=2 && i>=2){
     n=c;a=i;
    b=a/2;
    if(n/2>=b){
        k=max(k,a/2);
        n-=a;
        a-=2*b;
        
    }
    else{
        k=max(k,n/2);
         a-=n;
        n=0;
       
    }
}
if(c>=5){
    n=c;
    k=max(k,n/5);
}
cout<<k<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin. tie(0);cout. tie(0);
ll t=1;
cin>>t;
while(t--)
{
solve();
}
return 0;
}