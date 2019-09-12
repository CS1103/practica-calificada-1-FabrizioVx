//
// Created by rudri on 9/12/2019.
//

#include <stdexcept>
#include <iostream>
#include "Polynomial.h"

Polynomial::Polynomial() {
    polinom = nullptr;
}

size_t Polynomial::add(size_t c, size_t e) {
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



//{

    /*
    int i, p;
    poly *newl = NULL, *end = NULL;
    cout << "Enter highest power for x\n"; cin >> p;
//Read first poly
    cout << "\nFirst Polynomial\n"; for (i = p; i >= 0; i--) {
    newl = new poly;
    newl->pow_val = p;
        cout << "Enter Co-efficient for degree" << i << ":: ";
        cin >> newl->coeff;
    newl->next = NULL;
    if (poly1 == NULL)
    poly1 = newl;
    else
    end->next = newl;
    end = newl;
    }

//Read Second poly
cout << "\n\nSecond Polynomial\n"; end = NULL; for (i = p; i >= 0; i--) {
newl = new poly;
newl->pow_val = p;
cout << "Enter Co-efficient for degree" << i << ":: "; cin >> newl->coeff;
newl->next = NULL;
if (poly2 == NULL)
poly2 = newl;
else
end->next = newl;
end = newl;
}

//Addition Logic
poly *p1 = poly1, *p2 = poly2;
end = NULL;
while (p1 != NULL && p2 != NULL) {
if (p1->pow_val == p2->pow_val) {
newl = new poly;
newl->pow_val = p--;
newl->coeff = p1->coeff + p2->coeff;
newl->next = NULL;
if (poly3 == NULL)
poly3 = newl;
else
end->next = newl;
end = newl;
}
p1 = p1->next;
p2 = p2->next;
}
}
     */