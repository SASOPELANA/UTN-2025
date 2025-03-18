#include <iostream>
using namespace std;

// prototipo de funciones
void cargarCadena(char *palabra, int tamano);
void mostrarCadena(char *ini);

int main() {

  char palabras[10];

  // cin >> palabras;
  // cout << palabras << endl;

  // corta la cadena de caracteres el -->  '\0'
  // palabras[3] = '\0';
  // cout << palabras << endl;
  cargarCadena(palabras, 10);
  mostrarCadena(palabras);

  return 0;
}

// definicion de la funcion
void cargarCadena(char *palabra, int tamano) {
  int i = 0;
  fflush(stdin);
  for (i = 0; i < tamano; i++) {
    palabra[i] = cin.get();
    if (palabra[i] == '\n') {
      break;
    }
  }
  palabra[i] = '\0';
  fflush(stdin);
}

// definicion de funcion
void mostrarCadena(char *ini) {
  int i = 0;
  while (ini[i] != '\0') {
    cout << ini[i];
    i++;
  }
  cout << endl;
}
