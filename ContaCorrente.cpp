#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(string Senha) : ContaBancaria(Senha)
{
    this->quantTransacoes = 0;
    this->transacoes[0] = 0.0;
}
bool ContaCorrente::saca(double valor)
{
    if(this->getSaldo()>=valor){
        setSaldo(this->getSaldo() - valor);
        this->transacoes.push_back(-valor);
        return true;
    }else{
        return false;
    }
}
void ContaCorrente::deposita(double valor)
{
    this->setSaldo(this->getSaldo() + valor);
    this->transacoes.push_back(valor);
}
void ContaCorrente::tiraExtrato()
{
    for(int i = 0; i < this->getTransacoes(); i++){
        std::cout << this->transacoes[i] << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}
int ContaCorrente::getTransacoes()
{
    return this->quantTransacoes;
}
void ContaCorrente::setTransacoes(double valor)
{
    this->transacoes.push_back(valor);
    this->quantTransacoes++;
}