#include <iostream>
#include <string>
#include <vector>
#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(string Senha)
{
    this->senha = Senha;
    this->numero = 0;
    this->saldo = 0.0;
    this->transacoes[0] = 0.0;
}
bool ContaBancaria::saca(double valor)
{
     if(this->getSaldo()>=valor){
        setSaldo(this->getSaldo() - valor);
        this->transacoes.push_back(-valor);
        return true;
    }else{
        return false;
    }
}
void ContaBancaria::deposita(double valor)
{
    this->setSaldo(this->getSaldo() + valor);
    this->transacoes.push_back(valor);
}
void ContaBancaria::tiraExtrato()
{
    for(int i = 0; i < this->transacoes.size(); i++){
        std::cout << this->transacoes[i] << std::endl;
        std::cout << "---------------------" << std::endl;
    }
}
bool ContaBancaria::alteraSenha(string nova)
{
    string prova;
    std::cout << "insira a senha atual : ";
    std::cin >> prova;
    if(this->getSenha() == prova){
        setSenha(nova);
        return true;
    }
    else
        return false;
}
string ContaBancaria::getSenha()
{
    return this->senha;
}
int ContaBancaria::getNumero()
{
    return this->numero;
}
double ContaBancaria::getSaldo()
{
    return this->saldo;
}
int ContaBancaria::getTransacoes()
{
    return this->transacoes.size();
}
void ContaBancaria::setSenha(string Senha)
{
    this->senha = Senha
}
void ContaBancaria::setNumero(int Numero)
{
    this->numero = Numero;
}
void ContaBancaria::setSaldo(double Saldo)
{
    this->saldo = Saldo;
}
void ContaBancaria::setTransacoes(double valor)
{
    this->transacoes.push_back(valor);
}