#include "Quarto.hpp"

Quarto::Quarto(int num, string tipo, int quantCamaSolteiro, int quantCamaCasal)
{
  this->num = num;
  this->tipo = tipo;
  this->quantCamaSolteiro = quantCamaSolteiro;
  this->quantCamaCasal = quantCamaCasal;
};

void Quarto::setNum(int num)
{
  num = num;
}

int Quarto::getNum()
{
  return num;
}

void Quarto::setTipo(string tipo)
{
  tipo=tipo;
}

string Quarto::getTipo()
{
  return tipo;
}

void setClienteComQuarto(string clienteComQuarto)
{
  clienteComQuarto = clienteComQuarto;
}
  string getClienteComQuarto()
  {
    return clienteComQuarto;
  }

void Quarto::setQuantCamaSolteiro(int quantCamaSolteiro)
{
  quantCamaSolteiro = quantCamaSolteiro;
}

int Quarto::getQuantCamaSolteiro()
{
  return quantCamaSolteiro;
}

void Quarto::setQuantCamaCasal(int quantCamaCasal)
{
  quantCamaCasal = quantCamaCasal;
}

int Quarto::getQuantCamaCasal()
{
  return quantCamaCasal;
}