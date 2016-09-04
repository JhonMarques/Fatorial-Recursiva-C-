#include <iostream>
#include <conio2.h>
using namespace std;

int fatorial (int x){
    if (x > 1)
        return (x * fatorial(x-1));
    else
        return (1);

}
int main(){
    int a, result;
    cout << "\n\n\t\t\tInforme um Valor: ";
    cin >> a;
    result = fatorial(a);
    cout<< "\n\n\t\t\tFatorial de "<< a << " = "<<result;
    getch();

}








