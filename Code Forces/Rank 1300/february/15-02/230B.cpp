#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
/*brute force a kora jaito but tle 
mane ekta ekta kore divisor ber kore r ki
ei approch a korbo hocche t prime gula ber kore set a rakhbo .
pore ja input asbe match koreay O(1) a output dibo
1.4 = 2^2 → Divisors: {1, 2, 4} (T-prime)
9 =  3^2 → Divisors: {1, 3, 9} 
25 = 5^2 → Divisors: {1, 5, 25} 
49 = 7^2 → Divisors: {1, 7, 49}
6 → Divisors: {1, 2, 3, 6}  not a T-prime)
So, T-primes hoilo squares of prime numbers.
 */
using namespace std;

const int MAX_N = 1000000;
vector<bool> is_prime(MAX_N + 1, true);
unordered_set<long long> t_primes;

void tprime_ber_korbe() {
    is_prime[0] = is_prime[1] = false; 
    
    for (long long i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) {  //jodi  prime hoy tahole or 1,2 3, multiplicant not prime 
            //tai oigulak false banay dicchi like 2 prime but 4,6,8 not prime 
            for (long long j = i * i; j <= MAX_N; j =j+ i) {
                /*i 2 er jonne 4 theke suru korbo 
                and upgrade korbo 4+i=(4+2)=6 amne mane j = j+i
                eigula not prime  */
                is_prime[j] = false; 
            }
            // prime gular sqr gulak alada store korbo
            t_primes.insert(i * i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    tprime_ber_korbe();

    int n;
    cin >> n;
    
    while (n--) {
        long long x;
        cin >> x;
        cout << (t_primes.count(x) ? "YES" : "NO") << "\n";
    }

    return 0;
}
