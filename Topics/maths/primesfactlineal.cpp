#include <bits/stdc++.h>
using namespace std;
#define FIN ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef vector<ll> vll;

/* Criba de Eratóstenes Linear Time (para obtener numeros primos y los menores factores primos de cada numero) */
/* "bitset<N + 10> bs" 10^7 guarda bits que indican si un numero es primo, consulta en O(1), reduce el consumo de memoria (declarar si es necesario) */
/* "vll lp" guarda los menores factores primos que dividen al numero */
/* "vll pr" guarda los primos encontrados */
/* Con la factorizacion de un numero se puede: */
/* Generar todos los divisores del numero, generando todas las combinaciones de sus factores */
/* Funcion de Euler: (pendiente) */

const ll N = 10000000;
ll sieveSize;
bitset<N + 10> bs;
vll lp, pr;

void linealSieve(ll upperbound) {
	sieveSize = upperbound + 1;
	lp = vll(sieveSize);
	bs.set();
	bs[0] = bs[1] = 0;
	for (ll i = 2; i < sieveSize; i++) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr.push_back(i);
		}
		for (ll j = 0; j < (ll)pr.size() and pr[j] <= lp[i] and i * pr[j] < sieveSize; j++) {
			bs[i * pr[j]] = 0;
			lp[i * pr[j]] = pr[j];
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

void fact(ll n, vll &f) {
	while (lp[n] != n) {
		f.push_back(lp[n]);
		n /= lp[n];
	}
	f.push_back(n);
}

int main() {FIN

	/* ~0.160s, si guarda booleanos para consulta en O(1), y calcula los menores factores primos de cada numero a la vez que se obtiene un vector con todos los numeros primos */
	/* ~0.130s, si calcula los menores factores primos de cada numero a la vez que se obtiene un vector con todos los numeros primos */
	linealSieve(N); /* 10^7 */

	for (ll i = 0; pr[i] < 100; i++)
		cout << pr[i] << " ";
	cout << "\n";

	vll f;
	fact(30, f); /* calcular todos los factores primos de un numero */
	for (ll i = 0; i < (ll)f.size(); i++)
		cout << f[i] << " ";
	cout << "\n";

	/* [2, 3, 5] */ 
	/*
		divisores de 30:
		1,
		(2, 3) => 6, 
		(2, 5) => 10, 
		(3, 5) => 15, 
		(2, 3, 5) => 30
	*/
	return 0;
}