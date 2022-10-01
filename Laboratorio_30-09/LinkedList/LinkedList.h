#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

class LinkedList{
    Nodo *head;
    Nodo *tail;
public:
    Nodo *getHead(){
        return this->head;
    }
    void *setHead(Nodo *head){
        this->head = head;
    }
    Nodo *getTail(){
        return this->tail;
    }
    void *setTail(Nodo *head){
        this->tail = tail;
    }
    LinkedList(){
        this->head = NULL;
        this->tail = tail;
    }
    void Insert(int x){
        Nodo *nuevo = new Nodo(x,this->head);
        this->head = nuevo;
    }
    void Delete(){
        Nodo *elm = this->head;
        this->head = this->head->getNext();
        elm->setNext(NULL);
        delete elm;
    }
    int Find(int x){
        Nodo *aux = this->head;
        while (aux != NULL && aux->getKey() != x){
            aux = aux->getNext();
        }
        if (aux->getKey()==NULL){
            return NULL;
        }
        else{
            return x;
        }
    }
    void Print(){
        Nodo *current = this->head;
        while (current != NULL){
            cout<<current->getKey()<<" ";
            current = current->getNext();
        }
        cout<<endl;
    }
};