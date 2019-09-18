//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

#include "Polynomial.h"
Polynomial::Polynomial() {
    head = nullptr;
    tail = nullptr;
}

void Polynomial::add(int coeficiente, int grado) {
    numero *auxiliar = new numero;
    auxiliar->coeficiente = coeficiente;
    auxiliar->grado = grado;

    auxiliar->next = head;
    head = auxiliar;
}

void Polynomial::imprimir() {
    numero *dt = head;
    while(dt != nullptr){
        cout<<dt->coeficiente<<"x^"<<dt->grado<<"+";
        dt = dt->next;
    }
}

ostream &operator<<(ostream &out, const Polynomial &n) {
    out <<n.head->coeficiente <<"x^"<< n.head->grado<<std::showpos;
    return out;
}


Polynomial &Polynomial::operator=(const Polynomial &n) {
    head->grado = n.head->grado;
    head->coeficiente = n.head->grado;
    return *this;
}

Polynomial &Polynomial::operator+(const Polynomial &p) {
    numero *dt = head;
    while(dt != nullptr) {
        if (head->grado == p.head->grado) {
            head->coeficiente += p.head->coeficiente;
        }
        dt = dt->next;
    }
    return *this;

}

size_t Polynomial::degree() {
    Polynomial num1,num2,num3;
    int e = 9999;
    while(e > 0){
        if(num1.polinom->grado < e){
            if(num2.polinom->grado < e){
                if(num3.polinom->grado < e){
                    return num3.polinom->grado;
                }
            }
        }

        if(num2.polinom->grado < e){
            if(num3.polinom->grado < e){
                if(num1.polinom->grado < e){
                    return num3.polinom->grado;
                }
            }
        }

        if(num3.polinom->grado < e){
            if(num2.polinom->grado < e){
                if(num1.polinom->grado < e){
                    return num3.polinom->grado;
                }
            }
        }
    }
}

Polynomial &Polynomial::operator+=(const Polynomial &r) {
    this->polinom->coeficiente += r.polinom->coeficiente;
    return *this;
}

