#ifndef ADMINISTRADOR_H_INCLUDED
#define ADMINISTRADOR_H_INCLUDED

#include "empregado.h"

class Administrador : public Empregado {
public:
    Administrador(std::string nome, std::string endereco, std::string telefone,
                  int codigoSetora, double salarioBase, double imposto,
                  double ajudaCustoAux) : Empregado(nome, endereco, telefone,
                                                    codigoSetora, salarioBase, imposto);
    double getAjudaCusto();
    void setAjudaCusto(double ajudaCustoAux);

private:
    double ajudaCusto;
};

Administrador(std::string nome, std::string endereco, std::string telefone,
              int codigoSetora, double salarioBase, double imposto,
              double ajudaCustoAux) : Empregado(nome, endereco, telefone,
                                                codigoSetora, salarioBase, imposto) {
    ajudaCusto = ajudaCustoAux;
}

double Administrador::getAjudaCusto() {
    return ajudaCusto;
}

void Administrador::setAjudaCusto(double ajudaCustoAux) {
    ajudaCusto = ajudaCustoAux;
}


double Administrador::calcularSalario() {
    double descontoImpostos = salarioBase * imposto;
    return (salarioBase - descontoImpostos) + ajudaCusto;
}

#endif // ADMINISTRADOR_H_INCLUDED
