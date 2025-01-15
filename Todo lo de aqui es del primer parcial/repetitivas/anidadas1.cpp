#include    <iostream>

using namespace std;
main (){
    bool entrar=true;
    char limpiar;
    int op,CANTIDADNUMEROS,contador,numero,nverificador,contverificador,suma;
    while (entrar)
    {
        cout    <<" MENU DE OPCIONES "<<endl;
        cout << " 1_NUMEROS ABUNDANTES "<< endl;
        cout << " 2_NUMEROS DEFICIENTES"<< endl;
        cout << " 3_NUMEROS AMIGOS"<< endl;
        cout << " 4_SALIR"<< endl;
        cout << " INGRESA UNA OPCION: "<< endl;
        cin>>op;
       if(op>0&&op  <4){
        cout    << " INGRESE LA CANTIDAD DE NUMEROS: ";
        cin >> CANTIDADNUMEROS;
        contador=0;
        nverificador=2;
       }
        switch (op)
        {
        case  1:
        while (contador>CANTIDADNUMEROS)
        {
                contverificador=1;
          while (   contverificador<nverificador)
          {
            if (nverificador%contverificador==0){
                suma=suma+contverificador;
            }
            contverificador++;
          }
          if(suma>nverificador){
            cout    << " ABUNDANTE: "<<nverificador<<endl;
            contador++;
          }
          nverificador++;
        }
        
            cout << " EN CONSTRUCCION"<< endl;
            break;
                case 2:
                cout << " DEFICIENTES"<< endl;
                break;
                    case 3:
                    cout << " AMIGOS"<< endl;
                    break;
                        case 4:
                        entrar= false;
                        break;
            default:
            cout << " OPCION NO VALIDA "<< endl;
            break;
        }
                system("pause");
        system(" cls ");
    }
    

}