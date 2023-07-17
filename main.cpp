#include <iostream>
#include <ctime>
#include "rlutil.h"
#include <stdio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

#include "FuncionesPersonalizar.h"
#include "Funcionescuadros.h"
#include "Funcionesdados.h"
#include "Funcionesunjugador.h"
#include "Funcionesdosjugadores.h"
#include "Funcionesmaxpuntaje.h"

//FUNCION PRINCIPAL//
int main (){
    system("mode con: cols=118 lines=53");
    rlutil::setBackgroundColor(rlutil::BLUE);
    rlutil::cls();
    setlocale(LC_ALL,"Spanish");
    int RECUADRO1=15,RECUADRO2=1;
    int maximocomparador[1]={0};
    bool continuar = true;
    string maximonombre[1]={""};
    srand(time(0));
    titulo();

    rlutil::cls();

    int ModoDeJuego;
                //EMPIEZA EL JUEGO//
            do {

                cuadrogrande(RECUADRO1,RECUADRO2);
                cuadromenu(RECUADRO1,RECUADRO2);
                //MENU//
                int X1=37,Y1=22;
                gotoxy (X1,Y1++); cout << "--------------------------------------------" << endl;
                gotoxy (X1,Y1++); cout << "       JUEGO DE QUINIENTOS O ESCALERA" << endl << endl;
                gotoxy (X1,Y1++); cout << "--------------------------------------------" << endl;
                gotoxy (X1,Y1++); cout << "                1-1 JUGADOR" << endl << endl;
                gotoxy (X1,Y1++); cout << "               2-2 JUGADORES" << endl << endl;
                gotoxy (X1,Y1++); cout << "              3-PUNTAJE MAXIMO " << endl;
                gotoxy (X1,Y1++); cout << "              0-CERRAR EL JUEGO " << endl;
                gotoxy (X1,Y1++); cout << "--------------------------------------------" << endl;
                gotoxy (X1,Y1++); cin >> ModoDeJuego;

             switch (ModoDeJuego){

                         ///MODO DE JUEGO DE UN JUGADOR///
                        case 1:{
                            string nombreunjugador;
                            X1=38;
                            Y1=22;
                            rlutil::cls();
                            cuadrogrande(RECUADRO1,RECUADRO2);
                            cuadronombre(RECUADRO1,RECUADRO2);
                            gotoxy(X1,Y1++); cout<<"Antes de comenzar permitame conocerte"<<endl;
                            gotoxy(X1,Y1++); cout<<"Escribe tu nombre de jugador"<<endl;
                            nombreunjugador=cargarnombre(nombreunjugador,X1,Y1);
                            gotoxy(X1,Y1++);
                            gotoxy(X1,Y1+2); cout<<"Bien ahora que ya te conozco comenzemos a jugar"<<endl;
                            gotoxy(X1,Y1+2); rlutil::anykey();
                            UnJugador(maximocomparador,maximonombre,nombreunjugador,RECUADRO1,RECUADRO2,X1,Y1);
                            rlutil::cls();
                        break;
                        }
                        case 2:{                                        ///MODO DE JUEGO DOS JUGADORES///
                            string nombrejugador1,nombrejugador2;
                            X1=38;
                            Y1=22;
                            rlutil::cls();
                            cuadrogrande(RECUADRO1,RECUADRO2);
                            cuadro2nombre(RECUADRO1,RECUADRO2);
                            gotoxy(X1,Y1++); cout << "Antes de comenzar permitame saber sus nombres" << endl;
                            gotoxy(X1,Y1++); cout << "Escribe el nombre del primer jugador:" << endl;
                            nombrejugador1=cargarnombre(nombrejugador1,X1,Y1);
                            Y1=25;

                            gotoxy(X1,Y1++); cout << "Escribe el nombre del segundo jugador:" << endl;
                            nombrejugador2=cargarnombre(nombrejugador2,X1,Y1);
                            gotoxy(X1,Y1+2); cout << "Bien ahora que ya conozco sus nombres comenzemos" << endl;
                            gotoxy(X1,Y1+3); rlutil::anykey();

                            dosjugares(maximocomparador,maximonombre,nombrejugador1,nombrejugador2,X1,Y1,RECUADRO1,RECUADRO2);
                            rlutil::cls();
                        break;
                        }
                        case 3:{                                        ///PUNTAJE MAXIMO///
                            X1=50;
                            Y1=25;
                            rlutil::cls();
                            cuadrogrande(RECUADRO1,RECUADRO2);
                            cuadromaxpuntaje(RECUADRO1,RECUADRO2);
                            PuntajeMaximo(maximocomparador, maximonombre,X1,Y1);
                            gotoxy (X1,Y1=Y1+2); rlutil::anykey();
                            rlutil::cls();
                        break;
                        }
                        case 0:{
                            rlutil::cls();
                            X1=46;
                            Y1=26;
                            cuadrogrande(RECUADRO1,RECUADRO2);
                            cuadrocerrar(RECUADRO1,RECUADRO2);
                            gotoxy(X1,Y1++); cout<<"Has salido del juego"<<endl;
                            gotoxy (X1,Y1=Y1++); rlutil::anykey();
                            gotoxy (X1,Y1=Y1++); continuar=false;
                        break;
                        }
                        default:
                            gotoxy (X1,Y1++); cout << "La opcion ingresada no es correcta." << endl;
                            continuar = true;
                            gotoxy (X1,Y1++); rlutil::anykey();
                    }
            } while (continuar == true);
}
