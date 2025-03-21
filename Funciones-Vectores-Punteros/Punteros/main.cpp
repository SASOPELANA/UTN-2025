// Punteros en cpp
#include <iostream>
using namespace std;

int main() {

  int numero = 10;
  // Es una buena practica iniciar los punteros con nullptr
  int *puntero = nullptr;

  // Creamos una referencia. Con esto hacemos referencia a una variable.
  // Es como crear un alias en linux --> .zshrc
  int &rNumero = numero;

  puntero = &numero;

  rNumero = 120;

  cout << "Puntero - referencia: " << &rNumero << endl;
  cout << "Puntero: " << puntero << endl;
  cout << "Punto de numero: " << &puntero << endl;
  cout << "Puntero: " << numero << endl;

  return 0;
}
