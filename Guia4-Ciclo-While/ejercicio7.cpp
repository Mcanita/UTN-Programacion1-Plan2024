# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

int numero, maximo;

cout<<"Ingrese un numero : "<<endl;
cin>>numero;
maximo = numero;

while(numero != 0)
{
    if(numero > maximo)
    maximo = numero;

    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;
}

cout<<"El maximo es : "<<maximo<<endl;


}
