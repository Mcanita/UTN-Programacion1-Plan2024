# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{
int numero, cantidadPositivos = 0, cantidadNegativos = 0;

cout<<"Ingrese un numero: "<<endl;
cin>>numero;

while(numero != 0)
{
    if(numero %2 == 0)
    {
        if(numero > 0)
        {
            cantidadPositivos++;
        }
        else{
            cantidadNegativos++;
        }
    }

    cout<<"Ingrese un numero: "<<endl;
    cin>>numero;
}

cout<<"hay "<<cantidadPositivos<<" de numeros positivos"<<endl;
cout<<"hay "<<cantidadNegativos<<" de numeros negativos"<<endl;


}
