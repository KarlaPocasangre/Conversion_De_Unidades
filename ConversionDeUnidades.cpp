#include <iostream>

using namespace std;
int main()
{
    //Karla Estefany Hernandez Pocasangre
    // Declaracion de Variables
    int opcion1 = 0;
    float cantidad = 0, MetrosPies = 0, MetrosPulgadas = 0, PiesMetros = 0,
          PiesPulgadas = 0, PulgadasMetros = 0, PulgadasPies = 0;

    // Indreso de datos
    cout << "Ingrese la cantidad a convertir: ";
    cin >> cantidad;

    cout << "\nCONVERSIONES" << endl;
    cout << "1= Metros a Pies" << endl;
    cout << "2= Metros a Pulgadas" << endl;
    cout << "3= Pies a Metros" << endl;
    cout << "4= Pies a Pulgadas" << endl;
    cout << "5= Pulgadas a Metros" << endl;
    cout << "6= Pulgadas a Pies" << endl;
    cout << "Seleccione una unidada de medida: ";
    cin >> opcion1;

    // Salida de Datos
    switch (opcion1)
    {
    case (1):

        // Metros a Pies
        MetrosPies = cantidad * 3.28084;
        cout << "\nEL resultado de la conversion de Metros a Pies es: " << MetrosPies << " Pies" << endl;
        break;

    case (2):

        // Metros a Pulgadas
        MetrosPulgadas = cantidad * 39.3701;
        cout << "\nEL resultado de la conversion de Metros a Pulgadas es : " << MetrosPulgadas << " Pulgadas" << endl;
        break;

    case (3):

        // Pies a Metros
        PiesMetros = cantidad * 3.28084;
        cout << "\nEL resultado de la conversion de Pies a Metros es: " << PiesMetros << " Metros" << endl;
        break;

    case (4):

        // Pies a Pulgadas
        PiesPulgadas = cantidad * 12;
        cout << "\nEL resultado de la conversion de Pies a Pulgadas es: " << PiesPulgadas << " Pulgadas" << endl;
        break;

    case (5):

        // Pulgadas a Metros
        PulgadasMetros = cantidad / 39.3701;
        cout << "\nEL resultado de la conversion de Pulgadas a Metros es: " << PulgadasMetros << " Metros" << endl;
        break;

    case (6):

        // Pulgadas a Pies
        PulgadasPies = cantidad / 12;
        cout << "\nEL resultado de la conversion de Pulgadas a Pies es: " << PulgadasPies << " Pies" << endl;
        break;

    default:
        cout << "\nIngrese un numero valido" << endl;
        break;
    }
    return 0;
}