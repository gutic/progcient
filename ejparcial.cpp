//para practicar con macro
//g++ clase.cpp -o clase
//./clase
// un sisitema de ecuaciones lineales de la forma:
//  Ax + By = C
// Dx + Ey = F
//Que se puede resolver las siguientes formulas:
// X=(CE - BF)/(AE-BD)
//Y=(AF-CD)/(AE-BD)

#include <iostream>

using namespace std;

int main(){
  float x,y,a,b,c,d,e,f;
  #define DD(A,E,B,D) float(A*E-B*D)                                //<- utulizando macros
  #define X(A,B,C,D,E,F)  float(C*E-B*F)/DD(A,E,B,D)
  #define Y(A,B,C,D,E,F)  float(A*F-C*D)/DD(A,E,B,d)
  cout << "ingrese numeros " << '\n';
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  cin >> f;
  // x=(C*E - B*F) / (A*E - B*D);
  // y=((A*F) - (C*D)) / ((A*E) - (B*D));              <- forma clasica
  // cout << "valor de x es" << x << '\n';
  // cout << "valor de y es "<< y << '\n';
///////////////////////////////////////////////
  if (DD(a,e,b,d))
    cout <<"X = " << X(a,b,c,d,e,f )<< "\tY =" << Y(a,b,c,d,e,f );
  else
    cout << "no tene solucion \n";
}
