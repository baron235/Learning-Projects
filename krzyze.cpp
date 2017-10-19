
#include <iostream>
using namespace std;


void linijka1(int n, int x)
{
    for(int j=0; j<x ;j++)
    {
        
    for(int i=0; i<n; i++)
        {
        if(n%2==0 && (i==n/2 || i==(n/2-1)))
        {
            cout<<"x";
        }
        else if(n%2==1 && (i==(n/2+1) || i==n/2 || i==(n/2-1)))
        {
            cout<<"x";
        }
        else{
            cout<<" ";
        }
        
    }
    
    }
    cout<<endl;
    
}


 void linijka2(int n, int x)
{
    for(int j=0; j<x ;j++)
    {
    for(int i=0; i<n; i++)
    {
        cout<<"x";
    }
    
    }
    cout<<endl;
}




void krzyz(int n, int x)
{
    for(int i=0;i<n;i++)
    {
        
        if(n%2==0 && (i==n/2 || i==(n/2-1)))
        {
            linijka2(n,x);
        }
        else if(n%2==1 && (i==(n/2+1) || i==n/2 || i==(n/2-1)))
        {
            linijka2(n,x);
        }
        else{
           linijka1(n,x);
        }

    }
}

void krzyze_w_dol(int n, int x)
{
    for(int i=0;i<x;i++)
    krzyz(n,x);
}





int main() {
    int n;
    int x;
    cout<<"podaj n";
    cin>>n;
    cout<<endl;
    cout<<"podaj szerokość";
    cin>>x;
  
    krzyze_w_dol(n,x);
    
    return 0;
}
