//Atividade 1

/*#include <iostream>

using namespace std;

int main() {
    int numero_dia;

    cout << "Digite um numero de 1 a 7: ";
    cin >> numero_dia;

    switch (numero_dia) {
    case 1:
        cout << "Domingo" << endl;
        break;
    case 2:
        cout << "Segunda-Feira" << endl;
        break;
    case 3:
        cout << "Terça-Feira" << endl;
        break;
    case 4:
        cout << "Quarta-Feira" << endl;
        break;
    case 5:
        cout << "Quinta-Feira" << endl;
        break;
    case 6:
        cout << "Sexta-Feira" << endl;
        break;
    case 7:
        cout << "Sábado" << endl;
        break;
    default:
        cout << "Dia inválido." << endl;
        break;
    }

    return 0;
}*/


//Atividade 2//

/*#include <iostream>

using namespace std;

int main() {
    float num1, num2, resultado;
    char operacao;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Digite a operacao matematica desejada (+, -, * ou /): ";
    cin >> operacao;

    switch (operacao) {
    case '+':
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case '-':
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case '*':
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
        break;
    case '/':
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        }
        else {
            cout << "Erro: Divisao por zero." << endl;
        }
        break;
    default:
        cout << "Operacao invalida." << endl;
        break;
    }

    return 0;
}*/

//Atividade 3//

/*#include <iostream>

using namespace std;

int main() {
    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' ||
        letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "Vogal" << endl;
    }
    else {
        cout << "Consoante" << endl;
    }

    return 0;
}
*/