#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int edad;
    float saldo = 1000;

    // Paso 1: Verificar la edad
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (cin.fail() || edad < 0) {
        cout << "Edad no válida." << endl;
        return 0;
    }

    if (edad < 16) {
        cout << "Lo sentimos, no puede continuar con la compra." << endl;
        return 0;
    }

    // Paso 2: Seleccionar tipo de usuario
    int opcion;
    cout << "Seleccione su tipo de usuario:";
    cout << "1. Estudiante";
    cout << "2. Profesional";
    cout << "3. Ver todos";
    cout << "Ingrese una opcion (1-3): ";
    cin >> opcion;

    if (cin.fail() || opcion < 1 || opcion > 3) {
        cout << "Opción no válida." << endl;
        return 0;
    }

    string nombres[6];
    float precios[6];
    int cantidad = 0;

    // Paso 3: Llenar dispositivos según la opción
    if (opcion == 1 || opcion == 3) {
        nombres[cantidad] = "Laptop Basica";
        precios[cantidad++] = 900;

        nombres[cantidad] = "Tablet Estudiantil";
        precios[cantidad++] = 600;

        nombres[cantidad] = "Chromebook";
        precios[cantidad++] = 700;
    }

    if (opcion == 2 || opcion == 3) {
        nombres[cantidad] = "Laptop Avanzada";
        precios[cantidad++] = 1500;

        nombres[cantidad] = "Tablet Pro";
        precios[cantidad++] = 1200;

        nombres[cantidad] = "Estacion de Trabajo";
        precios[cantidad++] = 2000;
    }

    // Paso 4: Mostrar dispositivos con números
    cout << "Dispositivos disponibles:";
    for (int i = 0; i < cantidad; i++) {
        cout << (i + 1) << ") " << nombres[i] << " - $" << precios[i] << endl;
    }

    // Paso 5: Elegir dispositivo por número
    int seleccion;
    cout << "\nSeleccione una opcion (1-" << cantidad << "): ";
    cin >> seleccion;

    if (cin.fail() || seleccion < 1 || seleccion > cantidad) {
        cout << "Opción no válida." << endl;
        return 0;
    }

    // Paso 6: Verificar saldo y procesar compra
    if (precios[indice] > saldo) {
        cout << "No tiene suficiente dinero. Le faltan $" << precios[indice] - saldo << " para comprar este dispositivo." << endl;
    } else {
        cout << "Compra exitosa. Su saldo restante es $" << saldo - precios[indice] << "." << endl;
    }

    return 0;
}