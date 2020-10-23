#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(string Nome) : ContaBancaria(Nome)
{
    this->quantTransacoes = 0;
}
bool saca(double valor){
    return true;
}
void deposita(double){

}
void tiraExtrato(){

}
int ContaCorrente::getTransacoes(){
    return this->quantTransacoes;
}
void ContaCorrente::setTransacoes(int Transacoes){
    this->quantTransacoes = Transacoes;
}