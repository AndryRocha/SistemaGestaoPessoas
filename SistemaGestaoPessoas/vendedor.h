#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED

#include "empregado.h"

class Vendedor : public Empregado {
public:
    Vendedor(std::string nome, std::string endereco, std::string telefone,
             int codigoSetora, double salarioBase, double imposto,
             double valorVendasAux) : Empregado(nome, endereco, telefone,
                                                codigoSetora, salarioBase, imposto);
    double getValorVendas();
    void setValorVendas(double valorVendasAux);

private:
    double valorVendas;
    double comissao;
};

Vendedor::Vendedor(std::string nome, std::string endereco, std::string telefone,
         int codigoSetora, double salarioBase, double imposto,
         double valorVendasAux) : Empregado(nome, endereco, telefone,
                                            codigoSetora, salarioBase, imposto) {
    valorVendas = valorVendasAux;
}
double Vendedor::getValorVendas() {
    return valorVendas;
}

void Vendedor::setValorVendas(double valorVendasAux) {
    valorVendas = valorVendasAux;
}

double Vendedor::calcularSalario() {
    imposto = imposto / 100;
    double descontoImpostos = salarioBase * imposto;
    comissao = salarioBase * (valorVendas / 100);
    return (salarioBase - descontoImpostos) + comissao;
}

#endif // VENDEDOR_H_INCLUDED
