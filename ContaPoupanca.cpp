#include <iostream>
#include "ContaPoupanca.hpp"
#include "ContaBancaria.hpp"
#include "ContaCorrente.hpp"

ContaPoupanca::ContaPoupanca(string Senha) : ContaBancaria(Senha)
{
    this->taxaRendimento = 0.0;
}
bool ContaPoupanca::saca(double valor)
{
     if(getSaldo()>=valor){
        setSaldo(getSaldo() - valor);
        transacoes.push_back(-valor);
        return true;
    }else{
        return false;
    }
}
void ContaPoupanca::deposita(double valor)
{

    setSaldo(getSaldo() + valor);
    transacoes.push_back(+valor);
}
void ContaPoupanca::tiraExtrato()
{

    for(int i=0; i <= quantTransacoes; i++){

       std::cout<<"Extrato:"<<endl;
       std::cout<<transacoes[i]<<endl;

   }
    
}
double ContaPoupanca::getRendimento()
{
    return this->taxaRendimento;
}
void ContaPoupanca::setRendimento(double newTaxaRendimento)
{
    this->taxaRendimento = newTaxaRendimento;
}