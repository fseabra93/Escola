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


        float getSalario()
        {
            return this->salario;
        }
        void setSalario(float salario)
        {
            this->salario = salario;
        }


};

class Escola
{
    string nomeEscola;
    string cnpj;
    Funcionario *funcionarios = new Funcionario[5];
    vector <Aluno> alunos;
    int contFunc = 0;
    int contAluno = 0;

    public:
        Escola(){};

        Escola(string nomeEscola, string cnpj)
        {
            this->nomeEscola = nomeEscola;
            this->cnpj = cnpj;
        }

        void inserirAluno(string nomeCompleto, string cpf, string idade, long int matricula, string serie){
            Aluno temp(nomeCompleto, cpf, idade, matricula, serie);
            alunos.push_back(temp);
            contAluno++;

        }

        void inserirFunc(string nomeCompleto, string cpf, string idade, long int matricula, string cargo, float salario){
            if (contFunc < 5)
            {
                funcionarios[contFunc].setNomeCompleto(nomeCompleto);
                funcionarios[contFunc].setCpf(cpf);
                funcionarios[contFunc].setIdade(idade);
                funcionarios[contFunc].setMatricula(matricula);
                funcionarios[contFunc].setCargo(cargo);
                funcionarios[contFunc].setSalario(salario);
                contFunc++;
            }
            else
            {
                cout << "Você tentou inserir mais de 05 funcionários.\nO sistema não permite.\nOs últimos funcionários digitados a partir do sexto não foram cadastrados.\n " << endl;
            }
        }

        void listarAlunos()
        {

            cout << fixed;
            cout.precision(2);
            cout << "\n###### Alunos ######\n" << endl;
            for (int i = 0; i < contAluno; i++)
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

            cout << fixed;
            cout.precision(2);
            cout << "\n###### Funcionarios ######\n" << endl;
            for (int i = 0; i < contFunc; i++)
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
            cout << fixed;
            cout.precision(2);
            float soma = 0;
            for (int i = 0; i < contFunc; i++){
                soma += funcionarios[i].getSalario();
            }
            return soma;
        }


};



int main()
{
    Escola *imd = new Escola("IMD - UFRN", "24.365.710/0001-83");
    imd->inserirFunc("Mick Jagger","999.999.999-99","30", 888888, "Professor", 9012.55);
    imd->inserirFunc("Keith Richards","888.888.888-88","35", 777777, "Professor", 12345.55);
    imd->inserirFunc("Michael Jackson", "777.777.77-77", "45", 666666, "Coordenador", 12356.23);
    imd->inserirFunc("Elton John", "666.666.666-66", "40", 555555, "Professor", 12456.78);
    imd->inserirFunc("Lebron James", "123.123.123-12", "38", 976543, "Professor", 45612.23);
    imd->inserirFunc("Anthony Davis", "012.123.123-12", "30", 794543, "Professor", 32687.28);
    imd->inserirAluno("John Lennon","111.111.111-11","20",1234, "1o. Período");
    imd->inserirAluno("Paul McCartney", "222.222.222-22","21",1235,"2o. Período");
    imd->inserirAluno("George Harrison", "333.333.333-33","22",1236,"3o. Período");
    imd->inserirAluno("Ringo Starr", "444.444.444-44", "23", 1237, "4o. Período");
    imd->inserirAluno("Stephen Curry", "303.303.303-30", "30", 3030, "5o. Período");
    imd->inserirAluno("Draymond Green", "323.323.323-23", "40", 2323, "6o. Período");


    imd->listarFunc();
    float salarios = imd->calcularSalarios();
    cout << "Salarios: "<< salarios << endl << "------------------------------" << endl;

    imd->listarAlunos();

    return 0;
}