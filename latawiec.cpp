
#include <iostream>
using namespace std;


void trojkat(int n)
{
    for(int i=0; i<(n/2+1);i++)
    {
        for(int k=0; k<(n/2-i);k++)
        {
            cout<<" ";
        }
        for(int j=0; j<(2*i+1);j++)
        {
            
            cout<<"x";
        }
        
        cout<<endl;
    }
}

void odwrocony_trojkat(int n)
{
    int x=1;
    for(int k=0;k<(n-1);k++)
    {
        for(int i=0; i<x; i++)
        {
            cout<<" ";
        }
        for(int j=0; j<(n-2*x);j++)
        {
            cout<<"x";
        }
        if(k%2==1)
        {
            x++;
        }
        
        cout<<endl;
        
    }
        
    
}

int main() {
   
    trojkat(21);
    odwrocony_trojkat(21);
    return 0;
}
