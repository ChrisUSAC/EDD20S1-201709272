#include "T1.h"

using namespace std;
//-------------------------------------------------------------------------------
//metodo constructor
T1::T1()
{
    //ctor
}
//-------------------------------------------------------------------------------
//metodo destructor
T1::~T1()
{

}
//-------------------------------------------------------------------------------
void T1::crearMatriz(int M)
{
    cout<<"valor M "<<M<<endl;
    int matriz [M][M]; // se crea la matriz

    for(int i=0; i<M;i++)
    {
        for(int j=0; j<M;j++)
        {
            if(i==0 || i== M-1 || j==0 || j==M-1)
            {
                matriz[i][j]=1;
            }
            else
            {
             matriz[i][j]=0;
            }

        }
    }

    //impresion de matriz en consola
    cout<<"inicio del metodo pintar"<<endl;
        for(int i=0; i<M;i++)
    {

        for(int j=0; j<M;j++)
        {
            if(matriz[i][j]==1)
            {
            cout<<"\t"<<"|_"<<matriz[i][j]<<"_|";
            }else
            {
            cout<<"|__|";
            }
        }

        cout<<endl;
        cout<<"----------------------------------------------------------"<<endl;
    }

}


