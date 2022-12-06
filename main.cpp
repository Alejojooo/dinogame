#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void startGame();
void showScores();
void help();

int main()
{
    cout << "BIENVENIDO A DINOGAME!" << endl;
    int option = 0;
    do
    {
        cout << endl;
        cout << "1. INICIAR JUEGO" << endl;
        cout << "2. VER PUNTUACION" << endl;
        cout << "3. MOSTRAR AYUDA" << endl;
        cout << "4. SALIR DEL JUEGO" << endl;
        cout << "Seleccione una opcion: ";
        cout << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            help();
            break;
        case 4:
            return 0;
        default:
            break;
        }
    } while (option != 4);
    return 0;
}

void help()
{
    cout << endl << "Hecho por Alejandro Fernandez" << endl;
    cout << "Este proyecto se creo como practica para el lenguaje C++" << endl;
    cout << "Esta es una implementacion temprana de este menu" << endl;
}