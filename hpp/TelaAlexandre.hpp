#include <iostream>
#include <vector>

#include "calculadora.hpp"

class TelaAlexandre: public Tela {
public:
  void adicione(Digito);
  void limpe();
  void definaSinal(Sinal);
  void definaSeparadorDecimal();
};