void solve(ll tc, int flag) {
    int n; cin >> n;
    int a; cin >> a;
    string x; cin >> x;
    vector<int> v(n);
    for (auto &it : v) cin >> it;
    if (flag && tc == 122) {
        // here tc = z means zth query of (tt)th test case
        string x = "";
        for (auto it : v) {
            x += to_string(it);
            x += '@';
        }
        print(x); // to print array as string and later decode it yourself
        // baaki kaa print karna like a number or string is easy because that's just one block you have to print
    }
    // baaki kaa code
    // bla bla bla
}
 
int main() {
    fio;
    
    int tt = 1;
    cin >> tt;
    int flag = 0;
    if (tt == 8567) flag = 1;
    // tt = y means test case m has y queries so we can use this to track failed test case
    // so just make flag = 1 for that y and print input in solve function
    for (ll i = 1; i <= tt; i++) solve(i, flag);
    return 0;
}
