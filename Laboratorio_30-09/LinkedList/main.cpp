#include <iostream>
#include "Nodo.h"
#include "LinkedList.h"

using namespace std;

int main(){
    LinkedList lista;
    lista.Insert(7);
    lista.Insert(6);
    lista.Insert(8);
    lista.Delete();
    lista.Print();
    cout<<lista.Find(5);
    return 0;
}
