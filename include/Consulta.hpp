#ifndef __CONSULTA_HPP__
#define __CONSULTA_HPP__

#include <string>

#include "Paciente.hpp"
#include "Medico.hpp"

using namespace std;

class Consulta
{
    private:
        string data;
        string hora;
        Paciente paciente;
        Medico medico;

    public:
        void imprimir();
        string getData();
        void setData(string dt);
        string getHora();
        void setHora(string hr);
        Paciente getPaciente();
        void setPaciente(Paciente pac);
        Medico getMedico();
        void setMedico(Medico md);
};

#endif