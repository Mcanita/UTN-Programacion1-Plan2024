# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{
    int numero, maximo, minimo, i = 0;

cout<<"Ingrese un numero : "<<endl;
cin>>numero;


while(numero != 0)
{
    if(i == 0)
    {
        minimo = numero;
        maximo = numero;
        i++;
    }
    else{
        if(numero < minimo)
        {
            minimo = numero;
        }
        if(numero > maximo)
        {
            maximo = numero;
        }
    }
    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;

}
cout<< "El numero minimo es : "<<minimo<<endl;
cout<< "El numero maximo es : "<<maximo<<endl;

}
