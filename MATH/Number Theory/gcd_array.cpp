ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll gcdArray(const vector<int> &v) {
    ll g = v[0];
    for (auto it : v) g = gcd(g, it);
    return g;
}