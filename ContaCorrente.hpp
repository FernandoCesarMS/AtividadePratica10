#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP
#include "ContaBancaria.hpp"
#include <vector>
class ContaCorrente : public ContaBancaria
{
private:
    int quantTransacoes; // Quantidade de Transações da Conta Corrente
    vector <double> transacoes;
public:
    /**
   * \brief Construtor único da classe que recebe como entrada a senha
   */
    ContaCorrente(string);
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
   * \brief imprime as transações realizadas (euacho)
   */
    void tiraExtrato();

    // getters and setters

    
    /**
   * \brief \return retorna a quantidade de transações da conta
   */
    int getTransacoes();
    /**
   * \brief recebe como entrada um int que deve ser atribuida ao atributo quantTransacoes
   */
    void setTransacoes(double);
};

#endif
