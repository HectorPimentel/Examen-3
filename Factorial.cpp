/**Examen 3 - Hector Francisco Pimentel Resendez - 222627**/
#include <iostream>
using namespace std;

double fact(double n) {
    /** Funcion recursiva para calcular el factorial**/
    if (n == 0) {
        return 1;
    }
    // Llamada recursiva
    return n * fact(n - 1);
}

void cajero() {
    /**Función para el cajero**/
    double saldo = 20000;
    int opc;
    double retiro;

    do { //Menu de opciones
        cout << "\nCajero Automatico\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retiro de efectivo\n";
        cout << "3. Salir del Cajero\n";
        cout << "Por favor, seleccione una opcion: ";
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Su saldo actual es de: " << saldo << endl;
            break;
        case 2:
            cout << "Ingrese la cantidad a retirar: ";
            cin >> retiro;
            if (retiro > saldo) {
                cout << "Fondos insuficientes. No se puede realizar el retiro." << endl;
            }
            else {
                saldo -= retiro;
                cout << "Retiro exitoso. Su saldo actual es de: " << saldo << endl;
            }
            break;
        case 3:
            cout << "Saliendo del modo cajero automatico." << endl;
            break;
        default:
            cout << "Opcion no valida. Ingrese otra opcion." << endl;
            break;
        }
    } while (opc != 3);
}

int main() {
    cout << "Hector Francisco Pimentel Resendez - 222627\n";
    int sel;
    do { //Menu Principal de opciones
        cout << "\nMenu Principal\n";
        cout << "1. Calcular Factorial\n";
        cout << "2. Cajero Automatico\n";
        cout << "3. Salir del Programa\n";
        cout << "Seleccione una opcion: ";
        cin >> sel;

        switch (sel) {
        case 1: {
            double num;
            cout << "Introduce un numero para calcular el factorial: ";
            cin >> num;
            if (num < 0) {
                cout << "No se puede realizar factorial para numeros negativos." << endl;
            }
            else {
                cout << "El factorial de " << num << " es " << fact(num) << endl;
            }
            break;
        }
        case 2:
            cajero();
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida. Ingrese otra opcion." << endl;
            break;
        }
    } while (sel != 3);

    system("pause");
    return 0;
}