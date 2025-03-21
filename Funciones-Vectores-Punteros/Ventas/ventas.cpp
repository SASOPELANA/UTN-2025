/**

 Un comercio dispone de 10 artículos y desea llevar un
 control de las ventas realizadas en sus 4 sucursales.

 Cada venta se registra con los siguientes datos:
    Número de artículo (1 a 10)
    Sucursal (1 a 4)
    Monto de la venta

 El proceso de carga finaliza cuando se ingresa un número de artículo igual a 0.

 Se pide:
  Calcular la recaudación total de cada artículo en cada sucursal

*/
#include <iostream>
using namespace std;

// prototipo de función
void mostrarRecaudacion(float mat[4][10], int filas, int columnas);

int main() {

  int numeroArticulo, sucursal;
  float monto;
  float recaudaciones[4][10] = {};

  cout << "Ingrese el numero de articulo: " << endl;
  cin >> numeroArticulo;

  while (numeroArticulo != 0) {

    // Lógica
    cout << "Ingrese numero de sucursal: ";
    cin >> sucursal;

    cout << "Ingrese el monto de la venta: ";
    cin >> monto;

    recaudaciones[sucursal - 1][numeroArticulo - 1] += monto;

    cout << "Ingrese el numero de articulo: " << endl;
    cin >> numeroArticulo;
  }

  mostrarRecaudacion(recaudaciones);

  return 0;
}

// Definir funciones
void mostrarRecaudacion(float mat[4][10], int filas, int columnas) {

  for (int s = 0; s < filas; s++) {
    cout << "--- Sucursal #" << s + 1 << endl;
    for (int a = 0; a < columnas; a++) {
      cout << "Articulo #" << a + 1 << ": $" << mat[s][a] << endl;
    }
    cout << "\n";
  }
}
