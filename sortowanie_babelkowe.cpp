#include <iostream>

using namespace std;

const int n=10;
int tablica[n]={7,1,12,5,6,3,6,2,21,9};

void zamieniamie_n_elementow(int n)
{
    for(int i=0;i<(n-1);i++)
    {
        if(tablica[i]>tablica[i+1])
        {
            int x;
            x=tablica[i];
            tablica[i]=tablica[i+1];
            tablica[i+1]=x;

        }
    }
}



int main(){
    
    for(int i=0; i<(n-1);i++)
    {
        zamieniamie_n_elementow(n-i);
    }
    
    
    return 0;
}
