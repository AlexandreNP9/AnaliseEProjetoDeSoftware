#include "TelaAlexandre.hpp"

void TelaAlexandre::adicione(Digito digito)
{
  switch (digito)
  {
  case ZERO:
    std::cout << "0000\n0  0\n0  0\n0  0\n0000\n";
    break;
  case UM:
    std::cout << "  1 \n 11 \n  1 \n  1 \n1111\n";
    break;

  default:
    std::cout << "Dígito ainda não implementado!\n";
  }
}

void TelaAlexandre::limpe() { std::cout << "\n\n\n\n\n"; }

void TelaAlexandre::definaSinal(Sinal sinal)
{
  std::cout << (sinal == Sinal::NEGATIVO ? "-----\n" : "");
}

void TelaAlexandre::definaSeparadorDecimal()
{
  std::cout << "::\n";
}
