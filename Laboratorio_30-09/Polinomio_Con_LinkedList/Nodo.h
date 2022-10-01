#pragma once
#include <iostream>

using namespace std;

class Termino{
    int coeficiente, grado;
    Termino *next;
public:
    int getCoeficiente(){
        return this->coeficiente;
    }
    void setCoeficiente(int coeficiente){
        this->coeficiente = coeficiente;
    }
    int getGrado(){
        return this->grado;
    }
    void setGrado(int grado){
        this->grado = grado;
    }
    Termino *getNext(){
        return this->next;
    }
    void setNext(Termino *next){
        this->next = next;
    }
    Termino (int coeficiente, int grado, Termino *next){
        this->coeficiente = coeficiente;
        this->grado = grado;
        this->next = next;
    }
};
