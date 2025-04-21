# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

int numero, primerMayor, segundoMayor, i =0;

cout<<"Ingrese un numero : "<<endl;
cin>>numero;


while(numero != 0)
{
    if(i == 0)
    {
        primerMayor = numero;
        i++;
    }

    if(i != 0 && numero >primerMayor)
    {
        segundoMayor = primerMayor;
        primerMayor = numero;
    }

     cout<<"segundo mayor : "<<segundoMayor<<endl;
    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;

}

    cout<<"mayor numero: "<<primerMayor<<endl;

    cout<<"segundo mayor numero: "<<segundoMayor<<endl;

}
