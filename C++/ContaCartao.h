#ifndef CONTACARTAO_H_INCLUDED
#define CONTACARTAO_H_INCLUDED

#include "Cliente.h"

class ContaCartao : public Cliente {  //.........................................................Classe ContaCartao
private:
    string nomeBanco;
    double saldo;
public:
    ContaCartao() {}
    ContaCartao(int nuit, string nome, string bi, int idade, char sexo, string estadoCivil, string nomeBanco, double saldo)
        : Cliente(nuit, nome, bi, idade, sexo, estadoCivil) {
        this->nomeBanco = nomeBanco;
        this->saldo = saldo;
    }
    // getters e setters
    string getNomeBanco() {
        return nomeBanco;
    }
    void setNomeBanco(string nomeBanco) {
        this->nomeBanco = nomeBanco;
    }
    double getSaldo() {
        return saldo;
    }
    void setSaldo(double saldo) {
        this->saldo = saldo;
    }
};

#endif // CONTACARTAO_H_INCLUDED
