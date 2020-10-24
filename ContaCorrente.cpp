#include <iostream>
#include "ContaCorrente.hpp"
#include "ContaBancaria.hpp"

ContaCorrente::ContaCorrente(string Senha) : ContaBancaria(Senha)
{
    this->quantTransacoes = 0;
}
bool ContaCorrente::saca(double valor){

    if(getSaldo()>=valor){
        setSaldo(getSaldo() - valor);
        transacoes.push_back(-valor);
        return true;
    }else{
        return false;
    }
    
}
void ContaCorrente::deposita(double valor){

    setSaldo(getSaldo() + valor);
    transacoes.push_back(+valor);

}
void ContaCorrente::tiraExtrato(){

   for(int i=0; i <= quantTransacoes; i++){

       std::cout<<"Extrato:"<<endl;
       std::cout<<transacoes[i]<<endl;

   }

}
int ContaCorrente::getTransacoes(){
    return this->quantTransacoes;
}
void ContaCorrente::setTransacoes(int Transacoes){
    this->quantTransacoes = Transacoes;
}