#ifndef __CONSULTORIO_HPP
#define __CONSULTORIO_HPP

#include <string>
#include "Paciente.hpp"
#include "Medico.hpp"
#include "Consulta.hpp"

using namespace std;

class Consultorio {
    private:
        string nome;
        string endereco;
        string telefone;
        Paciente vetPaciente[100];
        Medico medico[5];
        Consulta consulta[100];

    public:
        Consultorio(string nom, string end, string tel);
        int contPaciente;
        int contMedico;
        int contConsulta;        
        void cadastrarPaciente();
        bool removerPaciente(string cpf);
        void cadastrarMedico();
        void removerMedico(int crm);
        void cadastrarConsulta();
        void removerConsulta(string cpf, string data);
        void imprimirListaDeTodosOsPacientes();
        void imprimirConsultas();
        void imprimirConsultaDoMedico(int crm, string data);
        void imprimirListaDeMedicos();
        void setNome(string nom);
        string getNome();
        void setEndereco(string end);
        string getEndereco();
        void setTelefone(string tel);
        string getTelefone();
        void imprimeMedico();
        void imprimePaciente();
};

#endif