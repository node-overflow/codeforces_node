int idx = lower_bound(v.begin(), v.end(), x) - v.begin(); // first ≥ x
int idx2 = upper_bound(v.begin(), v.end(), x) - v.begin(); // first > x