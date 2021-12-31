

#include <iostream>

void pasarValor(long l)
{
    int x{ 3.5 }; // inicialización entre llaves no permite 
                  //conversiones con pérdida de datos

}

int main()
{    
    pasarValor(10); // valor int 10 implícitamente convertido a tipo long   

}




