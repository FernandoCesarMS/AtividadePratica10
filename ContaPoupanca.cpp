#include <iostream>
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(string Senha) : ContaBancaria(Senha)
{
    this->taxaRendimento = 0.0;
    this->transacoes[0] = 0.0;
}
bool ContaPoupanca::saca(double valor)
{
     if(this->getSaldo()>=valor){
        setSaldo(this->getSaldo() - valor);
        this->transacoes.push_back(-valor);
        return true;
    }else{
        return false;
    }
}
void ContaPoupanca::deposita(double valor)
{
    setSaldo(this->getSaldo() + valor);
    this->transacoes.push_back(valor);
}
void ContaPoupanca::tiraExtrato()
{
    for(int i = 0; i < this->transacoes.size(); i++){
        std::cout << this->transacoes[i] << std::endl;
        std::cout << "---------------------" << std::endl;
    }   
}
int ContaBancaria::getTransacoes()
{
    return this->transacoes.size();
}
void ContaBancaria::setTransacoes(double valor)
{
    this->transacoes.push_back(valor);
}
double ContaPoupanca::getRendimento()
{
    return this->taxaRendimento;
}
void ContaPoupanca::setRendimento(double newTaxaRendimento)
{
    this->taxaRendimento = newTaxaRendimento;
}
