#include <iostream>
#include <string>
#include <locale>
#include "Consultorio.hpp"

using namespace std;

/**
 * @brief Função principal do programa
 * 
 * @return int 
 */
int main()
{    
    setlocale(LC_ALL, "Portuguese");
    int controle, controleCatch = 0, a1;
    string a2, a3;

    Consultorio A("Nome_do_Consultorio", "Rua JK - 1000", "+55(88)91234-5678");
    
    do
    {
        try
        {
            if(controleCatch == 0)
            {
                cout << "\n\n\nDigite: \n=> 1 para Cadastrar um médico \n=> 2 para Cadastrar um paciente \n=> 3 para Cadastrar uma consulta \n=> 4 para Imprimir dados de um médico \n=> 5 para Imprimir Consultas \n=> 6 para Imprimir dados de um paciente \n=> 7 para ver Dados de uma consulta \n=> 8 para Remover um médico \n=> 9 para Remover um paciente \n=> 10 para Remover uma consulta \n=> 0 para sair." << endl;
                cin >> controle;
                cout << "\n\n\n";
                cin.ignore();
            }

            switch (controle)
            {
                case 1:
                    A.cadastrarMedico();
                break;
                case 2:
                    A.cadastrarPaciente();
                break;
                case 3:
                    A.cadastrarConsulta();
                break;
                case 4:                
                    A.imprimeMedico();
                break;
                case 5:
                    A.imprimirConsultas();
                break;
                case 6:
                    A.imprimePaciente();
                break;
                case 7:
                    cout << "\nInforme o CRM do médico: ";
                    cin >> a1;
                    cin.ignore();
                    cout << "\nInforme a data da consulta: ";
                    cin >> a2;
                    cin.ignore();
                    A.imprimirConsultaDoMedico(a1, a2);
                break;
                case 8:
                    cout << "\nInforme o CRM do médico: ";
                    cin >> a1;
                    cin.ignore();
                    A.removerMedico(a1);
                break;
                case 9:
                    cout << "\nInforme o CPF do paciente: ";
                    cin >> a2;
                    cin.ignore();
                    A.removerPaciente(a2);
                break;
                case 10:
                    cout << "\nInforme o CPF do paciente: ";
                    cin >> a3;
                    cin.ignore();
                    cout << "\nInforme a data da consulta: ";
                    cin >> a2;
                    cin.ignore();
                    A.removerConsulta(a3, a2);
                break;
                case 0:
                    cout << "\n\n\nSaindo..." << endl;
                    break;
                default:
                    cout << "Opção inválida!" << endl;
                    cout << endl << "Aperte qualquer tecla para continuar...";
                    cin.get();
                    break;
            }

            controleCatch = 0;
        }
        catch (exception& e)
        {
            cout << e.what() << endl;
            controleCatch = 1;
            cout << endl << "Insira os dados corretamente para continuar...";
            cin.get();
        }

    }
    while (controle != 0);

    return 0;
}