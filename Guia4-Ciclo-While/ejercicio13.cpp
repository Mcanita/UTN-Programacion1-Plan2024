# include<iostream>
# include<cstdlib>

using namespace std;

int main()
{

int num, primerImpar,ultimoImpar,i=1 ;

    cout<<"ingrese un numero: "<<endl;
    cin>>num;


    while(num !=0)
    {
         if(num%2 !=0)
         {
             if(i==1)
             {
                 primerImpar =num;
                 i++;
             }
             else{
                ultimoImpar=num;
             }
         }


        cout<<"ingrese un numero: "<<endl;
        cin>>num;

    }

 cout<<"el primer impartar es : "<<primerImpar<<endl;
 cout<<"el ultimo impartar es : "<<ultimoImpar<<endl;


}
