#include <iostream>
using namespace std;

int input(int mat[][100]);
void output(int mat[][100], int num);
int coppiaCons(int mat[][100], int num);
int coppiaDiv(int mat[][100], int num);

int main() {
	int coppie[2][100], num,cons,div;
	num = input(coppie);
	output(coppie, num);
	cons = coppiaCons(coppie, num);
	cout << "Ci sono " << cons << "Coppie uguali\n";
	div = coppiaDiv(coppie, num);
	cout << "Ci sono " << div << "Coppie che hanno il primo numero divisibile per il secondo\n";
	if (cons > div) {
		cout << "Sono presenti pi� coppie consecutive\n";
	}
	else if (cons < div) {
		cout << "Sono presenti pi� coppie divisibili\n";
	}
	else {
		cout << "Il numero di coppie divisibili o consecutive sono eque\n";
	}
}

int coppiaDiv(int mat[][100], int num) {
	int cont = 0;
	for (int i = 0; i < num - 1; i++) {
		if (mat[0][i] != mat[1][i] && mat[0][i] % mat[1][i] == 0) {
			cont++;
		}
	}
	return cont;
}

int coppiaCons(int mat[][100], int num) {
	int cont = 0;
	for (int i = 0; i < num-1; i++) {
		if (mat[0][i] == mat[0][i + 1] && mat[1][i] == mat[1][i + 1]) {
			cont++;
		}
	}
	return cont;
}

void output(int mat[][100], int num) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < num; j++) {
			cout << mat[i][j] << "\t";
		}
		cout << endl;
	}
}

int input(int mat[][100]) {
	int i = -1;
	int j = 0;
	bool trov = false;
	do {
		j = 0;
		i++;
		cout << "Dammi la coppia " << i + 1 << endl;
		do {
			cin >> mat[j][i];
			if (mat[j][i] != 0) {
				j++;
			}
			else {
				trov = true;
			}
		} while (j < 2 && !trov);
	} while (!trov);
	return i;
}