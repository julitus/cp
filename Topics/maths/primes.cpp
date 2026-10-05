#include <bits/stdc++.h>
using namespace std;
#define FIN ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef vector<ll> vll;

/* Criba de Eratóstenes (para obtener numeros primos) */
/* "bitset<N + 10> bs" 10^7 guarda bits que indican si un numero es primo, consulta en O(1), reduce el consumo de memoria */
/* "vll pr" guarda los primos encontrados (declarar solo si se requiere) */

const ll N = 10000000;
ll sieveSize;
bitset<N + 10> bs;	
vll pr;

void sieve(ll upperbound) {
	sieveSize = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 4; i <= sieveSize; i += 2) 
		bs[i] = 0;
	pr.push_back(2);
	for (ll i = 3; i <= sieveSize; i += 2) {  /* cambiar "i * i <= sieveSize" si no se desea guardar los numeros primos en el vector pr */
		if (bs[i]) {
			for (ll j = i * i; j <= sieveSize; j += i)
				bs[j] = 0;
			pr.push_back(i);
		}
	}
}

bool isPrime(ll n) {
	if (n <= sieveSize)
		return bs[n];
	/* en caso se quiera determinar numeros mas grandes que "sieveSize" O(n) por cada consulta */
	for (ll i = 0; i < (ll)pr.size(); i++) {
		if (n % pr[i] == 0) return false;
	}
	return true;
}

int main() {FIN

	/* ~0.080s, si guarda primos en vector y booleanos para consulta en O(1) */
	/* ~0.050s, si guarda booleanos para consulta en O(1) */
	sieve(N); /* 10^7 */

	for (ll i = 0; pr[i] < 100; i++)
		cout << pr[i] << " ";
	cout << "\n";
	return 0;
}