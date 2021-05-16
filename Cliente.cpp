#include "Cliente.hpp"

Cliente::Cliente(string nome, string email, int idade)
{
  this->nome = nome;
  this->email = email;
  this->idade = idade;
};

void Cliente::setNome(string nome)
{
  nome = nome;
}

string Cliente::getNome()
{
  return nome;
}

void Cliente::setEmail(string email)
{
  email=email;
}

string Cliente::getEmail()
{
  return email;
}
