#include <iostream>
#include <conio.h>

enum Categoria { A, B, C, D,};

int main() {
    const int LIMITE_A = 1;
    const int LIMITE_B = 2;
    const int LIMITE_C = 3;
    const int LIMITE_D = 4;

    int valor;
    std::cout << "Ingresa un valor entre 1 y 4: ";
    std::cin >> valor;

    Categoria categoria;                                  	

    if (valor == LIMITE_A) {
        categoria = A;
    } else if (valor == LIMITE_B) {
        categoria = B;
    } else if (valor == LIMITE_C) {
        categoria = C;
    } else if (valor == LIMITE_D) {
        categoria = D;
    } else {

    }

    switch (categoria) {
        case A:
            std::cout << "Primavera" << std::endl;
            break;
        case B:
            std::cout << "Verano" << std::endl;
            break;
        case C:
            std::cout << "Otonio" << std::endl;
            break;
        case D:
            std::cout << "Invierno" << std::endl;
            break;
    }
std::cout << "presione una tecla para salir..." ;
getch();

    return 0;

}
