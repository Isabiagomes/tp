#include "Paciente.hpp"

/**
 * @brief Imprime o paciente
 * 
 */
void Paciente::imprimir()
{
    Pessoa::imprimir();
    cout << "\nRelato: " << this->relato << endl;
    cout << "\nÚltima consulta: " << this->dataUltimaConsulta << endl;
    cout << "\nMedicamento ativo: " << this->medicacaoQueToma << endl;
}

/**
 * @brief Seta o atributo relato
 * 
 * @param rel 
 */
void Paciente::setRelato(string rel)
{
    this->relato = rel;
}

/**
 * @brief Retorna o atributo relato
 * 
 * @return string 
 */
string Paciente::getRelato()
{
    return this->relato;
}

/**
 * @brief Seta o atributo dataUltimaConsulta
 * 
 * @param duq 
 */
void Paciente::setDUC(string duq)
{
    // verifica se está no formato dd/mm/aaaa
    if (duq.length() != 10)
         throw std::runtime_error("Data inválida. Formato dd/mm/aaaa");
    else if (duq[2] != '/' || duq[5] != '/')
        throw std::runtime_error("Data inválida. Formato dd/mm/aaaa");
    else
        this->dataUltimaConsulta = duq;
}

/**
 * @brief Retorna o atributo dataUltimaConsulta
 * 
 * @return string 
 */
string Paciente::getDUC()
{
    return this->dataUltimaConsulta;
}

/**
 * @brief Seta o atributo medicacaoQueToma
 * 
 * @param mqt 
 */
void Paciente::setMQT(string mqt)
{
    this->medicacaoQueToma = mqt;
}

/**
 * @brief Retorna o atributo medicacaoQueToma
 * 
 * @return string 
 */
string Paciente::getMQT()
{
    return this->medicacaoQueToma;
}