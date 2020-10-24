#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class ContaBancaria
{
private:
    string senha; // Senha da conta
    int numero;   // Numero da conta
    double saldo; // Saldo da conta
    vector <string> transacoes; //armazena operacoes feitas

public:
    /**
   * \brief Construtor único da classe que recebe como entrada a senha
   */
    ContaBancaria(string);
    /**
   * \brief recebe uma variavel do tipo double que deve ser subtrair o valor do saldo
   * \return true se for possivel executar o saque, false caso não seja
   */
    virtual bool saca(double) = 0;
    /**
   * \brief recebe uma variavel do tipo double que deve ser adicionada o valor do saldo
   */
    virtual void deposita(double) = 0;
    /**
   * \brief imprime as transições realizadas (euacho)
   */
    virtual void tiraExtrato() = 0;
    /**
   * \brief recebe uma variavel do tipo string que deve ser o atribuida ao atributo senha.
   * \return true se a alteração foi feita com sucesso, false caso não tenha sido
   */
    bool alteraSenha(string);

    // getters and setters

    /**
   * \brief \return retorna a senha
   */
    string getSenha();
    /**
   * \brief \return retorna o número da conta
   */
    int getNumero();
    /**
   * \brief \return retorna o saldo da conta
   */
    double getSaldo();
    /**
   * \brief recebe como entrada uma string que deve ser atribuida ao atributo senha
   */
    void setSenha(string);
    /**
   * \brief recebe como entrada um int que deve ser atribuida ao atributo numero
   */
    void setNumero(int);
    /**
   * \brief recebe como entrada um double que deve ser atribuida ao atributo saldo
   */
    void setSaldo(double);
};

#endif
