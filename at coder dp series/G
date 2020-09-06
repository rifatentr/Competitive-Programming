#include<bits/stdc++.h>
using namespace std;
typedef		 long long int    ll;
typedef		vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define		pb              push_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		ss              ' '
#define     pii             pair<ll,ll>
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-8;

const ll N=1e5+10;

vll v[N];
ll in[N];
ll dis[N];
ll vis[N];


void dfs(ll u)
{
    vis[u]=1;


    for(ll i:v[u])
    {
        dis[i]=max(dis[i],1+dis[u]);
        in[i]--;
        if(in[i]==0)
        {
            dfs(i);
        }
    }



}


int main()
{

    ll n,m;
    cin>>n>>m;
    while(m--)
    {
        ll a,b;
        cin>>a>>b;
        v[a].pb(b);
        in[b]++;
    }


    for(ll i=1; i<=n; i++)
    {

        if(!vis[i]&&in[i]==0)
        {
            dfs(i);
        }


    }



    ll ans=0;
    for(ll i=1; i<=n; i++)
    {
        ans=max(ans,dis[i]);
    }

    cout<<ans<<nn;




}


/* Final check before submit :

1. array size or integer overflow,like uninitialised 0 index.

2. Think twice,code once.check all possible counter test case.

3. Be careful about corner case! n=1?k=1? something about 0?

4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?

5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;

*/




