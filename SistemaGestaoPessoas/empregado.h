#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED

#include "pessoa.h"

class Empregado : public Pessoa {
public:
    Empregado(std::string nome, std::string endereco, std::string telefone,
              int codigoSetoraAux, double salarioBaseAux, double impostoAux) : Pessoa(nome, endereco, telefone);
    int getCodigoSetor();
    void setCodigoSetor(int codigoSetor);
    double getSalarioBase();
    void setSalarioBase(double salarioBase);
    double getImposto();
    void setImposto(double imposto);
    virtual double calcularSalario();

private:
    int codigoSetor;
    double salarioBase;
    double imposto;
};

Empregado::Empregado(std::string nome, std::string endereco, std::string telefone,
                     int codigoSetoraAux, double salarioBaseAux, double impostoAux) : Pessoa(nome, endereco, telefone)  {
    codigoSetora = codigoSetoraAux;
    salarioBase = salarioBaseAux;
    imposto = impostoAux;
}

int Empregado::getCodigoSetor() {
    return codigoSetor;
}

void Empregado::setCodigoSetor(int codigoSetorAux) {
    codigoSetor = codigoSetorAux;
}

double Empregado::getSalarioBase() {
    return salarioBase;
}

void Empregado::setSalarioBase(int salarioBaseAux) {
    salarioBase = salarioBaseAux;
}

int Empregado::getImposto() {
    return imposto;
}

void Empregado::setImposto(int impostoAux) {
    imposto = impostoAux;
}

virtual double Empregado::calcularSalario() {
    double descontoImpostos = salarioBase * imposto;
    return salarioBase - descontoImpostos;
}

#endif // EMPREGADO_H_INCLUDED
