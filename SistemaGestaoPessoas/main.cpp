#include <iostream>
#include <locale.h>

#include "administrador.h"
#include "empregado.h"
#include "fornecedor.h"
#include "operario.h"
#include "vendedor.h"

using namespace std;

int main() {
    setlocale(​LC_ALL,"Portuguese");

    int looping = 1;
    int op;

    Administrador administradores[50];
    int numAdm = 0;

    Empregado empregados[50];
    int numEmpregados = 0;

    Fornecedor fornecedores[50];
    int numFornecedores = 0;

    Operario operarios[50];
    int numOperarios = 0;

    Vendedor vendedores[50];
    int numVendedores = 0;

    while(looping == 1) {
        system("cls");
        cout << "-------- Gestão de pessoas --------" << endl;
        cout << "1 - Incluir pessoa." << endl;
        cout << "2 - Atualizar pessoa." << endl;
        cout << "3 - Relatórios." << endl;
        cout << "Selecione a opção desejada: ";
        cin >> op;

        switch(op) {
            case 1:
                system("cls");
                cout << "-------- Atualizar pessoa -------" << endl;
                adicionarPessoa();
                break;
            case 2:
                system("cls");
                cout << "-------- Incluir pessoa -------" << endl;
                atualizarPessoa();
                break;
            case 3:
                system("cls")
                int relatorioOp;

                cout << "-------- Relatórios -------" << endl;
                cout << "1 - Pessoas." << endl;
                cout << "2 - Fornecedores." << endl;
                cout << "3 - Empregados." << endl;
                cout << "Selecione o relatório desejado: "<< endl;
                cin >> relatorioOp;
                cout << endl;

                switch(relatorioOp) {
                case 1:
                    system("cls")
                    cout << "-------- Relatório geral -------" << endl;
                    relatorioPessoas();
                    break;
                case 2:
                    system("cls")
                    cout << "-------- Relatório de Fornecedores -------" << endl;
                    relatorioFornecedores();
                    break;
                case 3:
                    system("cls")
                    cout << "-------- Relatório de Empregados -------" << endl;
                    relatorioEmpregados();
                    break;
                }

                break;
        }

        void adicionarPessoa() {
        int pessoaOp;

        cout << "1 - Admininstrador." << endl;
        cout << "2 - Fornecedor." << endl;
        cout << "3 - Operario." << endl;
        cout << "4 - Vendedor." << endl;
        cout << "Selecione  função da pessoa a ser adicionada: ";
        cin >> pessoaOp;

        if(pessoaOp == 1) {
            system("cls");
            cout << "--- Admininstrador ---" << endl;

            std::string nome;
            cout << "Nome: "
            cin >> nome;
            cout << endl;

            std::string endereco;
            cout << "Endereço: ";
            cin >> endereco;
            cout << endl;

            std::string telefone;
            cout << "Telefone:";
            cin >> telefone;
            cout << endl;

            int codigoSetora;
            cout << "Codigo do setor: ";
            cin >> codigoSetora;
            cout << endl;

            double salarioBase;
            cout << "Salário base: ";
            cin >> salarioBase;
            cout << endl;

            double imposto;
            cout << "Imposto: ";
            cin >> imposto;
            cout << endl;

            double ajudaCusto;
            cout << "Ajuda de custo: ";
            cin >> ajudaCusto;
            cout << endl;

            Administrador adm = new Administrador(nome, endereco, telefone, codigoSetora, salarioBase, imposto, ajudaCusto);
            administradores[numAdm] = adm;
            numAdm = numAdm + 1;

        } else if(pessoaOp == 2) {
            system("cls");
            cout << "--- Fornecedor ---" << endl;

            std::string nome;
            cout << "Nome: "
            cin >> nome;
            cout << endl;

            std::string endereco;
            cout << "Endereço: ";
            cin >> endereco;
            cout << endl;

            std::string telefone;
            cout << "Telefone:";
            cin >> telefone;
            cout << endl;

            double valorCredito;
            cout << "Crédito: ";
            cin >> valorCredito;
            cout << endl;

            double valorDivida;
            cout << "Divida: ";
            cin >> valorDivida;
            cout << endl;

            Fornecedor fornecedor = new Fornecedor(nome, endereco, telefone, valorCredito, valorDivida);
            fornecedores[numFornecedores] = fornecedor;
            numFornecedores = numFornecedores + 1;

        } else if(pessoaOp == 3) {
            system("cls");
            cout << "--- Operario ---" << endl;

            std::string nome;
            cout << "Nome: "
            cin >> nome;
            cout << endl;

            std::string endereco;
            cout << "Endereço: ";
            cin >> endereco;
            cout << endl;

            std::string telefone;
            cout << "Telefone:";
            cin >> telefone;
            cout << endl;

            int codigoSetora;
            cout << "Codigo do setor: ";
            cin >> codigoSetora;
            cout << endl;

            double salarioBase;
            cout << "Salário base: ";
            cin >> salarioBase;
            cout << endl;

            double imposto;
            cout << "Imposto: ";
            cin >> imposto;
            cout << endl;


            double valorProducao;
            cout << "Custo de produção: ";
            cin >> valorProducao;
            cout << endl;

            Operario operario = new Operario(nome, endereco, telefone, codigoSetora, salarioBase, imposto, valorProducao);
            operarios[numOperarios] = operario;
            numOperarios = numOperarios + 1;

        } else if(pessoaOp == 4) {
            system("cls");
            cout << "--- Vendedor ---" << endl;

            std::string nome;
            cout << "Nome: "
            cin >> nome;
            cout << endl;

            std::string endereco;
            cout << "Endereço: ";
            cin >> endereco;
            cout << endl;

            std::string telefone;
            cout << "Telefone:";
            cin >> telefone;
            cout << endl;

            int codigoSetora;
            cout << "Codigo do setor: ";
            cin >> codigoSetora;
            cout << endl;

            double salarioBase;
            cout << "Salário base: ";
            cin >> salarioBase;
            cout << endl;

            double imposto;
            cout << "Imposto: ";
            cin >> imposto;
            cout << endl;

            double valorVendas;
            cout << "Valor em vendas";
            cin >> valorVendas;
            cout << endl;

            Vendedor vendedor = new Vendedor(nome, endereco, telefone, codigoSetora, salarioBase, imposto, valorVendas);
            vendedores[numVendedores] = vendedor;
            numVendedores = numVendedores + 1;

            } else {
                system("cls");
                cout << "Opção não encontrada." << endl;
            }
        }

        void atualizarPessoa() {
            int pessoaOp;

            cout << "1 - Admininstrador." << endl;
            cout << "2 - Fornecedor." << endl;
            cout << "3 - Operario." << endl;
            cout << "4 - Vendedor." << endl;
            cout << "Selecione  função da pessoa a ser atualizada: ";
            cin >> pessoaOp;

            cout << "Nome da pessoa: ";
            std::string nome;
            cin >> nome;
            cout << endl;

            cout << "Telefone da pessoa: ";
            std::string telefone;
            cin >> telefone;
            cout << endl;

            switch(pessoaOp) {
            case 1:
                atualizaAdm(nome, telefone);
                break;
            case 2:
                atualizaFornecedor(nome, telefone);
                break;
            case 3:
                atualizaOperario(nome, telefone);
                break;
            case 4:
                atualizaVendedor(nome, telefone);
                break;
            }
        }

        void atualizaAdm(std::string nome, std::string telefone) {
            for(int = 0; i < numAdm; i++) {
                if(administradores[i]->getNome() == nome && administradores[i]->getTelefone() == telefone) {
                    std::string nome;
                    cout << "Nome: "
                    cin >> nome;
                    administradores[i]->setNome(nome);
                    cout << endl;

                    std::string endereco;
                    cout << "Endereço: ";
                    cin >> endereco;
                    administradores[i]->setEndereco(endereco);
                    cout << endl;

                    std::string telefone;
                    cout << "Telefone:";
                    cin >> telefone;
                    administradores[i]->setTelefone(telefone);
                    cout << endl;

                    int codigoSetora;
                    cout << "Codigo do setor: ";
                    cin >> codigoSetora;
                    administradores[i]->setCodigoSetor(codigoSetora);
                    cout << endl;

                    double salarioBase;
                    cout << "Salário base: ";
                    cin >> salarioBase;
                    administradores[i]->setSalarioBase(salarioBase);
                    cout << endl;

                    double imposto;
                    cout << "Imposto: ";
                    cin >> imposto;
                    administradores[i]->setImposto(imposto);
                    cout << endl;

                    double ajudaCusto;
                    cout << "Ajuda de custo: ";
                    cin >> ajudaCusto;
                    administradores[i]->setAjudaCusto(ajudaCusto);
                    cout << endl;
                }
            }
        }

        void atualizaFornecedor(std::string nome, std::string telefone) {
            for(int = 0; i < numFornecedores; i++) {
                if(fornecedores[i]->getNome() == nome && fornecedores[i]->getTelefone() == telefone) {
                    std::string nome;
                    cout << "Nome: "
                    cin >> nome;
                    fornecedores[i]->setNome(nome);
                    cout << endl;

                    std::string endereco;
                    cout << "Endereço: ";
                    cin >> endereco;
                    fornecedores[i]->setEndereco(endereco);
                    cout << endl;

                    std::string telefone;
                    cout << "Telefone:";
                    cin >> telefone;
                    fornecedores[i]->setTelefone(telefone);
                    cout << endl;

                    double valorCredito;
                    cout << "Crédito: ";
                    cin >> valorCredito;
                    fornecedores[i]->setValorCredito(valorCredito);
                    cout << endl;

                    double valorDivida;
                    cout << "Divida: ";
                    cin >> valorDivida;
                    fornecedores[i]->setValorDivida(valorDivida);
                    cout << endl;
                }
            }
        }

        void atualizaOperario(std::string nome, std::string telefone) {
            for(int = 0; i < numOperarios; i++) {
                if(operarios[i]->getNome() == nome && operarios[i]->getTelefone() == telefone) {
                    std::string nome;
                    cout << "Nome: "
                    cin >> nome;
                    operarios[i]->setNome(nome);
                    cout << endl;

                    std::string endereco;
                    cout << "Endereço: ";
                    cin >> endereco;
                    operarios[i]->setEndereco(endereco);
                    cout << endl;

                    std::string telefone;
                    cout << "Telefone:";
                    cin >> telefone;
                    operarios[i]->setTelefone(telefone);
                    cout << endl;

                    int codigoSetora;
                    cout << "Codigo do setor: ";
                    cin >> codigoSetora;
                    operarios[i]->setCodigoSetor(codigoSetora);
                    cout << endl;

                    double salarioBase;
                    cout << "Salário base: ";
                    cin >> salarioBase;
                    operarios[i]->setSalarioBase(salarioBase);
                    cout << endl;

                    double imposto;
                    cout << "Imposto: ";
                    cin >> imposto;
                    operarios[i]->setImposto(imposto);
                    cout << endl;


                    double valorProducao;
                    cout << "Custo de produção: ";
                    cin >> valorProducao;
                    operarios[i]->setValorProcucao(valorProducao);
                    cout << endl;
                }
            }
        }

        void atualizaVendedor(std::string nome, std::string telefone) {
            for(int = 0; i < numVendedores; i++) {
                if(vendedores[i]->getNome() == nome && vendedores[i]->getTelefone() == telefone) {
                    std::string nome;
                    cout << "Nome: "
                    cin >> nome;
                    vendedores[i]->setNome(nome);
                    cout << endl;

                    std::string endereco;
                    cout << "Endereço: ";
                    cin >> endereco;
                    vendedores[i]->setEndereco(endereco);
                    cout << endl;

                    std::string telefone;
                    cout << "Telefone:";
                    cin >> telefone;
                    vendedores[i]->setTelefone(telefone);
                    cout << endl;

                    int codigoSetora;
                    cout << "Codigo do setor: ";
                    cin >> codigoSetora;
                    vendedores[i]->setCodigoSetor(codigoSetora);
                    cout << endl;

                    double salarioBase;
                    cout << "Salário base: ";
                    cin >> salarioBase;
                    vendedores[i]->setSalarioBase(salarioBase);
                    cout << endl;

                    double imposto;
                    cout << "Imposto: ";
                    cin >> imposto;
                    vendedores[i]->setImposto(imposto);
                    cout << endl;

                    double valorVendas;
                    cout << "Valor em vendas";
                    cin >> valorVendas;
                    vendedores[i]->setValorVendas(valorVendas);
                    cout << endl;
                }
            }
        }

        void relatorioPessoas() {
            for(int i = 0; i < numAdm; i++) {
                cout << i << " - ";
                cout << "Nome: " << administradores[i]->getNome() << ", ";
                cout << "Telefone: " << administradores[i]->getTelefone() << ", ";
                cout << "Endereço: " << administradores[i]->getEndereco() << ";" << endl;
            }
            for(int i = 0; i < numFornecedores; i++) {
                cout << i << " - ";
                cout << "Nome: " << fornecedores[i]->getNome() << ", ";
                cout << "Telefone: " << fornecedores[i]->getTelefone() << ", ";
                cout << "Endereço: " << fornecedores[i]->getEndereco() << ";" << endl;
            }
            for(int i = 0; i < numOperarios; i++) {
                cout << i << " - ";
                cout << "Nome: " << operarios[i]->getNome() << ", ";
                cout << "Telefone: " << operarios[i]->getTelefone() << ", ";
                cout << "Endereço: " << operarios[i]->getEndereco() << ";" << endl;
            }
            for(int i = 0; i < numVendedores; i++) {
                cout << i << " - ";
                cout << "Nome: " << vendedores[i]->getNome() << ", ";
                cout << "Telefone: " << vendedores[i]->getTelefone() << ", ";
                cout << "Endereço: " << vendedores[i]->getEndereco() << ";" << endl;
            }
        }

        void relatorioFornecedores() {
            for(int i = 0; i < numFornecedores; i++) {
                cout << i << " - ";
                cout << "Nome: " << fornecedores[i]->getNome() << ", ";
                cout << "Telefone: " << fornecedores[i]->getTelefone() << ", ";
                cout << "Endereço: " << fornecedores[i]->getEndereco() << ", ";
                cout << "Crédito: " << fornecedores[i]->getValorCredito() << ", ";
                cout << "Divida: " << fornecedores[i]->getValorDivida() << ";" << endl;
            }
        }

        void relatorioEmpregados() {
            for(int i = 0; i < numAdm; i++) {
                cout << "Administrador " << i << " - ";
                cout << "Nome: " << administradores[i]->getNome(); << ", ";
                cout << "Telefone: " << administradores[i]->getTelefone() << ", ";
                cout << "Endereço: " << administradores[i]->getEndereco() << ", ";
                cout << "Código do setor: " << administradores[i]->getCodigoSetor() << ", ";
                cout << "Salário base: " << administradores[i]->getSalarioBase() << ", ";
                cout << "Ajuda de custo: " << administradores[i]->getAjudaCusto() << ", ";
                cout << "Imposto: " << administradores[i]->getImposto() << ", ";
                cout << "Salário calculado: " << administradores[i]->calcularSalario() << ";" << endl;
            }
            for(int i = 0; i < numOperarios; i++) {
                cout << "Operario " << i << " - ";
                cout << "Nome: " << operarios[i]->getNome(); << ", ";
                cout << "Telefone: " << operarios[i]->getTelefone() << ", ";
                cout << "Endereço: " << operarios[i]->getEndereco() << ", ";
                cout << "Código do setor: " << operarios[i]->getCodigoSetor() << ", ";
                cout << "Salário base: " << operarios[i]->getSalarioBase() << ", ";
                cout << "Custo de produção: " << operarios[i]->getValorProducao() << ", ";
                cout << "Imposto: " << operarios[i]->getImposto() << ", ";
                cout << "Salário calculado: " << operarios[i]->calcularSalario() << ";" << endl;
            }
            for(int i = 0; i < numVendedores; i++) {
                cout << i << " - "
                cout << "Nome: " << vendedores[i]->getNome(); << ", ";
                cout << "Telefone: " << vendedores[i]->getTelefone() << ", ";
                cout << "Endereço: " << vendedores[i]->getEndereco() << ", ";
                cout << "Código do setor: " << vendedores[i]->getCodigoSetor() << ", ";
                cout << "Salário base: " << vendedores[i]->getSalarioBase() << ", ";
                cout << "Valor em vendas: " << vendedores[i]->getValorVendas() << ", ";
                cout << "Imposto: " << vendedores[i]->getImposto() << ", ";
                cout << "Salário calculado: " << vendedores[i]->calcularSalario() << ";" << endl;
            }
        }
    }

    return 0;
}
