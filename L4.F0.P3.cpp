

#include <iostream>

#include <iomanip>

#include <time.h>

using namespace std;
const int MAX_N = 100;
int main() {
    
    
    int A[MAX_N];
    
    int a, b;
    
    int n;
    
    // --- (I) read the basic input data
    
    cout << "Enter the ends of interval [a,b]:"; //podajemy skrajne wartości
    
    cout<<"a:";
    cin >> a;
    
    
    cout << " b: ";
    cin>>b;
    
    cout << "Enter the number of elements:"; //wczytywanie liczby elementów
    
    cin >> n;
    
    // --- (A) generate a random vector A
    
    int c = b-a+1; // c is the number of integers in interval [a,b]
    
    srand(time(NULL));
    
    for ( int i = 0; i < n; i++ )
        
        A[i]=rand() % c+a;
    
    // --- (B) display the elements of vector A
    
    cout << "Vector A : ";
    
    for ( int i = 0; i < n; i++ )
        
        cout << setw(3) << A[i];
    
    // --- (C) calculate the arithmetic mean am
    
    double sum = 0;
    
    for ( int i = 0; i < n; i++ )
        
        sum += A[i];
    
    double am = sum / n;
    
    cout << endl << "Arithmetic mean: " << am << endl;
    
    // --- (D) count the elements greater than am
    
    int counter = 0;
    
    for ( int i = 0; i < n; i++ )
        
        if (A[i] > am) counter++;
    cout << "There are " << counter << " elements greater than " << am << endl;
    
    
    return 0;
}
