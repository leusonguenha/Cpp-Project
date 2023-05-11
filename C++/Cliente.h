#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Cliente {  //................................................Classe Cliente
protected:
    int nuit;
    string nome;
    string bi;
    int idade;
    char sexo;
    string estadoCivil;

public:
    Cliente() {}
    Cliente(int nuit, string nome, string bi, int idade, char sexo, string estadoCivil) {
        this->nuit = nuit;
        this->nome = nome;
        this->bi = bi;
        this->idade = idade;
        this->sexo = sexo;
        this->estadoCivil = estadoCivil;

    }
    // getters e setters
    int getNuit() {
        return nuit;
    }
    void setNuit(int nuit) {
        this->nuit = nuit;
    }
    string getNome() {
        return nome;
    }
    void setNome(string nome) {
        this->nome = nome;
    }

    string getBi() {
        return bi;
    }
    void setBi(string bi) {
        this->bi = bi;
    }
    int getIdade() {
        return idade;
    }
    void setIdade(int idade) {
        this->idade = idade;
    }
    char getSexo() {
        return sexo;
    }
    void setSexo(char sexo) {
        this->sexo = sexo;
    }
    string getEstadoCivil() {
        return estadoCivil;
    }
    void setEstadoCivil(string estadoCivil) {
        this->estadoCivil = estadoCivil;
    }

};


#endif // CLIENTE_H_INCLUDED
