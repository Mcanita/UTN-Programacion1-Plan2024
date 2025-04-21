# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

 int numero, maximo, minimo, iP = 0, iN = 0;

 cout<<"Ingrese un numero : "<<endl;
 cin>>numero;

while(numero != 0)
{
    if(numero > 0 )
    {
        if(iP == 0)
        {
            minimo = numero;
             iP++;
        }
        else  if(numero < minimo)
        {
            minimo = numero;
        }

    }
    else{

        if(iN == 0)
        {
            maximo = numero;
            iN++;
        }
        else if(numero > maximo)
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
