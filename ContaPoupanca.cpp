#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(string Senha) : ContaBancaria(Senha)
{
    this->taxaRendimento = 0.0;
}
bool ContaPoupanca::saca(double)
{
    return true;
}
void ContaPoupanca::deposita(double)
{
}
void ContaPoupanca::tiraExtrato()
{
}
double ContaPoupanca::getRendimento()
{
    return this->taxaRendimento;
}
void ContaPoupanca::setRendimento(double newTaxaRendimento)
{
    this->taxaRendimento = newTaxaRendimento;
}