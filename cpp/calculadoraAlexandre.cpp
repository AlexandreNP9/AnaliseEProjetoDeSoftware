#include "calculadoraAlexandre.hpp"

void CalculadoraAlexandre::definaTela(Tela *tela) { this->tela = tela; }
Tela *CalculadoraAlexandre::obtenhaTela() { return this->tela; }

void CalculadoraAlexandre::definaUcp(Ucp *ucp) { this->ucp = ucp; }
Ucp *CalculadoraAlexandre::obtenhaUcp() { return this->ucp; }

void CalculadoraAlexandre::definaTeclado(Teclado *teclado) { this->teclado = teclado; }
Teclado *CalculadoraAlexandre::obtenhaTeclado() { return this->teclado; }
