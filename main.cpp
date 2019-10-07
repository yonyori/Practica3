#include <iostream>
#include "Clases.cpp"
using namespace std;

int main(int argc, char** argv){
  if(argc != 4){
    cout<<"La forma adecuada de ejecución es: ./Calculadora archivodeentrada archivodesalida.txt modo"<<endl;
    return 0;
  }

  Calculadora calc(argv[1],argv[2], (argv[3]));
  calc.Leer();
  return 0;
}
