#ifndef FUNCIONESUNJUGADOR_H_INCLUDED
#define FUNCIONESUNJUGADOR_H_INCLUDED

//FUNCIONES UN JUGADOR//
    //FUNCION CUADRO PARA CARGAR EL NOMBRE//
    void cuadronombre(int RECUADRO1,int RECUADRO2){
        recuadro(36,21,50,9,RECUADRO1,RECUADRO2);
    }
    //FUNCION CUADRO PARA LAS RONDAS//
    void cuadrorondas(int RECUADRO1,int RECUADRO2){
        recuadro(20,9,80,40,RECUADRO1,RECUADRO2);
    }
    //FUNCION CUADRO CUANDO SALE ESCALERA//
    void cuadroescalera(int RECUADRO1,int RECUADRO2){
        recuadro(25,21,80,8,RECUADRO1,RECUADRO2);
    }
    //FUNCION CUADRO CUANDO SE LLEGA A 500//
    void cuadro500(int RECUADRO1,int RECUADRO2){
        recuadro(25,21,80,8,RECUADRO1,RECUADRO2);
    }
    //FUNCION PARA EMPEZAR A JUGAR//
    int UnJugador(int a[], string c[],string nombreunjugador,int RECUADRO1,int RECUADRO2,int X1,int Y1){

                    int maximocomparador=a[0];
                    bool continuar;
                    rlutil::cls();
                    int maximopuntajeronda = 0;
                    string maximonombre;

                    int numeroderonda=1;

                    int acumuladorronda=0;
                    bool escalera= false;

                    bool noserepitemas=false;
                    // ENTRA EN DO WHILE PARA HACER RONDAS ETERNAS HASTA QUE TOQUE ESCALERA, SEIS 6 O LLEGAR A UN PUNTAJE MAS ALTO QUE 500
                    do{
                        rlutil::cls();
                        int sumaximopuntajeenronda=0;

                        bool seis=false;

                        //COMIENZAN LOS LANZAMIENTOS//
                        for(int i=1; i<=3; ++i){
                        cuadrogrande(RECUADRO1,RECUADRO2);
                        cuadrorondas(RECUADRO1,RECUADRO2);
                        X1=22;
                        Y1=11;
                        gotoxy(X1,Y1); cout<<"Ronda numero "<<numeroderonda<<endl<<endl;
                        X1=22;
                        Y1=13;

                        gotoxy(X1++,Y1++); cout << "Jugador: " << nombreunjugador << " ||" << " Lanzamiento numero: "<< i << " ||" << endl;
                        int puntajelanzamiento=0;
                        int dados[6];
                        gotoxy(X1=X1-1,Y1++); cout << "-----------------------------------------------------------------------------" << endl;
                        tirardados(dados,X1,Y1);
                        X1=22;
                        Y1=40;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" << endl;
                        gotoxy(X1,Y1++); cout<<endl;
                        rlutil::cls;

                        //PREGUNTA SI TODOS LOS DADOS DAN 6 TERMINA EL JUEGO
                        if (dados[0]==6 && dados[1]==6 && dados[2]==6 && dados[3]==6 && dados[4]==6 && dados[5]==6){
                            sumaximopuntajeenronda =0 ;
                            i=4;
                            seis=true;

                        }
                        //PREGUNTA SI EN UNA TIRADA DA ESCALERA OSEA 1,2,3,4,5,6. EN CUALQUIER POSICION
                        if(Escalera(dados)){
                            escalera=true;
                            rlutil::cls();
                            cuadrogrande(RECUADRO1,RECUADRO2);
                            cuadroescalera(RECUADRO1,RECUADRO2);
                            X1=40;
                            Y1=22;
                            gotoxy(X1,Y1++); cout << "--------------------------------------------------------" << endl;
                            gotoxy(X1,Y1++); cout << "                   !!!ESCALERA!!!" << endl;
                            gotoxy(X1,Y1++); cout << "            !!!Felicidades " << nombreunjugador << " has Ganado!!!" << endl;
                            gotoxy(X1,Y1++); cout << "                Su maximo puntaje fue: " << acumuladorronda << endl;
                            gotoxy(X1,Y1++); cout << "--------------------------------------------------------" << endl;

                            i=4;
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
                            if(i==1){
                               maximopuntajeronda=puntajelanzamiento;
                            }

                            else if(i>1){
                                if(puntajelanzamiento>maximopuntajeronda){
                                    maximopuntajeronda=puntajelanzamiento;
                                }
                            }
                        }



                        if (i==3){
                            //CONTEO DEL PUNTAJE
                            acumuladorronda += maximopuntajeronda;
                        }


                        //EL TOTAL DE RONDA O EL TOTAL ACUMULADO//
                        if(escalera!=true){
                            gotoxy(X1,Y1++); cout << "El puntaje del lanzamiento es: "<< puntajelanzamiento <<endl<<endl;
                            gotoxy(X1,Y1++); cout << "El puntaje maximo de esta ronda es: "<< maximopuntajeronda <<endl<<endl;
                            gotoxy(X1,Y1++); cout << "El puntaje total acumulado: " << acumuladorronda << endl<<endl;
                            gotoxy(X1,Y1++); rlutil::anykey();
                            rlutil::cls();
                        }

                        if(acumuladorronda>=500){
                            i=4;
                            rlutil::cls();
                        }
                    }

                    //SUMA UNO PARA AUMENTAR Y QUE SALTE QUE ESTAS EN OTRA RONDA
                    ++numeroderonda;

                    //CONDICION PARA SABER SI HAY QUE SEGUIR EL CICLO
                    if(acumuladorronda>=500 || escalera==true){
                        noserepitemas=true;
                    }

                    }while(noserepitemas==false);

                      if(escalera==false){
                        cuadrogrande(RECUADRO1,RECUADRO2);
                        cuadro500(RECUADRO1,RECUADRO2);
                        X1=27;
                        Y1=22;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" <<endl;
                        gotoxy(X1,Y1++); cout << "                     !!!Felicidades " << nombreunjugador << " has Ganado!!!" << endl;
                        gotoxy(X1,Y1++); cout << "                       Tu maximo puntaje fue: " << acumuladorronda << endl;
                        gotoxy(X1,Y1++); cout << "-----------------------------------------------------------------------------" <<endl;
                        gotoxy(X1,Y1++); cout <<     "                Presione 4 para volver al menu principal." << endl<<endl;
                    }
                    else if(escalera==true){
                        gotoxy(X1,Y1++); cout <<     "         Presione 4 para volver al menu principal." << endl<<endl;
                    }

                    int volveralmenu = 0 ;

                    if (acumuladorronda >= maximocomparador ){
                        maximocomparador=acumuladorronda;
                        a[0]=maximocomparador;
                        maximonombre=nombreunjugador;
                        c[0]=maximonombre;

                    }
                    int siguejugando;
                        gotoxy(X1,Y1++); cin>>siguejugando;
                    if(siguejugando==4){
                       return continuar=true;
                        rlutil::cls();
                    }
    }

#endif // FUNCIONESUNJUGADOR_H_INCLUDED
