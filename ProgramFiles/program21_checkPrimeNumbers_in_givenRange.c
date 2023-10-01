/* Check All prime numbers in given range */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Sieve of Eratosthenes algorithm
void findAllPrime(int n) {
	int *primes = malloc(sizeof(int) * (n+1));
	memset(primes, 1, sizeof(int) * (n + 1));
	primes[0] = primes[1] = 0;
	
	for (int i=2; i*i<=n; i++) {
		if (primes[i]) {
			for (int j=i*i; j<=n; j+=i) {
				primes[j] = 0;
			}
		}
	}
	
	
	for (int i=2; i<=n; i++) {
        if (primes[i]) {
            printf("%d ", i);
        }
   }

   free(primes); printf("\n");
}
	

void main() {
	int N=0;
	printf("Enter limit to find prime numbers: ");
	scanf("%d", &N);
	findAllPrime(N);
}
	
