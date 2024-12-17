#include <iostream>
#include <vector>

#include "calculadora.hpp"

class UcpAlexandre: public Ucp {
public:
  Tela *tela;

  void definaTela(Tela*);
  Tela* obtenhaTela();
};