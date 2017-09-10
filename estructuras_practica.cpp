/* ingresar cantidades existentes de stock de articulos d eun  deposito embalajes en cajas.
  Los campos a considerar en la estructura son los siguientes:

  -> Descripcion(cod[60])
  ->Codigo(int)
  ->Cantidad(float)
  ->Factor12(float)
  ->Cantidad2(float)

  de dibde ki ybuci qye se ubgresa es ka -Descripcion, el codigo, la cantidad y el factor12, la otra cantidad se calcula a traves
  del factor12. Por ejemplo

  Descri-pcion: Caramelos_de_leche
  Codigo: 1
  Cantidad: 10
  Factor12: 100
  Cantidad2 (No se ingresa -> se calcula a partir del factorl2*la cantidad)=100

  Una vez ingresados se desea saber las cantidades de un producto especifico ingresado por
  teclado a traves de su Codigo
  verificar que el codigo no se repita
  Considerar la cantidad total de articulos = 10. No deben permitirse codigos duplicados.

  Nota: El programa debe realizare utilizando estructuras.
  */
  #include <iostream>
  #include <stdio.h>
  #include <stdlib.h>
  #include <cstring>
  #include <string.h>

  #define C 10

  void cargar_datos(int id);
  void buscar_datos(int id);

  struct articulo{
    char descripcion[60];
    int codigo;
    float cantidad;
    float factor12;
    float cantidad2;
  } articulos[C];

  int main(){
    int opcion;
    int id = 0;
    int cod;
    bool salir = true;
    do{
      std::cout << "1 - Ingresar datos" << '\n';
      std::cout << "2 - buscar un dato" << '\n';
      std::cout << "0  salir" << '\n';
      std::cin >> opcion;
      switch (opcion) {
        case 1:
          if(id<=C){
            cargar_datos(id);
            id +=1;
          }else{
            std::cout << "lleno" << '\n';
          };
          break;
        case 2:
          std::cout << "Que codigo busco?" << '\n';
          std::cin >> cod;
          buscar_datos(cod);
          break;
        case 0:
          salir = false;
          break;
      }
    }while(salir);
  }

  void cargar_datos(int id)
  {
    char key;
    int cod;
    int salir;
    int i;
    do{
      std::cout << "ingrese codigo" << '\n';
      std::cin >> cod;
      i=0;
      salir = 0;
      while(i < C){
        if(articulos[i].codigo==cod){
          std::cout << "Codigo existente, ingrese otro" << '\n';
          salir = 1;
          break;
        }
        i+=1;
      }
    }while (salir == 1);
    articulos[id].codigo = cod;
    std::cout << "ingrese descripcion" << '\n';
    scanf("%s",articulos[id].descripcion);
    std::cin >> key;
    key= getchar();
    printf(" Ingrese cantidad\n");
    scanf("%f",&articulos[id].cantidad);
    printf("ingrese factor12\n");
    std::cin >> articulos[id].factor12;
    articulos[id].cantidad2 = (articulos[id].cantidad*articulos[id].factor12);
  }
  void buscar_datos(int cod)
  {
    std::cout << "entro al buscar" << '\n';
    for (size_t i = 0; i < C; i++) {
      if (cod ==  articulos[i].codigo) {
        std::cout << "descripcion: " << articulos[i].descripcion << '\n';
        std::cout << "Cantidad: " << articulos[i].cantidad << '\n';
        std::cout << "factor12: " <<  articulos[i].factor12 <<'\n';
        std::cout << "cantidad2: " << articulos[i].cantidad2 << '\n';
        break;
      }else{
        std::cout << "no encontre" << '\n';
      }
    }
  }
