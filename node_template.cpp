// code written by PIYUSH JHA - @node_overflow
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
#define fio ios::sync_with_stdio(false); cin.tie(nullptr);
const char nl = '\n';
#define pb push_back
#define ff first
#define ss second
#define YES "YES"
#define NO "NO"
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define minv(x) *min_element(all(x))
#define maxv(x) *max_element(all(x))
#define readline(s) getline(cin >> ws, s)
/* For printing output & debugging */
#define ret(x) {cout << x << "\n"; return;}
#define printv(v) for (const auto &it : v) cout << it << " "; cout << "\n"
#define print(x) cout << x << "\n";
#define print2(x, y) cout << x << " " << y << "\n";
#define print3(x, y, z) cout << x << " " << y << " " << z << "\n";
/* Number Theory */
bool is_prime(ll n){ if(n<2) return 0; for(ll i=2;i*i<=n;i++) if(n%i==0) return 0; return 1;}
bool is_power2(ll x) { return x && !(x & (x - 1));}
ll gcd(ll a,ll b){while(b){ll t=b;b=a%b;a=t;}return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll to_base10(string s,int b){ll x=0;for(auto it:s){int dig=('0'<=it&&it<='9'?it-'0':it-'A'+10);x=x*b+dig;}return x;}
ll cnt_divisors(ll n){ ll c=0; for(ll i=1;i*i<=n;i++) if(n%i==0) c+=1+(i*i!=n); return c; }
ll smallest_divisor(ll n){ for(ll i=2;i*i<=n;i++) if(n%i==0) return i; return n; }
/* String Helpers */
auto is_substr = [](const string& a, const string& b) {return a.find(b) != string::npos;};
auto cnt_substr = [](const string&a, const string&b) {int c=0;for(size_t p=a.find(b);p!=string::npos;p=a.find(b,p+1))c++;return c;};


 
/* -------------------------- CODE STARTS HERE -------------------------- */

void solve() {
    
}

/* ----------------------------- MAIN FUNCTION --------------------------- */

int main() {
    fio;
    
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}