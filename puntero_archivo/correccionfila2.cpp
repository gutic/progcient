/*realizar un programa para convertir
debe pedir en q coordenada se ingresa
convertir bla bla
no se deben usar variables globales, sino dinamicas
*/
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

struct datos
{
    float p;  // no defino ninguna variable, sino una estructura
    float q;  // o es x y es y, o el radio y el modulo: son dos datos y los dos son float
};

void polar_a_cartesiana(datos);
void cartesianaPolar(datos);


int main()
{
  int opc;
  datos *ingreso;
  ingreso = new datos;
  do
  {
    std::cout << "1  - Polar a cartesiana" << '\n';
    std::cout << "2 - cartesiana a polar" << '\n';
    std::cout << "0 - finalizar" << '\n';
    std::cin >> opc;
    switch (opc) {
      case 0: break;
      case 1:
        std::cout << "ingrese radio" << '\n';
        std::cin >> ingreso->p;
        std::cout << "Ingrese angulo: " << '\n';
        std::cin >> ingreso->q;
        polar_a_cartesiana(*ingreso);
        break;
      case 2:
      std::cout << "ingrese X" << '\n';
      std::cin >> ingreso->p;
      std::cout << "Ingrese Y: " << '\n';
      std::cin >> ingreso->q;
      cartesianaPolar(*ingreso);
      break;
      default:
        std::cout << "Opcion invalida" << '\n';
        break;

    }

  }while (opc);

}

void polar_a_cartesiana(datos polar)
{
  //traigo el radio y el angulo
  //aplico formulita
  std::cout << "/* message */" << polar.p * cos(polar.q) <<" = "  <<polar.p * sin(polar.q) << '\n';
}
void cartesianaPolar(datos cart)
{
  std::cout << "r = " << sqrt(pow(cart.p,2)+pow(cart.q,2)) <<  "angulo = " << tan(cart.q/cart.p) << '\n';
}
