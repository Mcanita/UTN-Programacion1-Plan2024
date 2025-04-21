# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

int numero, primer, segundo, iP = 0;

 cout<<"Ingrese un numero : "<<endl;
 cin>>numero;

while(numero != 0)
{
    if(numero % 2 != 0 )
    {
        if(iP == 0)
        {
            primer = numero;
             iP++;
        }
        else  if(iP == 1 )
        {
            segundo = numero;
            iP++;
        }

    }


    cout<<"Ingrese un numero : "<<endl;
    cin>>numero;

}
cout<< "El primer impar es : "<<primer<<endl;
cout<< "El segundo impar es : "<<segundo<<endl;





}
