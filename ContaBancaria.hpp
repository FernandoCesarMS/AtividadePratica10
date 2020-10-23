#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP
#include <string>

using namespace std;

class ContaBancaria{
private:
    string senha;
    int numero;
    int saldo;

public:
    ContaBancaria(string);
    virtual bool saca(double) = 0;
    virtual void deposita(double) = 0;
    virtual void tiraExtrato() = 0;
    bool alteraSenha(string);

    // getters and setters
    
    string getSenha();
    int getNumero();
    int getSaldo();
    void setSenha(string);
    void setNumero(int);
    void setSaldo(int);
};

#endif
