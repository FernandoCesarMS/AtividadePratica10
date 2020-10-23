#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(string Senha) : ContaBancaria(Senha)
{
    this->quantTransacoes = 0;
}
bool ContaCorrente::saca(double valor){
    return true;
}
void ContaCorrente::deposita(double){

}
void ContaCorrente::tiraExtrato(){

}
int ContaCorrente::getTransacoes(){
    return this->quantTransacoes;
}
void ContaCorrente::setTransacoes(int Transacoes){
    this->quantTransacoes = Transacoes;
}