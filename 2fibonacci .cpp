#include <iostream>
using namespace std;


int main() {
		
	int term1 = 0, term2 = 1, term3 = 0, n = 0;
	cout << "Digite o numero de termos: ";
	cin >> n;

	if (n <= 0) {
		cout << n << " nao pertence a sequencia de Fibonacci.";
		return 0;
	}

	for (int i = 0; i <= n; i++) {
		term3 = term1 + term2;
		term1 = term2;
		term2 = term3;
		if (n == term3 || n == term1 || n == term2) {
			cout << n << " pertence a sequencia de Fibonacci.";
			return 0;
		}
	}
	
	cout << n << " nao pertence a sequencia de Fibonacci.";
	return 0;
}
