# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

int numero, ordenado, siguiente, i =0;
bool flag = false ;


cout<<"Ingrese un numero : "<<endl;
cin>>numero;


while(numero != 0)
{
    if(i == 0)
    {
        ordenado = numero;
        i++;
    }

    if(i != 0 && numero >= ordenado)
    {
        ordenado = numero;
    }
    else
    {
        flag = true;
    }
    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;

}


if(flag)
{
    cout<<"Conjunto desordenado " ;
}
else{
    cout<<"Conjunto ordenado "<<endl;
}


}
