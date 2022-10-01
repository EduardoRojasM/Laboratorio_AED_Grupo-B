#pragma once
#include <iostream>

using namespace std;

class Nodo{
    int key;
    Nodo *next;
public:
    int getKey(){
        return this->key;
    }
    void setKey(int key){
        this->key = key;
    }
    Nodo *getNext(){
        return this->next;
    }
    void setNext(Nodo *next){
        this->next = next;
    }
    Nodo (int key, Nodo *next){
        this->key = key;
        this->next = next;
    }
};
