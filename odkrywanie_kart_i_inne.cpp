
#include <iostream>

using namespace std;

const int wymiar=4;

char tab[wymiar][wymiar]={          {'a','b','c','d'},
                                    {'b','a','c','d'},
                                    {'g','f','g','i'},
                                    {'f','i','u','u'}};



char plansza[wymiar][wymiar]={      {'#','#','#','#'},
                                    {'#','#','#','#'},
                                    {'#','#','#','#'},
                                    {'#','#','#','#'}};
void przywitanie()
{
    cout<<"WITAJ"<<endl;
}

void wyswietl_plansze()
{
    for(int i=0; i<wymiar;i++)
    {
        for(int j=0;j<wymiar;j++)
        {
            cout<<plansza[i][j];
        }
        cout<<endl;
    }
}
int zapytaj_wiersz()
{
    int n;
    do{
        cout<<"podaj numer wiersza, twój przedział liczbowy to [0,"<<wymiar-1<<"]"<<endl;
        cin>>n;
        if(n<0 || n>wymiar-1){
            cout<<"podana liczba jest niewłasciwa"<<endl;
        }
        
    }while(n<0 || n>wymiar-1);
        
        
    return n;
}


int zapytaj_kolumne()
{
    int n;
    do{
        cout<<"podaj numer kolumny, twój przedział liczbowy to [0,"<<wymiar-1<<"]"<<endl;
        cin>>n;
        if(n<0 || n>wymiar-1){
            cout<<"podana liczba jest niewłasciwa"<<endl;
        }
        
    }while(n<0 || n>wymiar-1);
    
    
    return n;
}

void odkryj_karte(int wiersz, int kolumna)
{
    plansza[wiersz][kolumna]=tab[wiersz][kolumna];
}


void zakryj_karte(int wiersz, int kolumna)
{
    plansza[wiersz][kolumna]='#';
}

void sprawdz_czy_zgadles(int w1, int w2,int k1, int k2)
{
   if(tab[w1][k1]!=tab[w2][k2])
   {
       zakryj_karte(w1,k1 );
       zakryj_karte(w2, k2);
       cout<<"Nie zgadłeś"<<endl;
   }
   else{
       cout<<"Zgadłeś"<<endl;
   }
}

bool wszystkie_odkryte()
{
    for(int i=0; i<wymiar;i++)
    {
        for(int j=0;j<wymiar;j++)
        {
            if(plansza[i][j]=='#')
            {
                return false;
            }
        }
        
    }
    return true;

}

int main()
{
    int zapisany_wiersz;
    int zapisana_kolumna;
    int zapisany_wiersz_2, zapisana_kolumna_2;
    bool zly_wpis=false;
    
    przywitanie();
    
    while(true){
        wyswietl_plansze();
    
        do{
            zapisany_wiersz=zapytaj_wiersz();
            zapisana_kolumna=zapytaj_kolumne();
            
            zly_wpis = (plansza[zapisany_wiersz][zapisana_kolumna] != '#');
            if(zly_wpis){
                cout<<"durniu, to jest juz odkryte"<<endl;
            }
            
        }while(zly_wpis);
            
        
        odkryj_karte(zapisany_wiersz, zapisana_kolumna);
        wyswietl_plansze();
    
    
    
        do{
            zapisany_wiersz_2=zapytaj_wiersz();
            zapisana_kolumna_2=zapytaj_kolumne();
            
            zly_wpis = (plansza[zapisany_wiersz_2][zapisana_kolumna_2] != '#');
            if(zly_wpis){
                cout<<"durniu, to jest juz odkryte"<<endl;
            }
            
        }while(zly_wpis);
        

        
        odkryj_karte(zapisany_wiersz_2, zapisana_kolumna_2);
        wyswietl_plansze();
        sprawdz_czy_zgadles(zapisany_wiersz, zapisany_wiersz_2, zapisana_kolumna, zapisana_kolumna_2);
        bool koniec;
        koniec=wszystkie_odkryte();
        if(koniec)
        {
            break;
        }
        
    }
    
    return 0;
}

















/*
    const int max_n=10;
    
    int main()
    {
        int tab[max_n];
        int n;
        
        cout<<"Podaj liczbę elementów tablicy"<<endl;
        cin>>n;
        cout<<endl;
        
        //wczytywanie elementów do tablicy
        for(int i=0;i<n;i++)
        {
            cout<<"Podaj element "<<i<<" tablicy: "<<endl;
            cin>>tab[i];
            
        }
        //wypisanie całej tablicy na ekranie
 
    return 0;
    }
*/











/*
 const int max_n=10;

int main()
{
    int tab[max_n];
    int n;
    
    cout<<"Podaj liczbę elementów tablicy"<<endl;
    cin>>n;
    cout<<endl;
    
    //wczytywanie elementów do tablicy
    for(int i=0;i<n;i++)
    {
        cout<<"Podaj element "<<i<<" tablicy: "<<endl;
        cin>>tab[i];
        
    }
    //wypisanie całej tablicy na ekranie
    for(int i=0; i<n; i++)
    {
        cout<<i<<" element tablicy: "<<tab[i]<<endl;
    }
    
    
    return 0;
}*/



/*int main()
{
    int n;
    cout<<"podaj wysokość n"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        // tu spacje sprzodu
        for(int j=0; j<n-(i+1); j++)
        {
            cout<<" ";
        }
        
        //dla linijek innych niz 1 rysuje A i kolejne spacje
        if(i!=0){
            cout<<"A";
            for(int j=0;j<(2*i-1); j++)
            {
                // jezeli srodek, to A(ta drabinka w srodku), a w innych sytuacjach spacje
                if(i==n/2)
                {
                    cout<<"A";
                }
                else{
                    cout<<" ";
                }
            }
        }
        
        //kazda linijka konczy sie A
        cout<<"A"<<endl;
        
    }
    
    */























/*int main()
{
    int x;
    cout<<"podaj pierwszą liczbę"<<endl;
    cin>>x;
    for(int i=0; i<(x+1)/2;i++)
    {
        for(int j=0;j<x-(i*2);j++)
        {
            cout<<"x";
        }
        cout<<endl;
    }
}

*/


























/*int main()
{
    int a;
    cout<<"Podaj liczbe naturalną"<<endl;
    cin>>a;
    
    while(a!=0)
    {
        int b;
        int x;
        
        cout<<"Podaj kolejną liczbę "<<endl;
        cin>>b;
        
        do{
            cout<<"Wybierz z menu co chcesz zrobić: "<<"1.odejmowanie "<<endl<<"2.dodawanie"<<endl;
            cin>>x;
            if(x==1)
            {
                a=a-b;
                cout<<a<<endl;
            }
            else if(x==2){
                a=a+b;
                cout<<a<<endl;
            }else{
                cout<<"podales zleeeee, pytam jeszcze raz"<<endl;
            }
        }while(x!=1 && x!=2);
        
    }
    
    cout<<"elo, jest zero"<<endl;
    
return 0;

}
*/

   /* for(int i=20;i>=1; i--)       //czy continue dla for to samo break dla while??1
    {
        if(i==13)
        {
            continue;
        }
        cout<<i<<" ";
        
    }
    cout<<endl;
    system("pause");
   
   */

    /*
    double a;
    double b;
    double c;
    cout<<"Podaj liczbe a"<<endl;
    cin>>a;
    cout<<"Podaj liczbe b"<<endl;
    cin>>b;
    cout<<"podaj liczbe c"<<endl;
    cin>>c;
    
    
    const double roz=(1e-9);//roznica

    double x=a-b;
  */
    
    
    
    
    
   




  /*
    if(a>b && a>c)
    {
        if(b>c)
        {
            cout<<a<<" "<<"jest najwieksza liczba"<<" "<<b<<" "<<"jest mniejsza od"<<a<<endl;
            cout<<"Najmniejsza jest liczba "<<c;
        }
        else
        {
            cout<<a<<" "<<"jest najwieksza liczba"<<" "<<c<<" "<<"jest mniejsza od"<<a<<endl;
            cout<<"Najmniejsza jest liczba "<<b;

        }
    }
    
    if(b>a && b>c)
    {
        if(a>c)
        {
            cout<<b<<" jest najwieksza liczba"<<" "<<a<<" jest mniejsza od"<<b<<endl;
            cout<<"Najmniejsza jest liczba "<<c;
        }
        else
        {
            cout<<b<<" jest najwieksza liczba"<<" "<<c<<" jest mniejsza od"<<b<<endl;
            cout<<"Najmniejsza jest liczba"<<" "<<a;
            
        }
    }
    if(c>a && c>b)
    {
        if(a>b)
        {
            cout<<c<<" jest najwieksza liczba"<<" "<<a<<" jest mniejsza od"<<c<<endl;
            cout<<"Najmniejsza jest liczba"<<b;
        }
        else
        {
            cout<<c<<" jest najwieksza liczba"<<" "<<b<<" jest mniejsza od"<<c<<endl;
            cout<<"Najmniejsza jest liczba"<<" "<<a;
            
        }
    }

    */
    
    

