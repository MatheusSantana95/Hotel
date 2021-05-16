#ifndef Cliente_hpp
#define Cliente_hpp

#include<iostream>
using namespace std;

Class Cliente
{
public:
    Cliente(string nome);
    void setNome(string nome);
    string getNome();
    void setEmail(string email);
    string getEmail();
    void setIdade(int idade);
    int getIdade();

private:
    string nome;
    string email;
    int idade;
    
};

#endif

