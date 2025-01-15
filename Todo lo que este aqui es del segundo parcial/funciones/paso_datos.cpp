#include    <iostream>
using namespace std;

float suma (float a,float b){
    return a+b;
}

float resta (float a,float b){
    return a-b;
}

float multimplicacion (float a,float b){
    return a*b;
}

float division (float a,float b){
    return a/b;
}

float residuo (int a,int b){
        return a%b;
    
}

main()
{
    float a,b;
    cout << " Ingrese el primer dato: ";
    cin>>a;
    cout << " Ingrese el segundo dato: ";
    cin>>b; 
    return 0;
}
