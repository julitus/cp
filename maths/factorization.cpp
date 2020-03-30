#include <bits/stdc++.h>
using namespace std;
#define FIN ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef vector<ll> vll;

/* Criba de Eratóstenes en factorizacion (para obtener factores primos de un numero) */
/* "vll p" guarda los menores factores primos que dividen al numero */
/* Con la factorizacion de un numero se puede: */
/* Generar todos los divisores del numero, generando todas las combinaciones de sus factores */
/* Funcion de Euler: (pendiente) */

const ll N = 10000000;
ll factSize;
vll p;

void sieveFactoring(ll upperbound) {
	factSize = upperbound + 1;
	p = vll(factSize);
	for (ll i = 2; i < factSize; i += 2) p[i] = 2;
	for (ll i = 3; i * i < factSize; i += 2) {
		if (p[i] == 0) {
			p[i] = i;
			for (ll j = i * i; j < factSize; j += 2 * i)
				p[j] = i;
		}
	}
}

void fact(ll n, vll &f) {
	while (p[n] != n) {
		f.push_back(p[n]);
		n /= p[n];
	}
	f.push_back(n);
}

int main() {FIN

	/* ~0.140s, calcula los menores factores primos de cada numero */
	sieveFactoring(N); /* 10^7 */
	
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