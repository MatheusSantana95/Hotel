#ifndef Quarto_hpp
#define Quarto_hpp

#include<iostream>
#include "Cliente.hpp"
using namespace std;

Class Quarto 
{
public:
  Quarto(int num, string tipo, int quantCamaSolteiro, int quantCamaCasal);
  void setNum(int num);
  int getNum();
  void setTipo(string tipo);
  string getTipo();
  void setClienteComQuarto(string clienteComQuarto);
  string getClienteComQuarto();
  void setQuantCamaSolteiro(int quantCamaSolteiro);
  int getQuantCamaSolteiro();
  void setQuantCamaCasal(int quantCamaCasal);
  int getQuantCamaCasal();

private:
  int num;
  string tipo;
  string clienteComQuarto;
  int periodo;
  int quantCamaSolteiro;
  int quantCamaCasal; 
};

#endif