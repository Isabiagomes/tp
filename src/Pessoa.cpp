#include "Pessoa.hpp"
#include "validacpfcnpj.hpp"

/**
 * @brief Cadastra uma pessoa
 * 
 */
void Pessoa::cadastro()
{
    string nomeAux, cpfAux, enderecoAux, telefoneAux, identidadeAux;
    char sexoAux;
    cout << "\nInforme o nome: ";
    getline(cin, nomeAux);

    cout << "\ninforme o sexo: ";
    cin >> sexoAux;
    cin.ignore();

    cout << "\nInforme o endereço: ";
    getline(cin, enderecoAux);

    cout << "\nInforme o CPF: ";
    cin >> cpfAux;
    cin.ignore();

    cout << "\nInforme o telefone: ";
    getline(cin, telefoneAux);

    cout << "\nInforme a identidade: ";
    getline(cin, identidadeAux);

    this->setNome(nomeAux);
    this->setSexo(sexoAux);
    this->setEndereco(enderecoAux);
    this->setCpf(cpfAux);
    this->setTelefone(telefoneAux);
    this->setIdentidade(identidadeAux);
}

/**
 * @brief Seta o atributo nome
 * 
 * @param nom 
 */
void Pessoa::setNome(string nom)
{
    this->nome = nom;
}

/**
 * @brief Retorna o atributo nome
 * 
 * @return string 
 */
string Pessoa::getNome()
{
    return this->nome;
}

/**
 * @brief Seta o atributo sexo
 * 
 * @param sexo 
 */
void Pessoa::setSexo(char sexo)
{
    // verifica se o sexo é igual a "m" ou "f", caso contrário, da throw em sexo inválido
    if (sexo == 'm' || sexo == 'f' || sexo == 'M' || sexo == 'F')
        this->sexo = sexo;
    else
         throw std::runtime_error("Sexo inválido");
}

/**
 * @brief Retorna o atributo sexo
 * 
 * @return char 
 */
char Pessoa::getSexo()
{
    return this->sexo;
}

/**
 * @brief Seta o atributo endereco
 * 
 * @param end 
 */
void Pessoa::setEndereco(string end)
{
    this->endereco = end;
}

/**
 * @brief Retorna o atributo endereco
 * 
 * @return string 
 */
string Pessoa::getEndereco()
{
    return this->endereco;
}

/**
 * @brief Seta o atributo cpf
 * 
 * @param cpf 
 */
void Pessoa::setCpf(string cpf)
{
    if ((cpf.length() != 11 || !ValidaCPFCNPJ::validaCPF(cpf)) && cpf != "")
        throw std::runtime_error("CPF invalido");
    else
        this->cpf = cpf;
}

/**
 * @brief Retorna o atributo cpf
 * 
 * @return string 
 */
string Pessoa::getCpf()
{
    return this->cpf;
}

/**
 * @brief Seta o atributo telefone
 * 
 * @param tel 
 */
void Pessoa::setTelefone(string tel)
{
    this->telefone = tel;
}

/**
 * @brief Retorna o atributo telefone
 * 
 * @return string 
 */
string Pessoa::getTelefone()
{
    return this->telefone;
}


/**
 * @brief Seta o atributo identidade
 * 
 * @param id 
 */
void Pessoa::setIdentidade(string id)
{
    this->identidade = id;
}

/**
 * @brief Retorna o atributo identidade
 * 
 * @return string 
 */
string Pessoa::getIdentidade()
{
    return this->identidade;
}