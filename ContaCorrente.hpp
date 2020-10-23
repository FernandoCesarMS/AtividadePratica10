#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP
#include "ContaBancaria.hpp"
class ContaCorrente : public ContaBancaria
{
private:
    int quantTransacoes;

public:
    ContaCorrente(string);
    bool saca(double);
    void deposita(double);
    void tiraExtrato();
    // getters and setters

    int getTransacoes();
    void setTransacoes(int);
};

#endif
