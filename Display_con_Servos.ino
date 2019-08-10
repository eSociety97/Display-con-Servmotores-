//Incluimos la libreria de servos
#include<Servo.h>


//Estas posiciones fueran las que yo calibre segun la posicion que coloque los servos 
//Aqui tendrian que ir probando uno por uno o en dado caso podrian usar las medidas 90 y 0 
int PosSegA = 100;
int PosSegA2 = 10;

int PosSegB = 100;
int PosSegB2 = 10;

int PosSegC = 103;
int PosSegC2 = 30;

int PosSegD = 103;
int PosSegD2 = 10;

int PosSegE = 90;
int PosSegE2 = 10;

int PosSegF = 108                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ;
int PosSegF2 = 30;

int PosSegG = 100;
int PosSegG2 = 10;


//Declaramos nuestros objetos Servo para cada servomotor que usaremos
Servo segA;
Servo segB;
Servo segC;
Servo segD;
Servo segE;
Servo segF;
Servo segG;

//Variable de posicion Inicial
byte pos = 0;

void setup(){
  //Asignamos nuestros pines donde conectaremos nuestros servos
  segA.attach(5);
  segB.attach(4);
  segC.attach(3);   
  segD.attach(2);
  segE.attach(7);
  segF.attach(6);
  segG.attach(9);
  //Asignamos los servos en nuestra posicion inicial 0
  MovimientoServos(pos);
  delay(300);
  }

void loop(){
  //Llamamos la funcion dependiendo de como querramos el conteo si de forma Ascendente o Descendente

  //Ascendente
  ConteoAscendente();
  
  //Descendente
  //ConteoDescendente();
  
  //Agregamos o quitamos comentarios en las lineas 27 y 29 segun el conteo que necesitemos... 
  }
//Crearemos una funcion para contar de forma descendente
void ConteoDescendente(){
  //Forma Descendente
  for(byte y = 9; y == 255; y--){
    MovimientoServos(y);
    delay(2000);
    }
  }
//Crearemos una funcion para contar de forma ascendente
void ConteoAscendente(){
  //Forma Ascendente
  for(byte x = 0; x < 10; x++){
    //Llamaremos nuestra funcion para mover los servos
    MovimientoServos(x);
    delay(2000);
    }
  }

//Crearemos una funcion que ejecute los movimientos de los servos para formar los numeros del display
void MovimientoServos(byte conteo){
  
//Crearemos un switch para ejecutar diferentes instrucciones para formar cada numero 
  switch(conteo){
      //La posicion de 90 grados significara que el segmento esta encendido
      //La posicion de 0 grados significada que el segmento esta apagado
      //Pueden cambiar las medidas segun sus necesidades en la parte de arriba
      
      //Con el caso 0 formaremos el numero 0
      case 0:
      segA.write(PosSegA);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD);
      segE.write(PosSegE);
      segF.write(PosSegF);
      segG.write(PosSegG2);
      break;

      //Con el caso 1 formaremos el numero 1
      case 1:
      segA.write(PosSegA2);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD2);
      segE.write(PosSegE2);
      segF.write(PosSegF2);
      segG.write(PosSegG2);
      break;

      //Con el caso 2 formaremos el numero 2 
      case 2:
      segA.write(PosSegA);
      segB.write(PosSegB);
      segC.write(PosSegC2);
      segD.write(PosSegD);
      segE.write(PosSegE);
      segF.write(PosSegF2);
      segG.write(PosSegG);
      break;

      //Con el caso 3 formaremos el numero 3 
      case 3:
      segA.write(PosSegA);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD);
      segE.write(PosSegE2);
      segF.write(PosSegF2);
      segG.write(PosSegG);
      break;

      //Con el caso 4 formaremos el numero 4
      case 4:
      segA.write(PosSegA2);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD2);
      segE.write(PosSegE2);
      segF.write(PosSegF);
      segG.write(PosSegG);
      break;

      //Con el caso 5 formaremos el numero 5
      case 5:
      segA.write(PosSegA);
      segB.write(PosSegB2);
      segC.write(PosSegC);
      segD.write(PosSegD);
      segE.write(PosSegE2);
      segF.write(PosSegF);
      segG.write(PosSegG);
      break;

      //Con el caso 6 formaremos el numero 6
      case 6:
      segA.write(PosSegA2);
      segB.write(PosSegB2);
      segC.write(PosSegC);
      segD.write(PosSegD);
      segE.write(PosSegE);
      segF.write(PosSegF);
      segG.write(PosSegG);
      break;

      //Con  el caso 7 formaremos el numero 7
      case 7:
      segA.write(PosSegA);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD2);
      segE.write(PosSegE2);
      segF.write(PosSegF2);
      segG.write(PosSegG2);
      break;

      //Con el caso 8 formaremos el numero 8
      case 8:
      segA.write(PosSegA);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD);
      segE.write(PosSegE);
      segF.write(PosSegF);
      segG.write(PosSegG);
      break;

      //Con el caso 9 formaremos el numero 9
      case 9:
      segA.write(PosSegA);
      segB.write(PosSegB);
      segC.write(PosSegC);
      segD.write(PosSegD2);
      segE.write(PosSegE2);
      segF.write(PosSegF);
      segG.write(PosSegG);
      break;
    }
  }
