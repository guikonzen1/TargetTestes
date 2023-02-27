#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	
	double soma, SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, outros = 19849.53;

	soma = SP + RJ + MG + ES + outros;

	cout <<"Sao Paulo: "<<setprecision(4) << (SP / soma) * 100 << "%.\n";
	cout <<"Rio de Janeiro: " << setprecision(4) << (RJ / soma) * 100 << "%.\n";
	cout <<"Minas Gerais: " << setprecision(4) << (MG / soma) * 100 << "%.\n";
	cout <<"Espirito Santo: " << setprecision(4) << (ES / soma) * 100 << "%.\n";
	cout <<"Outros estados: " << setprecision(4) << (outros / soma) * 100 << "%.";


	return 0;
}
