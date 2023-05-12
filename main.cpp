#include <iostream>
#include <vector>

using namespace std;

class Aluno
{
    string nomeCompleto;
    string cpf;
    string idade;
    long int matricula;
    string serie;

    public:
        Aluno(){}

        Aluno(string nomeCompleto, string cpf, string idade, long int matricula, string serie)
        {
            this->nomeCompleto = nomeCompleto;
            this->cpf = cpf;
            this->idade = idade;
            this->matricula = matricula;
            this->serie = serie;
        }

        string getNomeCompleto()
        {
            return this->nomeCompleto;
        }
        void setNomeCompleto(string nomeCompleto)
        {
            this->nomeCompleto = nomeCompleto;
        }
        string getCpf()
        {
            return this->cpf;
        }
        void setCpf(string cpf)
        {
            this->cpf = cpf;
        }

        string getIdade()
        {
            return this->idade;
        }
        void setIdade(string idade)
        {
            this->idade = idade;
        }

        long int getMatricula()
        {
            return this->matricula;
        }
        void setMatricula(long int matricula)
        {
            this->matricula = matricula;
        }

        string getSerie()
        {
            return this->serie;
        }
        void setSerie(string serie)
        {
            this->serie = serie;
        }

};

class Funcionario
{
    string nomeCompleto;
    string cpf;
    string idade;
    long int matricula;
    string cargo;
    float salario;

    public:
        Funcionario(){}

        Funcionario(string nomeCompleto, string cpf, string idade, long int matricula, string cargo, float salario)
        {
            this->nomeCompleto = nomeCompleto;
            this->cpf = cpf;
            this->idade = idade;
            this->matricula = matricula;
            this->cargo = cargo;
            this->salario = salario;
        }

        string getNomeCompleto()
        {
            return this->nomeCompleto;
        }
        void setNomeCompleto(string nomeCompleto)
        {
            this->nomeCompleto = nomeCompleto;
        }
        string getCpf()
        {
            return this->cpf;
        }
        void setCpf(string cpf)
        {
            this->cpf = cpf;
        }

        string getIdade()
        {
            return this->idade;
        }
        void setIdade(string idade)
        {
            this->idade = idade;
        }

        long int getMatricula()
        {
            return this->matricula;
        }
        void setMatricula(long int matricula)
        {
            this->matricula = matricula;
        }

        string getCargo()
        {
            return this->cargo;
        }
        void setCargo(string cargo)
        {
            this->cargo = cargo;
        }


};

class Escola
{
    string nome;
    string cnpj;
    Funcionario *funcionarios = new Funcionario[5];
    vector <Aluno> alunos;
    int cont = 0;

    public:
        Escola(){};

        Empresa(string nomeEscola, string cnpj)
        {
            this->nomeEscola = nomeEscola;
            this->cnpj = cnpj;
        }

        void inserirAluno(string nomeCompleto, string cpf, strng idade, long int matricula, string serie){
            Pessoa temp(nomeCompleto, cpf, idade, matricula, serie);
            alunos.push_back(temp);
        }

        void inserirFunc(string nomeCompleto, string cpf, string idade, long int matricula, string cargo, float salario){
            if (cont < 5)
            {
                funcionarios[cont].setNomeCompleto(nomeCompleto);
                funcionarios[cont].setCpf(cpf);
                funcionarios[cont].setIdade(idade);
                funcionarios[cont].setMatricula(matricula);
                funcionarios[cont].setCargo(cargo);
                funcionarios[cont].setSalario(salario);
                cont++;
            }
            else
            {
                cout << "O limite de 05 funcionários cadastrados já foi atingido." << endl;
            }
        }

        void listarAlunos()
        {
            cout << "###### Alunos ######" << endl;
            for (int i = 0; i < cont; i++)
            {
                cout << "Nome: " << alunos[i].getNomeCompleto() << endl;
                cout << "Cpf: " << alunos[i].getCpf() << endl;
                cout << "Idade: " << alunos[i].getIdade() << endl;
                cout << "Matricula: " << alunos[i].getMatricula() << endl;
                cout << "Salario: " << alunos[i].getSerie() << endl;
                cout << "****************************" << endl;
            }
        }
        
        void listarFunc()
        {
        cout << "###### Funcionarios ######" << endl;
            for (int i = 0; i < cont; i++)
            {
                cout << "Nome: " << funcionarios[i].getNomeCompleto() << endl;
                cout << "Cpf: " << funcionarios[i].getCpf() << endl;
                cout << "Idade: " << funcionarios[i].getIdade() << endl;
                cout << "Matricula: " << funcionarios[i].getMatricula() << endl;
                cout << "Cargo: " << funcionarios[i].getCargo() << endl;
                cout << "Salario: " << funcionarios[i].getSalario() << endl;
                cout << "****************************" << endl;
            }
        }


        float calcularSalarios(){
            float soma = 0;
            for (int i = 0; i < cont; i++){
                soma += funcionarios[i].getSalario();
            }
            return soma;
        }

        





};