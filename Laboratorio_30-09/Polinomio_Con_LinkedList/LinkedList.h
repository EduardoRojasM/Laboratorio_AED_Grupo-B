#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

class LinkedList{
    Termino *head;
public:
    Termino *getHead(){
        return this->head;
    }
    
    void *setHead(Termino *head){
        this->head = head;
    }

    LinkedList(){
        this->head = NULL;
    }

    void Insert(int x, int y){
        Termino *nuevo = new Termino(x,y,this->head);
        this->head = nuevo;
    }

    void Delete(){
        Termino *elm = this->head;
        this->head = this->head->getNext();
        elm->setNext(NULL);
        delete elm;
    }

    string Find(int x, int y){
        Termino *aux = this->head;
        while (aux != NULL && aux->getCoeficiente() != x && aux->getCoeficiente() != y){
            aux = aux->getNext();
        }
        if (aux->getCoeficiente()!=NULL){
            cout<<"Si existe "<<x<<"x a la "<<y<<endl;
        }
    }

    void Print(){
        Termino *current = this->head;
        while (current != NULL){
            cout<<current->getCoeficiente()<<"x a la "<<current->getGrado()<<"    ";
            current = current->getNext();
        }
        cout<<endl;
    }
};