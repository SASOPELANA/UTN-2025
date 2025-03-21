// Matrices
#include <iostream>
using namespace std;

int main() {

  int miMatriz[2][3] = {};
  int fila, columna;

  miMatriz[1][1] = 7;

  cout << "Ingrese el numero de fila: " << endl;
  cin >> fila;
  cout << "Ingrese el numero de columnas: " << endl;
  cin >> columna;

  miMatriz[fila - 1][columna - 1] = 10;

  for (int f = 0; f < 2; f++) {
    for (int c = 0; c < 3; c++) {
      cout << miMatriz[f][c] << " ";
    }
    cout << endl;
  }

  return 0;
}
