ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll lcmArray(const vector<int> &v) {
    ll l = v[0];
    for (auto it : v) l = lcm(l, it);
    return l;
}
