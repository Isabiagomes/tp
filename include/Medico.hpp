#ifndef __MEDICO_HPP
#define __MEDICO_HPP

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Medico : public Pessoa {
    private:
        int CRM;
        string especialidade;

    public:
        virtual void imprimir() override;
        void setCRM(int crm);
        int getCRM();
        void setEspecialidade(string esp);
        string getEspecialidade();
};

#endif