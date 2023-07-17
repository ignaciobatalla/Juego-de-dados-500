#ifndef FUNCIONESMAXPUNTAJE_H_INCLUDED
#define FUNCIONESMAXPUNTAJE_H_INCLUDED

//FUNCION MAXIMO PUNTAJE//
    //FUNCION CUADRO PARA MAXIMO PUNTAJE//
    void cuadromaxpuntaje(int RECUADRO1,int RECUADRO2){
        recuadro(36,21,45,9,RECUADRO1,RECUADRO2);
    }
    //FUNCION SABER Y MOSTRAR EL MAXIMO PUNTAJE//
    int PuntajeMaximo(int MaximoAnterior[],string NombreJugador[],int X1,int Y1){
        string Jugador = "CPU" ;
        int Maximo = 0;
        if (Maximo < MaximoAnterior[0]){
                Maximo = MaximoAnterior[0];
                Jugador = NombreJugador[0];
            }

        gotoxy(X1,Y1++); cout << "!!!Puntaje Record!!!" << endl;
        gotoxy(X1--,Y1);
        gotoxy(X1--,Y1);
        gotoxy(X1--,Y1); cout << "!!! " << Jugador << " : " << Maximo << " Puntos !!!" << endl;
        return 0;
    }


#endif // FUNCIONESMAXPUNTAJE_H_INCLUDED
