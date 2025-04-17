# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{
int numero, maximo, i = 0 ;

cout<<"Ingrese un numero : "<<endl;
cin>>numero;
maximo = numero;

while(numero != 0)
{
    i++;
    if(numero > maximo)
    maximo = numero;

    cout<<" valor de i: "<<i<<endl;
    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;
}

cout<<"El maximo es : "<<maximo<<" y esta en la posicion "<<(i-1)<<endl;



}
