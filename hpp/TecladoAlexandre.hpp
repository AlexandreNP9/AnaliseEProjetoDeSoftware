#include <iostream>
#include <vector>

#include "calculadora.hpp"

class TecladoAlexandre: public Teclado {
  Ucp *ucp;
  std::vector<Tecla *> teclas;
public:
  void adicioneTecla(Tecla &tecla);

  void definaUcp(Ucp*);
  Ucp* obtenhaUcp();
};
