//
// Created by ruben on 9/12/2019.
//

#ifndef POLINOMIO_POLINOMIO_H
#define POLINOMIO_POLINOMIO_H

#include <vector>
#include <iostream>
#include <cstddef>
using namespace std;

struct numero {
public:
    size_t coeficiente;
    size_t grado;
    numero *next;
};

class Polynomial {
private:

    //numero *head;
    //numero *tail;
    numero *polinom;
    numero *head;
    numero *tail;

public:
    Polynomial();
    void add(size_t c ,size_t e);


    Polynomial &operator+(const Polynomial&);
    Polynomial &operator=(const Polynomial&);
    Polynomial &operator+=(const Polynomial&);
    Polynomial &operator+( int );
    void imprimir();
    void add(int,int);

    Polynomial (int);

    size_t degree();


    friend ostream& operator << (ostream & out, const Polynomial & n);
    ~Polynomial();

};


#endif //POLINOMIO_POLINOMIO_H
