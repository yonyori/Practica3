#include <vector>
#include <fstream>
#include <iostream>
//class Alfabeto(){
 // vector <std::string> simbolos;
//};
class Cadena{
  private:
  std::string cadena_;
  //Alfabeto alfabeto_;
  public:
  Cadena(std::string c):cadena_(c){}
  void Imprimir(std::ofstream& out);
  std::string Get_Cadena(){ return cadena_;}
};
class Lenguaje{
  private:
  std::vector <Cadena> cadenas_;
  public:
  Lenguaje(std::vector <Cadena> l){
    for(int i =0; i<l.size(); i++){
	    std::cout<<"HOLA";
      lenguaje.push_back(l[i]);
  }}
  void Imprimir();
  void Concatenacion(Lenguaje len_);
};
class Calculadora{
  std::ifstream in;
  std::ofstream out;
  std::string modo;
  std::vector<Lenguaje> conjunto_len;
  public:
  Calculadora(std::string fichero1, std::string fichero2, std::string m_):modo(m_){
    in.open(fichero1.c_str());
    out.open(fichero2.c_str());
  } 
  void NoCommas(std::string& linea);
  void Leer();
  void Escribir();
};
