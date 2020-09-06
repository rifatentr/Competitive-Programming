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



int main()
{
    string s;
    string t;
    cin>>s>>t;
    ll n=zz(s);
    ll m=zz(t);

    ll dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    string ans=" ";
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            if(s[i-1]==t[j-1])
            {
                dp[i][j]=max(dp[i-1][j],1+dp[i-1][j-1]);
            }
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }


//    for(ll i=1; i<=n; i++)
//    {
//        for(ll j=1; j<=m; j++)
//        {
//            cout<<dp[i][j]<<ss;
//        }
//        cout<<nn;
//    }
//



    ll st=m;
    ll i=n,j=m;
    while(1)
    {
        if(i==0||j==0)
            break;

        if(dp[i][j]==dp[i][j-1])
        {
            j--;
            continue;
        }
        if(dp[i][j]==dp[i-1][j])
        {
            i--;
            continue;
        }
        ans+=t[j-1];
        i--;
        j--;


    }


    reverse(all(ans));
    cout<<ans<<nn;

    // cout<<dp[n][m]<<nn;







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




