//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial() {
    polinom = nullptr;
}

void Polynomial::add(size_t c, size_t e) {
    auto* numerito =new numero;
    for(int i = 0; i< e;i++){
        numerito->coeficiente = c;
        numerito->grado = e;
        numerito->next = polinom;
    }
        polinom = numerito;
}

Polynomial::~Polynomial() {

}


Polynomial &Polynomial::operator+(const Polynomial &right) {
    polinom->coeficiente = right.polinom->coeficiente + polinom->coeficiente;
    return *this;
}


ostream &operator<<(ostream &out, const Polynomial &n) {
    out << n.polinom;
    return out;

}

Polynomial &Polynomial::operator=(const Polynomial &r) {
    polinom = r.polinom;
    return *this;
}

Polynomial::Polynomial(int) {
}

Polynomial &Polynomial::operator+(int nu) {
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

