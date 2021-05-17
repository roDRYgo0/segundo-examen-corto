// 2) (50%) El área de un rombo se calcula mediante la fórmula D * d / 2, en donde D es la diagonal
// mayor y d es la diagonal menor (observe la figura). Elabore un programa que solicite los valores
// de las dos diagonales desde teclado, luego calcule el área de la figura y muéstrela en pantalla.
#include <iostream>

using namespace std;

float calculate(float dx, float dy) {
    float area = (dx * dy) /  2;
    return area;
}

int main() {
    float dx, dy;
    while (true) {
        cout << "Ingrese la diagonal mayor (D): ";
        cin >> dy;

        cout << "Ingrese la diagonal menor (d): ";
        cin >> dx;

        cout << "El área del rombo es: " << calculate(dx, dy) << endl << endl;
    }
}
