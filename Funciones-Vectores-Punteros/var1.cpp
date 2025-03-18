#include <iostream>
using namespace std;

// Funciones
void cargarVector(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    cin >> v[i];
  }
}

void mostrarVector(int v[], int tam) {
  int i;
  for (i = 0; i < tam; i++) {
    cout << v[i] << "\t";
  }
}

// Variable global. No se recomienda el uso, salvo para definir variables de
// entornos.
int unaGlobal = 0; // --> mala practica

int main() {

  // Cuando una variable tiene delante un * -> es un puntero.
  // Puntero, variable que almacena direcciones de memoria. --> *
  int v1[5] = {1, 8}, v2[5] = {1, 2, 3, 4, 5};

  // operador de dirección -->  &
  int num = 10, *puntero;
  puntero = &num;
  cout << puntero << " " << *puntero << endl;

  // cargarVector(v1, 5);
  cout << endl;
  // mostrarVector(v2, 5);

  // ver el tamaño de las variables en memoria. Uso de sizeof()
  /*
  cout << sizeof p << " bytes" << endl;
  cout << endl;
  */

  return 0;
}
