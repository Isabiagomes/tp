#ifndef __PESSOA_HPP__
#define __PESSOA_HPP__

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
    private:
        string nome;
        char sexo;
        string endereco;
        string cpf;
        string telefone;
        string identidade;        

    public:
        void imprimir();
        void cadastro();
        void setNome(string nom);
        string getNome();
        void setSexo(char sexo);
        char getSexo();
        void setEndereco(string end);
        string getEndereco();
        void setCpf(string cpf);
        string getCpf();
        void setTelefone(string tel);
        string getTelefone();
        void setIdentidade(string id);
        string getIdentidade();
};

#endif