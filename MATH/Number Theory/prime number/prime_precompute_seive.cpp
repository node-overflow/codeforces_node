vector<ll> primes;

void sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) is_prime[j] = false;
        }
    }
    for (int i = 2; i <= limit; i++) if (is_prime[i]) primes.pb(i);
}
