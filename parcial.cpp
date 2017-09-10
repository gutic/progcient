//parcial 4/05
//lo hice en linux mint
#include <iostream>
#include <math.h>
using namespace std;

int main(){
  #define COD(FLAG,RADIO,ANGULO) float((flag == 1 ? (radio*cos(angulo)) : (radio * sin(angulo)))) //(salario < 200001 ? 3 : 4) ))
  float radio, angulo, x, y;
  int flag = 1;
  do {
    std::cout << "Ingrese una radio / ingrese 0 para salir" << '\n';
    std::cin >> radio;
    if (radio == 0)
      break;
    std::cout << "ingrese angulo" << '\n';
    std::cin >> angulo;
    std::cout << "1 para x y 2 para y" << '\n';
    std::cin >> flag;
    if (flag == 1){
      cout << "x = " << COD(flag,radio,angulo);
      std::cout << '\n';
    }
    else{
      cout << "Y =" << COD(flag,radio,angulo);
      std::cout << '\n';
    }
  } while(radio != 0);
  std::cout << "salio" << '\n';

}
