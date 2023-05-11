#include <iostream>
#include <fstream>
#include "Cliente.h"
#include "Funcionario.h"
#include "ContaCartao.h"

using namespace std;

int main()
{

    int opcao;

    do
    {
        cout << "=============MENU============" << endl;
        cout << "------Escolha uma opcao:-----" << endl;
        cout << "=============================" << endl;
        cout << " " << endl;
        cout << "1 - Cadastrar cliente" << endl;
        cout << "2 - Cadastrar conta cartao" << endl;
        cout << "3 - Cadastrar funcionario" << endl;
        cout << "0 - Sair" << endl;
        cout << " " << endl;
        cout << "=============================" << endl;
        cout << "-----DIGITE A SUA OPCAO------" << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
        {
            CadastroCliente cadCliente;
            cadCliente.cadastrarCliente();
        }

        break;
        }
    case 2:
    {
        CadastroCliente cadCliente;
        cadCliente.cadastrarCliente();
        CadastroContaCartao cadContaCartao;
        cadContaCartao.cadastrarContaCartao();
    }
    break;
    case 3:
    {
        CadastroCliente cadCliente;
        cadCliente.cadastrarCliente();
        CadastroFuncionario cadFuncionario;
        cadFuncionario.cadastrarFuncionario();
    }
    break;
    case 0:
    {
        cout << "Encerrando o programa..." << endl;
        break;
    }
    default:
    {
        cout << "Opção inválida. Digite novamente." << endl;
        break;
    }
    }
}
while (opcao != 0)
    ;

return 0;
}

class CadastroCliente
{
public:
    int nuit, idade;
    string nome, bi, estadoCivil;
    char sexo;
    void cadastrarCliente()
    {

        // código para cadastrar cliente

        // leitura dos dados do cliente.................................................Case 1
        cout << "Digite o Nuit: ";
        cin >> nuit;

        // verificando se o cliente já está cadastrado
        ifstream arqCliente("clientes.txt");
        string linha;
        bool clienteExiste = false;
        while (getline(arqCliente, linha))
        {
            if (linha.find(nuit) != string::npos)
            {
                clienteExiste = true;
                break;
            }
        }
        arqCliente.close();

        if (clienteExiste)
        {
            cout << "Cliente já cadastrado." << endl;
        }
        else
        {
            // leitura dos demais dados do cliente
            cout << "Digite o nome do cliente: ";
            cin >> nome;
            cout << "Digite o BI do cliente: ";
            cin >> bi;
            cout << "Digite a idade do cliente: ";
            cin >> idade;
            cout << "Digite o sexo do cliente (M/F): ";
            cin >> sexo;
            cout << "Estado Civil: ";
            cin >> estadoCivil;

            // criando objeto cliente
            Cliente cliente(nuit, nome, bi, idade, sexo, estadoCivil);

            // escrita dos dados do cliente no arquivo
            ofstream arqCliente("clientes.txt", ios::app);
            arqCliente << cliente.getNome() << ";" << cliente.getNuit() << ";" << cliente.getBi() << ";" << cliente.getIdade() << ";" << cliente.getSexo() << ";" << cliente.getEstadoCivil() << endl;
            arqCliente.close();
        }
    };

    class CadastroContaCartao
    {
    public:
        int nuit, idade;
        string nome, bi, estadoCivil;
        char sexo;
        string nomeBanco;
        double saldo;
        void cadastrarContaCartao()
        {

            // código para cadastrar conta cartão

            // leitura dos dados da conta cartão...........................................Case 2
            cout << "Digite o nome do banco do cartão: ";
            cin >> nomeBanco;
            cout << "Digite o saldo do cartao: ";
            cin >> saldo;

            // criando objeto conta cartão
            ContaCartao contaCartao(nuit, nome, bi, idade, sexo, estadoCivil, nomeBanco, saldo);

            // escrita dos dados da conta cartão no arquivo
            ofstream arqContaCartao("contas_cartao.txt", ios::app);
            arqContaCartao << contaCartao.getNuit() << ";" << contaCartao.getNome() << ";" << contaCartao.getBi() << ";" << contaCartao.getIdade() << ";" << contaCartao.getSexo() << ";" << contaCartao.getEstadoCivil() << ";" << contaCartao.getNomeBanco() << ";" << contaCartao.getSaldo() << endl;
            arqContaCartao.close();

            cout << "Dados cadastrados com sucesso!" << endl;
        }
    };

    class CadastroFuncionario
    {
    public:
        int nuit, idade;
        string nome, bi, estadoCivil;
        char sexo;
        double salario;
        string nomeEmpresa;
        void cadastrarFuncionario()
        {

            // código para cadastrar funcionário

            // leitura dos dados do funcionario.......................................Case 3
            cout << "Digite o nome da empresa: ";
            cin >> nomeEmpresa;
            cout << "Digite o salário: ";
            cin >> salario;

            // criando objeto funcionário
            Funcionario funcionario(nuit, nome, bi, idade, sexo, estadoCivil, nomeEmpresa, salario);

            // escrita dos dados do funcionário no arquivo
            ofstream arqFuncionario("funcionarios.txt", ios::app);
            arqFuncionario << funcionario.getNuit() << ";" << funcionario.getNome() << ";" << funcionario.getBi() << ";" << funcionario.getIdade() << ";" << funcionario.getSexo() << ";" << funcionario.getEstadoCivil() << ";" << funcionario.getNomeEmpresa() << ";" << funcionario.getSalario() << endl;
            arqFuncionario.close();
        }
    };
