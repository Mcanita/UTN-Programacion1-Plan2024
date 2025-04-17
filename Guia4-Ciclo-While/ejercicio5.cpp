# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{
    int numero1, numero2,i;

    cout<<"ingrese el primer numero: "<<endl;
    cin>>numero1;

    cout<<"ingrese el segundo numero: "<<endl;
    cin>>numero2;
    cout<<endl;

    if(numero1<numero2)
    {
        cout<<"Listado de numeros : "<<endl;
        i = numero1;
        while(i<=numero2)
        {
            cout<<i<<endl;
            i++;
        }
    }
    else
    {
        cout<<"Listado de numeros : "<<endl;
        i = numero2;
         while(i<=numero1)
        {
            cout<<i<<endl;
            i++;
        }

    }


}
