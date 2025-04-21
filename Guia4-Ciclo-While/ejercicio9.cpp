# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

int numero, maximo, i =0;


cout<<"Ingrese un numero : "<<endl;
cin>>numero;


while(numero != 0)
{
    if(numero % 2 == 0 && i == 0)
    {
        maximo = numero;
        i++;
        cout<<"maximo1 : "<<maximo<<endl;

    }
    else if(numero % 2 == 0 && numero > maximo)
    {

            maximo = numero;
        cout<<"maximo2 : "<<maximo<<endl;
    }

    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;

}

cout<< "El numero maximo de los pares es : "<<maximo<<endl;

}
