#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED

#include "pessoa.h"

class Empregado : public Pessoa {
public:
    Empregado(std::string nome, std::string endereco, std::string telefone,
              int codigoSetoraAux, double salarioBaseAux, double impostoAux) : Pessoa(nome, endereco, telefone);
    int getCodigoSetor();
    void setCodigoSetor(int codigoSetorAux);
    double getSalarioBase();
    void setSalarioBase(double salarioBaseAux);
    double getImposto();
    void setImposto(double impostoAux);
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

void Empregado::setSalarioBase(double salarioBaseAux) {
    salarioBase = salarioBaseAux;
}

int Empregado::getImposto() {
    return imposto;
}

void Empregado::setImposto(int impostoAux)
    imposto = impostoAux;
}

virtual double Empregado::calcularSalario() {
    imposto = imposto / 100;
    double descontoImpostos = salarioBase * imposto;
    return salarioBase - descontoImpostos;
}

#endif // EMPREGADO_H_INCLUDED
