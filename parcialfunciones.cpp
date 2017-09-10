#include <iostream>

using namespace std;
void calcular_horas(int &categoria, int &horas_trabajadas, int &aumento, int &sueldo);


int main(){
  #define HOR(sueldo,cat) float(((sueldo)*cat)/100)

  int categoria, horas_trabajadas, aumento, sueldo;
  std::cout << "Dame categoria" << '\n';
  std::cin >> categoria;
  std::cout << "Cuantas horas trabajo?" << '\n';
  std::cin >> horas_trabajadas;
  aumento = 0;
  sueldo = 0;
  calcular_horas(categoria, horas_trabajadas, aumento, sueldo);
  std::cout << "El aumento es " << aumento << '\n';
  std::cout << "El sueldo es " << sueldo << '\n';
  std::cout << "El sueldo total es: " << aumento + sueldo << '\n';

}
//devolver cuanto es el aumento
void calcular_horas(int &categoria, int &horas_trabajadas, int &aumento, int &sueldo){
  int hora_extra;
  switch (categoria) {
    case 1:
      if (horas_trabajadas > 40){
        hora_extra = horas_trabajadas - 40;
        sueldo = 35 * (horas_trabajadas - hora_extra);
        aumento = (sueldo * 10) / 100;
        hora_extra = (hora_extra * 60) / 100;
        aumento = hora_extra + aumento;
      }
      else{
        sueldo = 35 * horas_trabajadas;
        aumento = HOR(sueldo,10);
      }
      break;
    case 2:
      if (horas_trabajadas > 40){
        hora_extra = horas_trabajadas - 40;
        sueldo = 45 * (horas_trabajadas - hora_extra);
        aumento = (sueldo * 7) / 100;
        hora_extra = (hora_extra * 57) / 100;
        aumento = hora_extra + aumento;
      }
      else{
        sueldo = 45 * horas_trabajadas;
        aumento = (sueldo * 7) / 100;
      }
      break;
    case 3:
       if (horas_trabajadas > 40){
          hora_extra = horas_trabajadas - 40;
          sueldo = 65 * (horas_trabajadas - hora_extra);
          aumento = (sueldo * 5) / 100;
          hora_extra = (hora_extra * 55) / 100;
          aumento = hora_extra + aumento;
       }
       else{
          sueldo = 65 * horas_trabajadas;
          aumento = (sueldo * 5) / 100;
       }
    break;
    case 4:
      if (horas_trabajadas > 40){
        hora_extra = horas_trabajadas - 40;
        sueldo = 100 * (horas_trabajadas - hora_extra);
        aumento = (sueldo * 3) / 100;
        hora_extra = (hora_extra * 53) / 100;
        aumento = hora_extra + aumento;
      }
      else{
        sueldo = 100 * horas_trabajadas;
        aumento = (sueldo * 3) / 100;
      }
      break;
  }
}
