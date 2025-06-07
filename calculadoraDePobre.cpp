#include <iostream>
using namespace std;


void conta(int operacao, float num1, float num2) {
    if (operacao == 1)
    {
        cout << endl;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (operacao == 2)
    {
        cout << endl;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (operacao == 3)
    {
        cout << endl;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (operacao == 4)
    {
        cout << endl;
        if (num2 == 0)
        {
            cout << "Operacao indefinida!";
        }
        else
        {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        
    }
    else
    {
        cout << endl;
        cout << "Algo deu errado!";
    }
}

int main() {
    int operacao;
    float num1;
    float num2;
    bool operacaoValida = true;

    cout << "       ----- Seja bem vindo -----" << endl;
    cout << "" << endl;
    cout << "         Operacoes matematicas" << endl;
    cout << "________________________________________ " << endl;
    cout << "| 1 - Adicao             2 - subtracao |" << endl;
    cout << "| 3 - Multiplicacao      4 - Divisao   |" << endl;
    cout << "" << endl;
    cout << "Digite o numero da operacao matematica que deseja realizar: ";
    cin >> operacao;

    if (operacao > 4 || operacao < 1)
    {
        operacaoValida = false;
        while (operacaoValida == false)
        {
            cout << "Operacao invalida! Faca uma escolha valida: ";
            cin >> operacao;

            if (operacao >= 1 && operacao <= 4)
            {
                operacaoValida = true;
            }
            
        }
        
    }
    else
    {
        operacaoValida = true;
    }

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    

    conta(operacao, num1, num2);

    cout << endl;
    cout << "Obrigado por usar a calculadora :)";

}