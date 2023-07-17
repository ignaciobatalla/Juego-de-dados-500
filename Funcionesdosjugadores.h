#ifndef FUNCIONESDOSJUGADORES_H_INCLUDED
#define FUNCIONESDOSJUGADORES_H_INCLUDED

//FUNCIONES PARA DOS JUGADORES//
    //FUNCION PARA CUADRO NOMBRES//
    void cuadro2nombre(int RECUADRO1,int RECUADRO2){
        recuadro(36,21,51,9,RECUADRO1,RECUADRO2);
    }
    //FUNCION CUADRO CUANDO SALE ESCALERA//
    void cuadroescalera2(int RECUADRO1,int RECUADRO2){
        recuadro(25,21,77,9,RECUADRO1,RECUADRO2);
    }
    //FUNCION CUADRO PARA LAS RONDAS//
    void cuadroronda(int RECUADRO1,int RECUADRO2){
        recuadro(20,9,80,40,RECUADRO1,RECUADRO2);
    }
    //FUNCION UN PUNTOS//
    int funcionpuntos(int dados[], string nombredejugador, int maximopuntajeronda[], int acumuladorronda[], int i, bool escalera[],int X1,int Y1,int RECUADRO1,int RECUADRO2){
                        //PREGUNTA SI TODOS LOS DADOS DAN 6 TERMINA EL JUEGO


                        int puntajelanzamiento=0;
                        if (dados[0]==6 && dados[1]==6 && dados[2]==6 && dados[3]==6 && dados[4]==6 && dados[5]==6){

                            bool seis=true;
                            return seis;

                        }
                        //PREGUNTA SI EN UNA TIRADA DA ESCALERA OSEA 1,2,3,4,5,6. EN CUALQUIER POSICION
                        if(Escalera(dados)){
                          escalera[0]=true;
                            rlutil::cls();
                            cuadrogrande(RECUADRO1,RECUADRO2);
                            cuadroescalera2(RECUADRO1,RECUADRO2);
                            X1=27;
                            Y1=22;
                            gotoxy(X1,Y1++); cout << "--------------------------------------------------------------------------" << endl;
                            gotoxy(X1,Y1++); cout << "                         ¡¡¡ESCALERA!!!" << endl;
                            gotoxy(X1,Y1++); cout << "               ¡¡¡Felicidades " << nombredejugador << " has Ganado!!!    " << endl;
                            gotoxy(X1,Y1++); cout << "                   Su maximo puntaje fue: " << acumuladorronda[0] << endl;
                            gotoxy(X1,Y1++); cout << "--------------------------------------------------------------------------" << endl;
                        }
                        //ACA ARRANCA A CONTAR CUANTOS REPETIDOS HAY
                        else{

                            int maxcontador=0;
                            int numeroqueserepite=0;

                            for(int i = 0; i < 6; i++) {
                                int contador = 0;

                                for(int j = 0; j < 6; j++) {
                                    if(dados[j] == dados[i]) {
                                        contador++;
                                    }
                                }

                                if(contador > maxcontador) {
                                    maxcontador = contador;
                                    numeroqueserepite = dados[i];
                                }
                            }
                            //SI HAY 6 REPTIDOS, EL QUE MAS REPETIDOS TENGA SE LO MULTIPLICA POR 50
                            if(maxcontador==6){
                                puntajelanzamiento=numeroqueserepite*50;

                            }
                            //SI HAY 3 O MAS EL QUE MAS REPETIDOS TENGA SE MULTIPLICA POR 10
                            else if(maxcontador==3 ||maxcontador==4 || maxcontador==5){
                                puntajelanzamiento=numeroqueserepite*10;

                            }
                            else{
                                puntajelanzamiento=dados[0]+dados[1] +dados[2] +dados[3] + dados[4] + dados[5];

                            }
                        }


                           if(i==1){
                               maximopuntajeronda[0]=puntajelanzamiento;

                            }

                            else if(i>1){

                                if(puntajelanzamiento>maximopuntajeronda[0]){
                                    maximopuntajeronda[0]=puntajelanzamiento;
                                }
                            }

                        if (i==3){

                            //CONTEO DEL PUNTAJE
                            acumuladorronda[0]+=maximopuntajeronda[0];

                        }


                        //EL TOTAL DE RONDA O EL TOTAL ACUMULADO//
                        if(escalera[0]!=true){
                            gotoxy(X1,Y1++); cout << "El puntaje del lanzamiento es: "<< puntajelanzamiento <<endl<<endl;
                            gotoxy(X1,Y1++); cout << "El puntaje maximo de esta ronda es: "<< maximopuntajeronda [0]<<endl<<endl;
                            gotoxy(X1,Y1++); cout << "El puntaje total acumulado: " << acumuladorronda[0] << endl<<endl;
                        }
            }
    //FUNCION DOS JUGADORES//
    int dosjugares(int a[], string c[],string nombrejugador1,string nombrejugador2,int X1,int Y1,int RECUADRO1,int RECUADRO2){
                    rlutil::cls();
                    string nombredejugador;
                    int acumuladorronda;
                    int maximocomparador=a[0];
                    bool continuar;
                    int maximopuntajeronda1 [1]={0};
                    int maximopuntajeronda2[1] = {0};

                    string maximonombre;

                    rlutil::cls();

                    int numeroderonda=1;
                    int acumuladorronda1[1]={0};
                    int acumuladorronda2[1]={0};

                    bool escalera[1]= {false};
                    bool noserepitemas=false;

                    // ENTRA EN DO WHILE PARA HACER RONDAS ETERNAS HASTA QUE TOQUE ESCALERA, SEIS 6 O LLEGAR A UN PUNTAJE MAS ALTO QUE 500
                    do{

                        int sumaximopuntajeenronda=0;
                        bool seis=false;

                        //COMIENZAN LOS LANZAMIENTOS//
                        for(int i=1; i<=3; ++i){
                        cuadrogrande(RECUADRO1,RECUADRO2);
                        cuadroronda(RECUADRO1,RECUADRO2);
                        X1=22;
                        Y1=11;
                        gotoxy(X1,Y1++); cout<<"Ronda numero "<<numeroderonda<<endl<<endl;
                        X1=22;
                        Y1=13;
                        int lanzamiento=i;

                        gotoxy(X1,Y1++); cout << "Jugador: " << nombrejugador1 << " ||" << " Lanzamiento numero: "<< lanzamiento << " ||" << endl;

                        int dados[6];
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" << endl;
                        tirardados(dados,X1,Y1);
                        X1=22;
                        Y1=40;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" << endl;
                        gotoxy(X1,Y1++); cout<<endl;
                        funcionpuntos(dados, nombrejugador1, maximopuntajeronda1, acumuladorronda1, lanzamiento, escalera,X1,Y1,RECUADRO1,RECUADRO2);
                        if(escalera[0]!=true){
                        gotoxy(X1,Y1=Y1+3);rlutil::anykey();
                        rlutil::cls();
                        }
                        if(escalera[0]==true){
                            i=4;
                            break;
                        }

                        cuadrogrande(RECUADRO1,RECUADRO2);
                        cuadroronda(RECUADRO1,RECUADRO2);
                        X1=22;
                        Y1=11;
                        gotoxy(X1,Y1++); cout<<"Ronda numero "<<numeroderonda<<endl<<endl;
                        X1=22;
                        Y1=13;
                        gotoxy(X1,Y1++); cout << "Jugador: " << nombrejugador2 << " ||" << " Lanzamiento numero: "<< lanzamiento << " ||" << endl;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" << endl;
                        tirardados(dados,X1,Y1);
                        X1=22;
                        Y1=40;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" << endl;
                        gotoxy(X1,Y1++); cout<<endl;
                        funcionpuntos(dados,nombrejugador2,maximopuntajeronda2,acumuladorronda2,lanzamiento, escalera,X1,Y1,RECUADRO1,RECUADRO2);
                        if(escalera[0]!=true){
                        gotoxy(X1,Y1=Y1+3);rlutil::anykey();
                        rlutil::cls();
                        }
                         if(escalera[0]==true){
                         i=4;
                         break;
                         }

                        }

                    //SUMA UNO PARA AUMENTAR Y QUE SALTE QUE ESTAS EN OTRA RONDA
                    ++numeroderonda;

                    //CONDICION PARA SABER SI HAY QUE SEGUIR EL CICLO
                    if(acumuladorronda1[0]>=500 ||acumuladorronda2[0]>=500|| escalera[0]==true){


                         if (acumuladorronda1[0]>acumuladorronda2[0]){
                            nombredejugador= nombrejugador1;
                            acumuladorronda= acumuladorronda1[0];
                         }else{
                            nombredejugador= nombrejugador2;
                            acumuladorronda= acumuladorronda2[0];
                         }
                        noserepitemas=true;
                    }

                    }while(noserepitemas==false);

                      if(escalera[0]==false){
                        X1=27;
                        Y1=22;
                        cuadrogrande(RECUADRO1,RECUADRO2);
                        cuadro500(RECUADRO1,RECUADRO2);
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" <<endl;
                        gotoxy(X1,Y1++); cout << "                  !!!Felicidades " << nombredejugador << " has Ganado!!!" << endl;
                        gotoxy(X1,Y1++); cout << "                      Tu maximo puntaje fue: " << acumuladorronda << endl;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" <<endl;
                        gotoxy(X1,Y1++); cout << "                  Ingrese 4 para volver al menu principal." << endl<<endl;
                        gotoxy(X1,Y1++); cout << "                      Ingrese 0 para salir del juego."<<endl<<endl; //¡¡¡PREGUNTAR SI PODEMOS CERRAR CON CUALQUIER TECLA!!!//
                    }
                    if(escalera[0]==true){
                        X1=27;
                        Y1=27;
                        gotoxy(X1,Y1++); cout << "              Ingrese 4 para volver al menu principal." << endl<<endl;
                        gotoxy(X1,Y1++); cout << "                  Ingrese 0 para salir del juego."<<endl<<endl; //¡¡¡PREGUNTAR SI PODEMOS CERRAR CON CUALQUIER TECLA!!!//
                    }

                    int volveralmenu = 0 ;

                    if (acumuladorronda >= maximocomparador ){
                        maximocomparador=acumuladorronda;
                        a[0]=maximocomparador;
                        maximonombre=nombredejugador;
                        c[0]=maximonombre;

                    }
                    int siguejugando;
                        gotoxy(X1,Y1++); cin>>siguejugando;
                    if(siguejugando==4){
                       return continuar=true;
                        rlutil::cls();
                    }
     return 0;
    }


#endif // FUNCIONESDOSJUGADORES_H_INCLUDED
