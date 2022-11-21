#include "Medico.hpp"

/**
 * @brief Imprime um médico
 * 
 */
void Medico::imprimir()
{
    Pessoa::imprimir();
    cout << "\nCRM: " << this->CRM << endl;
    cout << "\nEspecialidade: " << this->especialidade << endl;
}

/**
 * @brief Seta o atributo CRM
 * 
 * @param crm 
 */
void Medico::setCRM(int crm)
{
    this->CRM = crm;
}

/**
 * @brief Retorna o atributo CRM
 * 
 * @return int 
 */
int Medico::getCRM()
{
    return this->CRM;
}

/**
 * @brief Seta o atributo especialidade
 * 
 * @param esp 
 */
void Medico::setEspecialidade(string esp)
{
    this->especialidade = esp;
}

/**
 * @brief Retorna o atributo especialidade
 * 
 * @return string 
 */
string Medico::getEspecialidade()
{
    return this->especialidade;
}