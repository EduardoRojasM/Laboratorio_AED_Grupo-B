#include <iostream>
#include "Nodo.h"
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList polinomio;
    polinomio.Insert(7,5);
    polinomio.Insert(6,5);
    polinomio.Insert(8,5);
    polinomio.Print();
    cout<<polinomio.Find(7,5);
    return 0;
}
