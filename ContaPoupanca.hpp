#ifndef CONTAPOUPANCA_HPP
#define CONTAPOUPANCA_HPP
#include "ContaBancaria.hpp"

class ContaPoupanca : public ContaBancaria
{
private:
    double taxaRendimento; // Taxa de Rendimento da Conta Poupança

public:
    /**
   * \brief Construtor único da classe que recebe como entrada a senha
   */
    ContaPoupanca(string);
    /**
   * \brief recebe uma variavel do tipo double que deve ser subtrair o valor do saldo
   * \return true se for possivel executar o saque, false caso não seja
   */
    bool saca(double);
    /**
   * \brief recebe uma variavel do tipo double que deve ser adicionada o valor do saldo
   */
    void deposita(double);
    /**
   * \brief imprime as transições realizadas (euacho)
   */
    void tiraExtrato();
    // getters and setters

    /**
   * \brief \return retorna o rendimento da conta poupança
   */
    double getRendimento();
    /**
   * \brief recebe como entrada um double que deve ser atribuida ao atributo taxaRendimento
   */
    void setRendimento(double);
};

#endif
