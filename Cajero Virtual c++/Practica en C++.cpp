#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int saldo_inicial = 0,opc , ingresar_saldo, retirar_saldo;

    do {
        system("cls");
        cout << "\t****Bienvenido al Cajero Virtual****";
        cout << "\n\t1-Ingresar Dinero.";
        cout << "\n\t2-Retirar Dinero.";
        cout << "\n\t3-Salir.";
        cout << "\n\tOpcion: "; cin >> opc;

        switch (opc) {
        case 1:
            cout << "\nDinero Actual: " << saldo_inicial;
            cout << "\n\nCuanto dinero desea ingresar: "; cin >> ingresar_saldo;
            saldo_inicial += ingresar_saldo; // Actualizar saldo_inicial
            cout << "\nDinero actualizado: " << saldo_inicial << endl;
            system("pause");
            break;
        case 2:
            cout << "\nDinero Actual: " << saldo_inicial;
            cout << "\n\nCuanto dinero desea retirar: "; cin >> retirar_saldo;
            if (retirar_saldo <= saldo_inicial) {
                saldo_inicial -= retirar_saldo; // Actualizar saldo_inicial
                cout << "\nDinero actualizado: " << saldo_inicial << endl;
            }
            else {
                cout << "\nSaldo insuficiente." << endl;
            }
            system("pause");
            break;
        case 3:
            cout << "\nSaliendo del programa." << endl;
            break;
        default:
            cout << "\nOpción no válida." << endl;
            system("pause");
            break;
        }

    } while (opc != 3);

    return 0;
}
