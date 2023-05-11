#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

#include "Cliente.h"

class Funcionario : public Cliente {  //.......................................................Classe Funcionario
private:
    string nomeEmpresa;
    double salario;
public:
    Funcionario() {}
    Funcionario(int nuit, string nome, string bi, int idade, char sexo, string estadoCivil, string nomeEmpresa, double salario)
        : Cliente(nuit, nome, bi, idade, sexo, estadoCivil) {
        this->nomeEmpresa = nomeEmpresa;
        this->salario = salario;
    }
    // getters e setters
    string getNomeEmpresa() {
        return nomeEmpresa;
    }
    void setNomeEmpresa(string nomeEmpresa) {
        this->nomeEmpresa = nomeEmpresa;
    }
    double getSalario() {
        return salario;
    }
    void setSalario(double salario) {
        this->salario = salario;
    }
};

#endif // FUNCIONARIO_H_INCLUDED
