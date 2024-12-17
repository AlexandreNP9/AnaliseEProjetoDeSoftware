#include <iostream>
#include <vector>

#include "calculadora.hpp"

class TeclaAlexandre: public Tecla {
  Teclado *teclado;
public:
  void pressione();

  void definaTeclado(Teclado*);
  Teclado* obtenhaTeclado();
};