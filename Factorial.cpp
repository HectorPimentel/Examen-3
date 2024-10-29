/**Examen 3 - Hector Francisco Pimentel Resendez - 222627**/
#include <iostream>
using namespace std;

int fact(int n) {
    /** Función recursiva para calcular el factorial**/
    //En caso de introducir 0
    if (n == 0) {
        return 1;
    }
    // Llamada recursiva
    return n * fact(n - 1);
}

int main() {
    /**Funcion Principal pide el numero a calcular el factorial**/
    int num;

    cout << "Introduce un numero para calcular el factorial: ";
    cin >> num;

    if (num < 0) { //Verifica si se introudce un numero negativo
        cout << "No se puede realizar factorial para numeros negativos." << endl;
    } 
    else {
        cout << "El factorial de " << num << " es " << fact(num) << endl;
    }

    system("pause");
    return 0;
}