#include    <iostream>
using namespace std;

main (){
    int op;
    while (true)
    {
        do
            {
        cout    << " \nMenu de opciones "<< endl;
            cout    << " 1_Abundantes "<< endl;
            cout    << " 2_Deficientes "<< endl;
            cout    << " 3_Amigos "<< endl;
            cout    << " 4_Salir  "<< endl;
            cout    << " Escoja una opción  "<< endl;
            cin>>op;
            if(op<1 || op>4){
                cout<< " Opcion no valida\n ";
            system("pause");
            system("cls");

            }

    } while (op <1||op>4);
    switch (op)
    {
    case 1:
        cout    << " Abunantes ";
        break;
        case 2:
        cout    << " Deficientes ";
        break;
            case 3:
        cout    << " Amigos";
        break;
            case 4:
        cout    << " Saliendo del sistema ";
        break;
    default:
    cout<< " La opción no es valida ";
        break;

    }
    }
    
}