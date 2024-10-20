#include <windows.h>
#include <cmath>
#include <iostream>
using namespace std;

void adicao() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe y: ";
    std::cin >> y;

    std::cout << "Resultado: " << x + y;
};
void subtracao() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe y: ";
    std::cin >> y;

    std::cout << "Resultado: " << x - y;
};
void multiplicacao() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe y: ";
    std::cin >> y;

    std::cout << "Resultado: " << x * y;
};
void divisao() {
    double x;
    double y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe y: ";
    std::cin >> y;

    std::cout << "Resultado: " << x / y;
};
void exponenciacao() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe o exponente: ";
    std::cin >> y;

    std::cout << "Resultado: " << std::pow(x,y);
};
void raiz() {
    int x;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Resultado: " << std::pow(x,0.5);
};
void porcentagem() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe a porcentagem: ";
    std::cin >> y;

    std::cout << "Resultado: " << x * (y / 100);
};
void restodiv() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe y: ";
    std::cin >> y;

    std::cout << "Resultado: " << x % y;
};
void divint() {
    int x;
    int y;

    std::cout << "Informe x: ";
    std::cin >> x;

    std::cout << "Informe y: ";
    std::cin >> y;

    std::cout << "Resultado: " << x / y;
};
void Menu() {
    int menu;
    while (true) {
        std::cout << "\n**********************************************************************";
        std::cout << "* \nCalculadora. Opções possíveis:";
        std::cout << "* \n1. Adição";
        std::cout << "* \n2. Subtração";
        std::cout << "* \n3. Multiplicação";
        std::cout << "* \n4. Divisão";
        std::cout << "* \n5. Exponenciação";
        std::cout << "* \n6. Raiz quadrada";
        std::cout << "* \n7. Porcentagem";
        std::cout << "* \n8. Resto da divisão";
        std::cout << "* \n9. Divisão de inteiro";
        std::cout << "* \n0. Sair do programa";
        std::cout << "\n*********************************************************************";
        std::cout << "* \nInforme a opção desejada: ";
        std::cin >> menu;

        if (menu == 1){
            adicao();
        }
        else if (menu == 2){
            subtracao();
        }
        else if (menu == 3){
            multiplicacao();
        }
        else if (menu == 4){
            divisao();
        }
        else if (menu == 5){
            exponenciacao();
        }
        else if (menu == 6){
            raiz();
        }
        else if (menu == 7){
            porcentagem();
        }
        else if (menu == 8){
            restodiv();
        }
        else if (menu == 9){
            divint();
        }
        else if (menu == 0){
            break;
        }
        else {
            std::cout << "Opção invalida";
        }
    }
};
int main() {
    SetConsoleOutputCP(CP_UTF8);
    Menu();
}