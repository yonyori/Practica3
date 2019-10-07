#include "Clases.h"
#include <vector>
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
void Cadena::Imprimir(ofstream& out){
  out<<cadena_<<'\n';
}
void Lenguaje::Imprimir(){
    for(int i =0; i<lenguaje.size(); i++)
	 cout<<lenguaje[i].Get_Cadena();}
void Calculadora::NoCommas(string& linea){
  for(int i=0;i<linea.length();i++)
    if(linea[i]==',')
      linea[i]=' ';
  }
Lenguaje Lenguaje::Concatenacion(Lenguaje len_){
  for(int i = 0; i<lenguaje;i++)
    for(int j = 0; j<len_;j++)
      new_len=cadenas_[i]+len_[j];
void Calculadora::Leer(){
  while(!in.eof()){
  string linea;
	  getline(in,linea,'\n');
  if(linea[0]=='{' && linea[linea.length()-1]=='}'){
	  vector<Cadena> cad_;
	  linea.erase(0,1);
	  linea.erase(linea.length()-1,1);
	  int i=linea.length()-1;
	  while(linea[i]==' '){
	    linea.erase(linea.length()-1,1);
	    i--;}
	  NoCommas(linea);
	  istringstream lin_stream(linea);
cout<<linea<<endl;
	  int n=0;
	  while(!lin_stream.eof()){
	  string aux;
	  lin_stream>>aux;
	  cout<<aux<<'\n';
	  Cadena cad_aux(aux);
	  cad_.push_back(cad_aux);
	  n++;
	  }
	  cout<<n;
	  for(int i=0;i<cad_.size();i++)
	    cad_[i].Imprimir(out);
	  cout<<"papa";
	  cout<<cad_.size();;
	  Lenguaje len_aux(cad_); 
	  cout<<"papa";
	  len_aux.Imprimir();
	  conjunto_len.push_back(len_aux); 
}}}
