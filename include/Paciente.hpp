#ifndef __PACIENTE_HPP
#define __PACIENTE_HPP

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Paciente : public Pessoa {
    private:
        string relato;
        string dataUltimaConsulta;
        string medicacaoQueToma;

    public:
        void imprimir();
        void setRelato(string rel);
        string getRelato();
        void setDUC(string duq);
        string getDUC();
        void setMQT(string mqt);
        string getMQT();
};

#endif