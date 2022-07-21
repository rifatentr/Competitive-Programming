/***
**      Bismillahir Rahmanir Rahim                
**              ALLAHU AKBAR
**
**     Author: Khairul Anam Mubin (__Broly__)
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/
#include <bits/stdc++.h>
using namespace std;
 
#define F            first
#define S            second  
#define Fin          freopen("input.txt","r",stdin)
#define Fout         freopen("output.txt","w",stdout)
#define Precision(a) cout << fixed << setprecision(a)
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
#define Test         int test;cin >> test;for(int tc = 1; tc <= test; tc++)
 
#define INF9         2147483647
#define INF18        9223372036854775806
#define eps          1e-8 
 
const double pi = 2 * acos(0.0);
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
template <typename T> T Sqr(T x) { T n = x * x ; return n ;}
template <typename T> T Pow(T B,T P){ if(P==0) return 1; if(P&1) return B*Pow(B,P-1);  else return Sqr(Pow(B,P/2));}
template <typename T> T Abs(T a) {if(a<0)return -a;else return a;}
template <typename T> T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template <typename T> T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
template <typename T> T Exgcd(T a,T b,T &x,T &y) {if(a<0){T d=Exgcd(-a,b,x,y);x=-x;return d;}   if(b<0){T d=Exgcd(a,-b,x,y);y=-y;return d;}   if(b==0){x=1;y=0;return a;}else{T d=Exgcd(b,a%b,x,y);T t=x;x=y;y=t-(a/b)*y;return d;}}
template <typename T> T BigMod (T b,T p,T m){if (p == 0) return 1;if (p%2 == 0){T s = BigMod(b,p/2,m);return ((s%m)*(s%m))%m;}return ((b%m)*(BigMod(b,p-1,m)%m))%m;}
template <typename T> T ModInvPrime (T b,T m){return BigMod(b,m-2,m);}
template <typename T> T ModInvNotPrime(T a , T m) {T x , y ;Exgcd(a , m , x , y) ;x %= m ;if(x < 0) x += m ;return x ;}
template <typename T> typename std::vector<T>::iterator Insert_sorted (std :: vector<T> & vec, T const& item) {return vec.insert (std::upper_bound( vec.begin(), vec.end(), item ), item);}
template <typename T> inline string ToBinary(T n, int sz = 0) {string r;while(n != 0) {r = ( n % 2 == 0 ? "0" : "1" ) + r; n >>= 1;}string tmp = "";int left = sz - r.size();while (tmp.size() < left) {tmp.push_back('0');} return tmp + r ;} 
long long BinaryToDecimal(string s) {int len = s.size();long long n = 0, p = 1;for (int i = len - 1; i >= 0; i-- , p *= 2) n += p * (s[i] - '0');return n;}

bool IsSet(int n, int k) {if ((1 << k) & n) return 1;return 0;}
 
char Uplowch(char ch){if(ch >= 'A' &&  ch <= 'Z') ch += 32; return ch;}
char Lowupch(char ch){if(ch >= 'a' &&  ch <= 'z') ch -= 32; return ch;}
bool Isalpha(char ch){if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) return true; return false;}
int Strtoint(string str){stringstream ss(str);int x = 0;ss >> x ;return x ;}
string Intostr(int x){stringstream ss; ss << x; string str = ss.str(); return str;}
vector<string> Linetostr(string str){string s; vector <string> v ;istringstream is(str); while(is >> s)v.push_back(s);return v;}
template <typename T> void Print(T ar[] , int a , int b) {for (int i = a; i + 1 <= b ; i++)cout << ar[i] << " ";cout << ar[b] << "\n";}
template <typename T> void Print(T ar[] , int n) {for (int i = 0; i + 1 < n; i++)cout << ar[i] << " ";cout << ar[n - 1] << "\n";} 
template <typename T> void Print(const vector<T> &v) {for (int i = 0; i + 1 < v.size() ; i++) cout << v[i] << " ";cout << v.back() << "\n";}

 
//int dx[] = {0 , 0 , -1 , 1 , -1 , -1 , 1 , 1 , 0} ;  // right , left , up , down
//int dy[] = {1 ,-1 , 0 , 0 , -1 , 1 , -1 , 1 , 0} ;

struct node{
    bool endmark ; 
    node *next[10];
    string name;
    node() {
        endmark = false ;
        for(int i = 0 ; i < 10 ; i++)
            next[i] = NULL ;
    }
};
node *root = new node() ; 
void Insert(string &name, string &str , int len) {
    node *curr = root ;
    for(int i = 0 ; i < len ; i++ ) {
        int id = str[i] - '0' ;
        if(curr->next[id] == NULL)
            curr->next[id] = new node() ;
        curr = curr->next[id] ;
    }
    curr->endmark = true ; 
    curr->name = name;
}

string Search(string &str , int len) {
    node *curr = root ;
    for(int i = 0 ; i < len ; i++) {
        int id = str[i] - '0' ;
        if(curr->next[id] == NULL)
            return "-1" ; 
        curr = curr->next[id] ;
    }
    if (curr->endmark) {
        return curr->name + " " + str;
    }
    while (curr->endmark == 0) {
        bool flag = 0;
        for (int i = 0; i < 10; i++) {
            if (curr->next[i]) {
                str.push_back(char(i + '0'));
                curr = curr->next[i];
                flag = 1;
                break;
            }
        }
        if (flag == 0) return "-1";
    }
    return curr->name + " " + str;
}
int main() {
    FasterIO
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string t; cin >> t;
        if (t == "add") {
            string name ;
            cin >> name;
            string num;
            cin >> num;
            Insert(name, num, num.size());
        } else {
            string num;
            cin >> num;
            cout << Search(num, num.size()) << "\n";
        }
    }
    return 0;
}