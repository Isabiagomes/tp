#include <iostream>
#include "Consulta.hpp"

/**
 * @brief Imprime na tela os dados da consulta
 * 
 * @return void
 */
void Consulta::imprimir()
{
    cout << "\nData: " << this->data << endl;
    cout << "\nHorário: " << this->hora << endl;
    cout << "\nPaciente: ";
    this->paciente.imprimir();
    cout << "\nMédico: ";
    this->medico.imprimir();
}

/**
 * @brief Seta o atributo data da consulta
 * 
 * @param dt 
 */
void Consulta::setData(string dt)
{
    if (dt.length() != 10 && dt != "")
        throw std::runtime_error("Data inválida. Formato dd/mm/aaaa");
    else if ((dt[2] != '/' || dt[5] != '/') && dt != "")
        throw std::runtime_error("Data inválida. Formato dd/mm/aaaa");
    else
        this->data = dt;
}

/**
 * @brief Retorna o atributo data da consulta
 * 
 * @return string 
 */
string Consulta::getData()
{
    return this->data;
}

/**
 * @brief Seta o atributo hora da consulta
 * 
 * @param hr 
 */
void Consulta::setHora(string hr)
{
    if (hr.length() != 5)
         throw std::runtime_error("Hora inválida. Formato hh:mm");
    else if (hr[2] != ':')
        throw std::runtime_error("Hora inválida. Formato hh:mm");
    else
        this->hora = hr;
}

/**
 * @brief Retorna o atributo hora da consulta
 * 
 * @return string 
 */
string Consulta::getHora()
{
    return this->hora;
}

/**
 * @brief Seta o atributo paciente da consulta
 * 
 * @param pac 
 */
void Consulta::setPaciente(Paciente pac)
{
    this->paciente = pac;
}

/**
 * @brief Retorna o atributo paciente da consulta
 * 
 * @return Paciente 
 */
Paciente Consulta::getPaciente()
{
    return this->paciente;
}

/**
 * @brief Seta o atributo medico da consulta
 * 
 * @param md 
 */
void Consulta::setMedico(Medico md)
{
    this->medico = md;
}

/**
 * @brief Retorna o atributo medico da consulta
 * 
 * @return Medico 
 */
Medico Consulta::getMedico()
{
    return this->medico;
}