bool haveCommonBitset(const vector<int>& a, const vector<int>& b) {
    bitset<100000> st1, st2; // choose a size accordingly (see constraint), must be big enough to contain all elements
    for (int x : a) st1.set(x);
    for (int x : b) st2.set(x);
    return (st1 & st2).any();
}
