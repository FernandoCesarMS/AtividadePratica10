#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP
#include <string>

using namespace std;

class ContaBancaria{
private:
    string senha;
    int numero;
    int saldo;

public:
    ContaBancaria(string);
    bool saca (double);
    void deposita(double);
    void tiraExtrato();

    //Getters

    string getSenha();
    int getNumero();
    int getSaldo();
    void setSenha(string);
    void setNumero(int);
    void setSaldo(int);
};

#endif
