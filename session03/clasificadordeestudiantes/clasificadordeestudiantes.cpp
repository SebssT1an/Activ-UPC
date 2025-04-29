#include <iostream>

using namespace std;

int main() {
    //declaración de variables
    int edad = 0, ID = 0, auxID = 0;
    char genero = 0;
    string categoría, camiseta, resultado, bonificacion;

    //ingreso de variables
    cout << "Digite su edad: "; cin >> edad;
    cout << "\nDigite su genero (M o F): "; cin >> genero;
    cout << "\nDigite su ID: "; cin >> ID;

    //verificación de edad y categoría
    if (edad <= 0) {
        cout << "\nEdad invalida" << endl;
    }
    else {
        if (edad < 12) {
            categoría = "Infantil";
        }
        else if (edad >= 12 && edad <= 17) {
            categoría = "Juvenil";
        }
        else {
            categoría = "Adulto";
        }
    }

    //verificación de camiseta
    auxID = ID % 10;
    switch (auxID) {
    case 0: camiseta = "Rojo"; break;
    case 1: camiseta = "Rojo"; break;
    case 2: camiseta = "Azul"; break;
    case 3: camiseta = "Azul"; break;
    case 4: camiseta = "Verde"; break;
    case 5: camiseta = "Verde"; break;
    case 6: camiseta = "Amarillo"; break;
    case 7: camiseta = "Amarillo"; break;
    case 8: camiseta = "Negro"; break;
    case 9: camiseta = "Negro"; break;
    default:
        break;
    }

    //resultado
    if (edad < 8) {
        cout << "No puede participar" << endl;
    }
    else if (edad >=8 && edad<=11) {
        switch (genero) {
        case 'F': resultado = "Participa en deportes no competitivos";
        case 'M': resultado = "Participa en deportes competitivos";
        default:
            break;
        }
    }
    else if (edad >= 12 && edad <= 17) {
        resultado = "Participa en deportes competitivos";
    }
    else {
        resultado = "Participa en deportes competitivos";
        switch (auxID) {
        case 2: bonificacion = "Recibe una bonificacion especial";
        case 4: bonificacion = "Recibe una bonificacion especial";
        case 6: bonificacion = "Recibe una bonificacion especial";
        case 8: bonificacion = "Recibe una bonificacion especial";
        case 0: bonificacion = "Recibe una bonificacion especial";
        default:
            break;
        }
    }

    //salida de datos
    cout << "\nCategoria: " << categoría << endl;
    cout << "\nColor de Camiseta: " << camiseta << endl;
    cout << "\nResultado: " << resultado << endl;
    cout << '\n' << '\t' << bonificacion;

    return 0;
}