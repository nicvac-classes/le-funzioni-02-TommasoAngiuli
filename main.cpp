#include <iostream>
using namespace std;
int massimo (int n1, int n2)
{
    int max;
    if (n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }
    return max;
}
int main() 
{
int n1, n2, n3, n4, max;
cout<< "calcolo del massimo tra 4 numeri"<< endl;
cout<< "inserisci 4 numeri"<< endl;
cin>> n1;
cin>>n2;
cin>>n3;
cin>>n4;
max =massimo (n1,n2);
max = massimo (max,n3);
max = massimo (max, n4);
cout<< "il massimo valore è " << max << endl;
}
