#ifndef OPERARIO_H_INCLUDED
#define OPERARIO_H_INCLUDED

#include "empregado.h"

class Operario : public Empregado {
public:
    Operario(std::string nome, std::string endereco, std::string telefone,
                  int codigoSetora, double salarioBase, double imposto,
                  double valorProducaoAux) : Empregado(nome, endereco, telefone,
                                                       codigoSetora, salarioBase, imposto);
    double getValorProducao();
    void setValorProcucao(double valorProducaoAux);

private:
    double valorProducao;
    double comissao;
};

Operario::Operario(std::string nome, std::string endereco, std::string telefone,
                  int codigoSetora, double salarioBase, double imposto,
                  double valorProducaoAux) : Empregado(nome, endereco, telefone,
                                                       codigoSetora, salarioBase, imposto) {
    valorProducao = valorProducaoAux;
}

double Operario::getValorProducao() {
    return valorProducao;
}
void Operario::setValorProcucao(double valorProducaoAux) {
    valorProducao = valorProducaoAux;
}

double Operario::calcularSalario() {
    double descontoImpostos = salarioBase * imposto;
    comissao = salarioBase * (valorProducao / 100);
    return (salarioBase - descontoImpostos) + comissao;
}

#endif // OPERARIO_H_INCLUDED

