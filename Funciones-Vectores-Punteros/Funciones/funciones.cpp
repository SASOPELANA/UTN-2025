// Funciones en cpp
#include <climits>
#include <iostream>
using namespace std;

// Prototipo de funciones
// Parámetros por omisión o por defecto.
int pedirNumero(int valorMinimo = INT_MIN,
                string mensaje = "Ingrese numeros: ");

// sobrecarga de funciones
int sumar(int n1, int n2);
int sumar(int n1, int n2, int n3);
float sumar(float n1, float n2);
int sumar(int vec[], int cantidad);

int main() {

  cout << "Valor minimo por defecto en entero: " << INT_MIN << endl;
  cout << "Valor maximo por defecto en entero: " << INT_MAX << endl;

  cout << "\n";

  int vec[3] = {20, 30, 40};

  cout << "Resultado suma: " << sumar(10.5f, 5.2f) << endl;
  cout << "Resultado suma: " << sumar(5, 3) << endl;

  /*
  int n = 0;

  n = pedirNumero();

  cout << "El numero es: " << n << endl;
  */

  return 0;
}

// Declaramos las funciones
/*
int pedirNumero(int valorMinimo) {
  int numero;
  do {

    cout << "Ingrese un número: " << endl;
    cin >> numero;
  } while (numero < 0);

  return numero;
}
*/
int sumar(int n1, int n2) { return n1 + n2; }
int sumar(int n1, int n2, int n3) { return n1 + n2 + n3; }
float sumar(float n1, float n2) { return n1 + n2; }

int sumar(int vec[], int cantidad) {

  int suma = 0;

  for (int x = 0; x < cantidad; x++) {
    suma += vec[x];
  }

  return suma;
}
