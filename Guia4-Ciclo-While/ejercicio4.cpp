# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{
    int numero, i = 1;

    cout<<"ingrese un numero positivo : "<<endl;
    cin>>numero;
    cout<<endl;

    if(numero>0)
    {
        while(i<=numero)
        {
            cout<<i<<endl;
            i++;
        }
    }
    else
    {
        cout<<"el numero ingresado NO es positivo"<<endl;
    }




}
