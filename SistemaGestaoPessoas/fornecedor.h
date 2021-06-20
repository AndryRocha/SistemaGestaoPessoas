#ifndef FORNECEDOR_H_INCLUDED
#define FORNECEDOR_H_INCLUDED

#include "pessoa.h"

class Fornecedor : public Pessoa {
public:
    Fornecedor(std::string nome, std::string endereco, std::string telefone,
               double valorCreditoAux, double valorDividaAux) : Pessoa(nome, endereco, telefone);
    void setValorCredito(double valorCreditoAux);
    double getValorCredito();
    void setValorDivida(double valorDividaAux);
    double getValorDivida();
    double obterSaldo();

private:
    double valorCredito;
    double valorDivida;
};

Fornecedor::Fornecedor(std::string nome, std::string endereco, std::string telefone,
                       double valorCreditoAux, double valorDividaAux) : Pessoa(nome, endereco, telefone) {
    valorCredito = valorCreditoAux;
    valorDivida = valorDividaAux;
}

double Fornecedor::obterSaldo() {
    return valorCredito - valorDivida;
}

void Fornecedor::setValorCredito(double valorCreditoAux) {
    valorCredito = valorCreditoAux;
}

double Fornecedor::getValorCredito() {
    return valorCredito;
}

void Fornecedor::setValorDivida(double valorDividaAux) {
    valorDivida = valorDividaAux;
}

double Fornecedor::getValorDivida() {
    return valorDivida;
}

#endif // FORNECEDOR_H_INCLUDED
