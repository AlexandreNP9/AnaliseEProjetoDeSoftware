#include "calculadoraAlexandre.hpp"

void TecladoAlexandre::adicioneTecla(Tecla &tecla)
{
  teclas.push_back(&tecla);
}

void TecladoAlexandre::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp* TecladoAlexandre::obtenhaUcp() { return this->ucp; }
