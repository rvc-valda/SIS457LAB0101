#include <iostream>
using namespace std;
int n;
int main() {
	do {
		cout << "Biografia:" << endl;
		cout << "Mi nombre es Rodrigo Valda Corchado, tengo 21 en mi familia me conocen como roro o rodri y estudio la carrera de ing. sistemas" << endl;
		cout << "" << endl;
		cout << "Desea volver imprimir la biografia?" << endl;
		cout << "Si=1 No=0" << endl;
		cout << "Respueta:";
		cin >> n;
		cout << "" << endl;
	} while (n >= 1);

	return 0;
}