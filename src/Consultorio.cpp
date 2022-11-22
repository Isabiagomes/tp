#include "Consultorio.hpp"
#include <string>

/**
 * @brief Construct a new Consultorio:: Consultorio object
 * 
 * @param nom 
 * @param end 
 * @param tel 
 */
Consultorio::Consultorio(string nom, string end, string tel)
{
    this->contPaciente = 0;
    this->contMedico = 0;
    this->contConsulta = 0;
    this->nome = nom;
    this->endereco = end;
    this->telefone = tel;
    for (int i=0; i<100; i++)
    {
        this->vetPaciente[i].setCpf("");
        this->consulta[i].setData("");
    }
    for (int i=0; i<5; i++)
    {
        this->medico[i].setCRM(-1);
    }    
}

/**
 * @brief Cadastra um novo paciente para o consultório
 * 
 */
void Consultorio::cadastrarPaciente()
{
    string aux;
    for (int i=0; i<100; i++)
    {
        if (this->vetPaciente[i].getCpf() == "")
        {
            this->vetPaciente[i].cadastro();

            cout << "\nRelato: ";
            getline(cin, aux);
            this->vetPaciente[i].setRelato(aux);

            cout << "\nÚltima consulta: ";
            getline(cin, aux);
            this->vetPaciente[i].setDUC(aux);

            cout << "\nMedicação ativa: ";
            getline(cin, aux);
            this->vetPaciente[i].setMQT(aux);
            
            this->contPaciente++;

            cout << endl << "Paciente cadastrado com sucesso!" << endl;
            cout << "Aperte qualquer tecla para continuar...";
            cin.get();
            break;
        }        
    }  
}

/**
 * @brief Remove um paciente do consultório
 * 
 * @param cpf 
 * @return true 
 * @return false 
 */
bool Consultorio::removerPaciente(string cpf)
{
    for (int i=0; i<100; i++)
    {
        if (this->vetPaciente[i].getCpf() == cpf)
        {
            this->vetPaciente[i].setCpf("");
            break;
        }
    } 
    this->contPaciente--;
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
    return true;
}

/**
 * @brief Cadastra um novo médico para o consultório
 * 
 */
void Consultorio::cadastrarMedico()
{
    int a1;
    string a2;
    for (int i=0; i<100; i++)
    {
        if (this->medico[i].getCRM() == -1)
        {
            this->medico[i].cadastro();
            cout << "\nInforme o CRM: ";
            cin >> a1;
            cin.ignore();

            this->medico[i].setCRM(a1);
            cout << "\nInforme a especialidade: ";
            getline(cin, a2);
            this->medico[i].setEspecialidade(a2);

            this->contMedico++;

            cout << endl << "Médico cadastrado com sucesso!" << endl;
            cout << "Aperte qualquer tecla para continuar...";
            cin.get();
            break;
        }        
    } 
}

/**
 * @brief Remove um médico do consultório
 * 
 * @param crm 
 */
void Consultorio::removerMedico(int crm)
{
    for (int i=0; i<5; i++)
    {
        if (this->medico[i].getCRM() == crm)
        {
            this->medico[i].setCRM(-1);
        }  
        break;     
    } 
    this->contMedico--;
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
}

/**
 * @brief Cadastra uma nova consulta para o consultório
 * 
 */
void Consultorio::cadastrarConsulta()
{
    int crm;
    string aux, cpf;
    for (int i=0; i<100; i++)
    {
        if (this->consulta[i].getData() == "")
        {
            cout << "\nInforme a data: ";
            getline(cin, aux);
            this->consulta[i].setData(aux);
            cout << "\nInforme o horário: ";
            getline(cin, aux);
            this->consulta[i].setHora(aux);
            cout << "\nInforme o CPF do paciente: ";
            cin >> cpf;
            cin.ignore();
            for(int j=0; j<this->contPaciente; j++)
            {
                if (this->vetPaciente[j].getCpf() == cpf)
                {
                    this->consulta[i].setPaciente(this->vetPaciente[j]);
                    break;
                }                
            }            
            cout << "\nInforme o CRM do médico: ";
            cin >> crm;
            cin.ignore();
            for(int j=0; j<5; j++)
            {
                if (this->medico[j].getCRM() == crm)
                {
                    this->consulta[i].setMedico(this->medico[j]);
                    break;
                }                
            } 
            this->contConsulta++;
            cout << endl << "Consulta cadastrada com sucesso!" << endl;
            cout << "Aperte qualquer tecla para continuar...";
            cin.get();
            break;
        }        
    } 
}

/**
 * @brief Remove uma consulta do consultório
 * 
 * @param cpf 
 * @param data 
 */
void Consultorio::removerConsulta(string cpf, string data)
{
    for(int i=0; i<100; i++)
    {
        if((this->consulta[i].getPaciente().getCpf() == cpf) && (this->consulta[i].getData() == data))
        {
            this->consulta[i].setData("");
        }        
    }   
    this->contConsulta--;
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
}

/**
 * @brief Lista todos os pacientes do consultório
 * 
 */
void Consultorio::imprimirListaDeTodosOsPacientes()
{
    for(int i=0; i<100; i++)
    {
        if(this->vetPaciente[i].getCpf() != "")
        {
            this->vetPaciente[i].imprimir();
        }        
    }    
}

/**
 * @brief Lista todas as consultas do consultório
 * 
 */
void Consultorio::imprimirConsultas()
{
    for(int i=0; i<100; i++)
    {
        if(this->consulta[i].getData() != "")
        {
            this->consulta[i].imprimir();
        }          
    } 
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
}

/**
 * @brief Lista todas as consultas de um médico
 * 
 * @param crm 
 * @param data 
 */
void Consultorio::imprimirConsultaDoMedico(int crm, string data)
{
    for(int i=0; i<100; i++)
    {
        if((this->consulta[i].getMedico().getCRM() == crm) && (this->consulta[i].getData() == data))
        {
            this->consulta[i].imprimir();
        }        
    } 
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
}

/**
 * @brief Lista todos os médicos
 * 
 */
void Consultorio::imprimirListaDeMedicos()
{
    for(int i=0; i<5; i++)
    {
        if(this->medico[i].getCRM() != -1)
        {
            this->medico[i].imprimir();
        }        
    } 
}

/**
 * @brief Seta o atributo nome
 * 
 * @param nom 
 */
void Consultorio::setNome(string nom)
{
	this->nome = nom;
}

/**
 * @brief Retorna o atributo nome
 * 
 * @return string 
 */
string Consultorio::getNome()
{
	return this->nome;
}

/**
 * @brief Seta o atributo endereço
 * 
 * @param end 
 */
void Consultorio::setEndereco(string end)
{
	this->endereco = end;
}

/**
 * @brief Retorna o atributo endereço
 * 
 * @return string 
 */
string Consultorio::getEndereco()
{
	return this->endereco;
}

/**
 * @brief Seta o atributo telefone
 * 
 * @param tel 
 */
void Consultorio::setTelefone(string tel)
{
	this->telefone = tel;
}

/**
 * @brief Retorna o atributo telefone
 * 
 * @return string 
 */
string Consultorio::getTelefone()
{
	return this->telefone;
}

/**
 * @brief Imprime um médico
 * 
 */
void Consultorio::imprimeMedico()
{
    int aux;
    cout << "\nInforme um CRM: " << endl;
    cin >> aux;
    cin.ignore();
    for (int i=0; i<5; i++)
    {
        if(this->medico[i].getCRM() == aux)
        {
            this->medico[i].imprimir();
            break;
        }
    }
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
}

/**
 * @brief Imprime um paciente
 * 
 */
void Consultorio::imprimePaciente()
{
    string aux;
    cout << "\nInforme um CPF: " << endl;
    cin >> aux;
    cin.ignore();
    for (int i=0; i<100; i++)
    {
        if(this->vetPaciente[i].getCpf() == aux)
        {
            this->vetPaciente[i].imprimir();
            break;
        }
    }
    cout << endl << "Aperte qualquer tecla para continuar...";
    cin.get();
}