#include <iostream>
#include <iomanip>

using namespace std;

void exercicio1();
void exercicio2();
//void exercicio3();

int main(){
    int loop = 1;

    while (loop)
    {
        cout << endl << "Escolha um exercicio: ";
        int menu;
        cin >> menu;

        switch (menu)
        {
        case 1:
            exercicio1();
            break;

        case 2:
            exercicio2();
            break;
        
        case 3:
            //exercicio3();
            break;
          
        case 4:
            cout << "FIM" << endl;
            loop = 0;  // Adicionando controle de loop para encerrar corretamente
            break;
        
        default:
            cout << "Opção inválida" << endl;
            break;
        }
    }

    return 0;
}

void exercicio1(){
    /* Fazer um programa para ler o código de uma peça 1, o número de peças 1, 
       o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 
       e o valor unitário de cada peça 2. Calcule e mostre o valor a ser pago */

    int num, qnt;
    float val, soma;

    // Entrada e cálculo para a primeira peça
    cout << endl << "Digite o codigo da peça 1: ";
    cin >> num;
    cout << "Digite a quantidade de peças 1: ";
    cin >> qnt;
    cout << "Digite o valor unitário da peça 1: ";
    cin >> val;

    soma = qnt * val;

    // Entrada e cálculo para a segunda peça
    cout << endl << "Digite o codigo da peça 2: ";
    cin >> num;
    cout << "Digite a quantidade de peças 2: ";
    cin >> qnt;
    cout << "Digite o valor unitário da peça 2: ";
    cin >> val;

    soma += qnt * val;

    // Exibe o valor total a ser pago
    cout << fixed << setprecision(2);
    cout << endl << "O valor a ser pago é: R$ " << soma << endl;
}

void exercicio2(){
    /*Faça um programa para ler o valor do raio de um círculo, e depois mostrar o valor da área deste círculo com quatro 
    casas decimais conforme exemplos. 
 
    Fórmula: = area = π * raio². 
 
    Considere o valor de π = 3.14159 */

    float raio;
    cout << "Digite o raio: ";
    cin >> raio;

    float area = 3.14159 * (raio*raio);

    cout << fixed << setprecision(4);
    cout << "A= " << area << endl;
}