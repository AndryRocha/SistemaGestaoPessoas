#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED

class Pessoa {
public:
    Pessoa(std::string nome, std::string endereco, std::string telefone);
    void setNome(std::string nomeAux);
    std::string getNome();
    void setEndereco(std::string enderecoAux);
    std::string getEndereco();
    void setTelefone(std::string telefoneAux);
    std::string getTelefone();

private:
    std::string nome;
    std::string endereco;
    std::string telefone;
};

Pessoa::Pessoa(std::string nome, std::string endereco, std::string telefone) {
    nome = nomeAux;
    endereco = enderecoAux;
    telefone = telefoneAux;
}

void Pessoa::setNome(std::string nomeAux) {
    nome = nomeAux;
}

void Pessoa::getNome() {
    return nome;
}

void Pessoa::setEndereco(std::string enderecoAux) {
    endereco = enderecoAux;
}

void Pessoa::getEndereco() {
    return endereco;
}

void Pessoa::setTelefone(std::string telefoneAux) {
    telefone = telefoneAux;
}

void Pessoa::getTelefone() {
    return elefone;
}

#endif // PESSOA_H_INCLUDED
