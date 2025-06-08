#include <iostream>
using namespace std;


void calculo(int operacao, double num1, double num2) {
    if (operacao == 1) {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    }
    else if (operacao == 2) {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";
    }
    else if (operacao == 3) {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";
    }
    else if (operacao == 4) {
        if (num2 == 0) {
            cout << "Operacao indefinida!";
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";
        }
        
    }
    else {
        cout << "Algo deu errado!";
    }
}

int main() {
    int operacao;
    double num1, num2;

    cout << "       ----- Seja bem vindo -----\n";
    cout << "\n";
    cout << "         Operacoes matematicas\n";
    cout << "________________________________________\n";
    cout << "| 1 - Adicao             2 - subtracao |\n";
    cout << "| 3 - Multiplicacao      4 - Divisao   |\n";
    cout << "\n";
    
    while (true) {
        cout << "Digite o numero da operacao matematica que deseja realizar: ";
        cin >> operacao;

        if (operacao >= 0 && operacao <= 4) {
            break;
        }
        else {
            cout << "Operacao invalida! Faca uma escolha valida\n";
        }
        
    }

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "\n";

    calculo(operacao, num1, num2);

    cout << "\n";
    cout << "Obrigado por usar a calculadora :)";

    return 0;
}