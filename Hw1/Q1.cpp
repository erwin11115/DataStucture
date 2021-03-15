#include<iostream>
using namespace std;
class Polynomial;

class Term {
    friend Polynomial;
    private:
        float coef;
        int exp;
};

class Polynomial {
    private:
        Term * termArray;
        int capacity;
        int terms;
    public:
        Polynomial Add(Polynomial b);
        Polynomial Multi(Polynomial b);
        float Eval(float f);
        void NewTerm(const float theCoeff, const int theExp);
};

int main(void) {

}


void Polynomial::NewTerm(const float theCoeff, const int theExp) {
    if (terms == capacity) 
    {   // double the capacity of the end of termArray
        capacity *= 2;
        Term *temp = new Term[capacity];
        copy(termArray, termArray + terms, temp);
        delete [] termArray;
        termArray = temp;
    }
}

Polynomial Polynomial::Add(Polynomial b) {
    

}

void operator<<(ostream& os, Polynomial* p) {
}

Polynomial operator>>(ostream& os, Polynomial* p) {
    
}