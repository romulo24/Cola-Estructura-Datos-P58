/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 04-06-2021
* Colas
*/
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int opc, num;
    queue <int> cola;
    cout << "= = = Colas = = =";
    do
    {
        cout << "\n1. Encolar"
                "\n2. Desencolar"
                "\n3. Frente"
                "\n4. Ultimo"
                "\n5. Tiene datos?"
                "\n6. Salir"
                "\nIngrese su opcion: ";
        cin >> opc;
        switch(opc)
        {
        case 6:
            cout << "Gracias por usar este programa"<<endl;
            cout << "Programa finalizado.";
            break;
        case 1:
            cout << "Ingrese el numero que desea encolar: ";
            cin >> num;
            cola.push(num);

            break;
        case 2:
            if(cola.empty())
                cout << "\nERROR: La cola esta vacia.";
            else
                cola.pop();
            cout<<"Numero desencolado"<<endl;
            break;
        case 3:
            if(cola.empty())
                cout << "\nERROR: La cola esta vacia.";
            else
                cout << "\n-El numero del frente es: " << cola.front();
            break;
        case 4:
            if(cola.empty())
                cout << "\nERROR: La cola esta vacia.";
            else
                cout << "\n--El ultimo numero es: " << cola.back();
            break;
        case 5:
            if(cola.empty())
                cout << "La cola esta vacia.";
            else
                cout << "La cola tiene datos.";
            break;
        default:
            cout << "\nOpcion Invalida.";
            break;
        }
    }while(opc != 6);
    return 0;
}
