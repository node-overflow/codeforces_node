vector<ll> primes;

void sieve(int limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) isPrime[j] = false;
        }
    }
    for (int i = 2; i <= limit; ++i) if (isPrime[i]) primes.push_back(i);
}

bool divisibleByAnyPrime(ll x) {
    for (ll p : primes) {
        if (p * p > x) break;
        if (x % p == 0) return true;
    }
    return x > 1;
}
