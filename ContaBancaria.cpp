#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(string Senha)
{
    this->senha = Senha;
}
string ContaBancaria::getSenha()
{
    return this->senha;
}
int ContaBancaria::getNumero()
{
    return this->numero;
}
int ContaBancaria::getSaldo()
{
    return this->saldo;
}
void ContaBancaria::setSenha(string Senha)
{
    this->senha = Senha
}
void ContaBancaria::setNumero(int Numero)
{
    this->numero = Numero;
}
void ContaBancaria::setSaldo(int Saldo)
{
    this->saldo = Saldo;
}