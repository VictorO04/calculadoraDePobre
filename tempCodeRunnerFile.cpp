#include <iostream>
using namespace std;


void conta(int operacao, float num1, float num2, bool operacaoValida) {
    if (operacao == 1)
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (operacao == 2)
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (operacao == 3)
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (operacao == 4)
    {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
    else
    {
        cout << "erro";
    }
    
}

int main() {
    int operacao;
    float num1;
    float num2;
    bool operacaoValida;

    cout << "       ----- Seja bem vindo -----" << endl;
    cout << "" << endl;
    cout << "         Operacoes matematicas" << endl;
    cout << "________________________________________ " << endl;
    cout << "| 1 - Adicao             2 - subtracao |" << endl;
    cout << "| 3 - Multiplicacao      4 - Divisao   |" << endl;
    cout << "" << endl;
    cout << "Digite o numero da operacao matematica que deseja realizar: ";
    cin >> operacao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    conta(operacao, num1, num2, operacaoValida);
}
