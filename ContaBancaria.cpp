#include "ContaBancaria.hpp"

ContaBancaria::ContaBancaria(string Senha)
{
    this->senha = Senha;
    this->numero = 0;
    this->saldo = 0.0;
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