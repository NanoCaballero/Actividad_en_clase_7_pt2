#include <iostream>

#include "sum.h"
#include "sub.h"
#include "div.h"
#include "mult.h"


int main() {
    Operacion* op;

    op = new Sum();
    std::cout << "Suma: " << op->ejecutar(10, 5) << std::endl;
    delete op;

    op = new Sub();
    std::cout << "Resta: " << op->ejecutar(10, 5) << std::endl;
    delete op;

    op = new Mult();
    std::cout << "Multiplicacion: " << op->ejecutar(10, 5) << std::endl;
    delete op;

    op = new Div();
    std::cout << "Division: " << op->ejecutar(10, 5) << std::endl;
    delete op;

    return 0;
}
