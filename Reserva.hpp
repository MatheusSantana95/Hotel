#ifndef Reserva_hpp
#define Reserva_hpp

#include<iostream>
using namespace std;
#include <vector>
#include Cliente.hpp;
#include Quarto.hpp;

Class Reserva
{
public:
  Reserva(Cliente cliente, Quarto quarto);
  void adicionaReserva(int numReserva);
  void imprimeReservas();

private:
  int numReserva;
  int static ultimoNumReserva;
  int geraNumReserva();
  Cliente cliente;
  Quarto quarto;
  vector<Reserva> listReservas;
};

#endif