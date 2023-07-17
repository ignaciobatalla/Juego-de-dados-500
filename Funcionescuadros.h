#ifndef FUNCIONESCUADROS_H_INCLUDED
#define FUNCIONESCUADROS_H_INCLUDED

//FUNCIONES PARA PERNOLIZAR EL MENU//
    //FUNCION PARA EL TITULO DEL JUEGO//
    void titulo(){
        int X1=0,Y1=0;

        gotoxy(X1,Y1);   cout<<"......................................................................................................................"<<endl;
        gotoxy(X1,Y1++); cout<<"......................................................................................................................"<<endl;
        gotoxy(X1,Y1++); cout<<"......................................................................................................................"<<endl;
        gotoxy(X1,Y1++); cout<<"......................................................,:ldxxkkOOOOOOOOOOOOOOOOkkkxdoc,................................"<<endl;
        gotoxy(X1,Y1++); cout<<"....................................................'o0XXNXNNOc;;;ck0l,,;:x0l'',;dKXX0x;.............................."<<endl;
        gotoxy(X1,Y1++); cout<<"....................................................o0XNNNNNN0o:,,;x0xc;;:d0kc:;:dKXXXX0c............................."<<endl;
        gotoxy(X1,Y1++); cout<<"...................................................;k0XNNNNNNNNNNNNNNNNNNNNNNNNNNNNXXXXX0c............................"<<endl;
        gotoxy(X1,Y1++); cout<<"...................................................ckOKXNNNNNNNNXOOO0XNXOkkOKXXOxxkOXNNXXO:..........................."<<endl;
        gotoxy(X1,Y1++); cout<<"...................................................okO0XNNNWWWWXo....;Ok'  .'xO;.  .oXNNXXk,.........................."<<endl;
        gotoxy(X1,Y1++); cout<<"..................................................'dOkOKXNWWWWWWXOdddkXN0xddkKNKOxxk0NNNNNXd.........................."<<endl;
        gotoxy(X1,Y1++); cout<<".....................',,,,,'......................,xkkO0XNWWWWWWWWWWWWWWWWWWWWWWWWWWWWWNNNX0:........................."<<endl;
        gotoxy(X1,Y1++); cout<<"..................;ok0KXXXKK0Okdol:;'.............;xOkkOKXNWWWWWMWWWWWWWWWWWWWWWWWWWWWNNNNXKo........................."<<endl;
        gotoxy(X1,Y1++); cout<<"................;xXWWWW0l;,;:xXWNXXXK0kxol:;'.....ckOdcd0XNNNWWWWNWWNNNNNNNNNNNNNNXNXXXXXXKKd........................."<<endl;
        gotoxy(X1,Y1++); cout<<"..............,dXWWWWWWKo:,,;okc''',lKNXKKXXK0kdc;lkOd,l0KNNNNNNNXXNXXXXXXXXXXXXXKKKKKKKKKKKd........................."<<endl;
        gotoxy(X1,Y1++); cout<<"............'l0NWWWWWWWWWWWWWWXkl:::dOl....:0WWWWNXKOxco0KXXXXXXXX0xdx0KXXXXKKKKKKKKKKKKKKK0o........................."<<endl;
        gotoxy(X1,Y1++); cout<<"...........:ONWWWW0xddxONWMWWWWWWMMMMN0dlcldKWMWWWWWXOkkOKXXXXXXKo.   'xXKKKKKKKKKKKKKKKKK0Oc........................."<<endl;
        gotoxy(X1,Y1++); cout<<".........'oXWWWWMNo.   'x0doooxKWWMMMMMMMMMMMMMMMWWNX0kkOKKKKKKK0;    'xKKKKKKKKKKKKKKKKK00k:........................."<<endl;
        gotoxy(X1,Y1++); cout<<"........'dXWWWWMMMWKOOOKNx'.. .o0dccloONMMMMMMMMWWNXX0kkO0KKKKKKKOdlldOKKOkxk0KKKKKKKKKKK00x,........................."<<endl;
        gotoxy(X1,Y1++); cout<<"........lKXNNWWWWMMMMMMMMMNK00KW0:'...cKMMMMMMMWNXXXX0xkO0KKKKKKKKKKKKKOc.. .cOKKKKKKK00000d. ........................"<<endl;
        gotoxy(X1,Y1++); cout<<".......;k0KKKXXXNNNWWWWMMMMMMMMMMWNKKXWMMMMMMWWNXXOdOOxxO0KKKKKKKKKKKKKx.    ;OKKKKKKK0000Oc.........................."<<endl;
        gotoxy(X1,Y1++); cout<<".......cO0000000KKKXXXXNNNWWWWMMMMMMMMMMMMMMWNXXXK:'kOdxO000KKKKKKKKKKK0xccldOK0Okk0000000k:. ........................"<<endl;
        gotoxy(X1,Y1++); cout<<".......oOO00OO0000000000KKKXXXNNNWWWMMMMMMMWNXKKXk,c0xodkO0000000K00KK00KKK000x;...'d0000Ox:.........................."<<endl;
        gotoxy(X1,Y1++); cout<<"......'dOOO0Oxl::lxOO00O000000KKKKXXNNWWWWWNKK0KKOx0OoodxOOO0000000000000KKKKKxcloox0NNNNNNXK0Oxo:...................."<<endl;
        gotoxy(X1,Y1++); cout<<"......,xOOOOO:    .oO00OOOO00000000KKXXXNNNK000000KKo;cldkkOOOOOO0KKXXNNWWWMMMMMWX00KXWXxlclokXWWN0o,................."<<endl;
        gotoxy(X1,Y1++); cout<<"......;xOOO0Oo'    cOOOO000Oo;,;lk0000KKXXXK0000000O:..:ldxxkkkOKNWMMMMMW0lclod0O;....:xo'...'xWWWWW0l'..............."<<endl;
        gotoxy(X1,Y1++); cout<<"......;kOOOOOOkdlcok000OO00d.    'x0000KKXK000000OOx;....,:clldKWMMMMMMMWk,....l0OocccdKMNK00XWMMMWWWNO:.............."<<endl;
        gotoxy(X1,Y1++); cout<<"......:kOOOOOOO000O00000000Ol'.  'x0O000KKK000000OOd'.........dXNWWMMMMMMMNK00KNMMMMMMMMMWMMWMMMMMMMMWWXx,............"<<endl;
        gotoxy(X1,Y1++); cout<<".......ckOOOOOOOOOOO0000000000kdook000000KK000000OOkc........;OXXXNWWMMMMMMMMMMMMMMMMMMWX0KXWW0occox0WWWWKl'.........."<<endl;
        gotoxy(X1,Y1++); cout<<".......ckkOOOOkkkOOOO0OO000000O000O000000KK00000OOOo'........lKKKKXNNWMMMMMMMMMXxlldx0Kl...';xx,.  .:0MWWWNk;........."<<endl;
        gotoxy(X1,Y1++); cout<<".......cxkkkOo'..'cxOOOOOOOO0OOOOO0000000KK00xokOOd,......',oKdckKKXNWWMMMMMMMO,.  .'k0o:;;ckNNKOO0XWMWWWWNO:........."<<endl;
        gotoxy(X1,Y1++); cout<<"......;dxkkkc     :kOOOOOOOkxxkOOO000000000x';kOd,.......,:x0: ;OKKXXNWMMMMMMMN0kkkKNMMMMMMMMMMMMMWWWWWWNNXk;........."<<endl;
        gotoxy(X1,Y1++); cout<<".......cddxxdc,..'lkkOOOOOx;...,oOOOO000000c.lkl'........;okKo.'kKKKKXNWWMMMMMMMMMMMMMMMMWWWWWWWNNNNNXXKKK0Ol........."<<endl;
        gotoxy(X1,Y1++); cout<<"......;loddxxddxkkkkkkkOd'    .dOOOO0000Oood:..........'.cxOK0ol0KKKKKKXNWWMMMMWWWWWWNNNXXXXKKK000OOOOOOkkkko'........"<<endl;
        gotoxy(X1,Y1++); cout<<"........';:looddxxxxkkkkkd:,.'cxOOOOOOOOOkd,..........'''lO0K0KKK00xlkKKXXNNNNNXXKKK00OOOOOkkkkkkkkkxxkkkkkko,........"<<endl;
        gotoxy(X1,Y1++); cout<<".............',;:clooddxxxkkxxkkkkkkkkkkxc...........''''oO0000Oxk0: ,kKKKKKK00OOOkkkkkkkkxxxkkxxxxdddxkkkkko'........"<<endl;
        gotoxy(X1,Y1++); cout<<".....................',;:cloddddddddddoc,............''',o0OkO0o.,kl..d00K00OOkkkkkxxxxxxkkxxxxxd:....cxkkkkl........."<<endl;
        gotoxy(X1,Y1++); cout<<"............................'',,;;;;,'...............''.,d0k;,xo..oO:;x0000OOkkkkxl,...cxkkxkkxx;     :xxkkx:........."<<endl;
        gotoxy(X1,Y1++); cout<<"......................................................'.'oOx' :k:.o0OO000OOkkkkkk:.    ,xkkkkkkxc...,cxkkkkd,........."<<endl;
        gotoxy(X1,Y1++); cout<<".............................................'.......'...:dx:.;OOxO000000OOkkkkkxc....;dkkkkkkkkkxxxkkkkkkko.........."<<endl;
        gotoxy(X1,Y1++); cout<<"...........................................'''...........';lxodOOOO00000OOkkkkkkkkxodxkkkkkkkkkkkkkkkkkkkxx:.........."<<endl;
        gotoxy(X1,Y1++); cout<<"...........................................'''.............'lkkOOkcck000OOkkkkkkkkkkkkkkkkkkkkkkkkkkkxkxxxd,.........."<<endl;
        gotoxy(X1,Y1++); cout<<".................''''................''....''................cxkOd. cO0OOOkkkkkkkkkkkxkkkkkkkxxxolccdxxxxxl..........."<<endl;
        gotoxy(X1,Y1++); cout<<"................''''''.........'''''''''''''..................;dkx; ;k0OOkkkkkkkxxdlodxxxxxxxxo,.   ,dxxdd;..........."<<endl;
        gotoxy(X1,Y1++); cout<<"..................'''''........'''''''''''''...................'lxdcoOOOOkkkxxxxc..  'oxxxxxxx;    .:dddoc............"<<endl;
        gotoxy(X1,Y1++); cout<<".................'''''''.''''''''''''''''''......................:dkkkkkkkxxxxxl.    'oxddddddl;',;looooc'............"<<endl;
        gotoxy(X1,Y1++); cout<<".................''''...''''.'''''''''''''........................,oxxxxxxdddddo;..':lddddddooooooollc:,.............."<<endl;
        gotoxy(X1,Y1++); cout<<"..............................'''''''''''...........................:looooooooooooooooolllllllcc::;,.................."<<endl;
        gotoxy(X1,Y1++); cout<<"..............................''''''''''..............................,:ccclllllllcc::;,,''..........................."<<endl;
        gotoxy(X1,Y1++); cout<<"..............................'''''''''............................... ..............................................."<<endl;
        gotoxy(X1,Y1++); cout<<"..............................'''''''...................''............................................................"<<endl;
        gotoxy(X1,Y1++); cout<<"..............................'''''..................................................................................."<<endl;
        gotoxy(X1,Y1++); cout<<"................................''...................................................................................."<<endl;
        gotoxy(149,Y1);
        rlutil::anykey();
    }
    //FUNCION PARA EL CUADRO GRANDE//
    void cuadrogrande(int RECUADRO1,int RECUADRO2){
        recuadro(1,1,117,52,RECUADRO1,RECUADRO2);
    }
    //FUNCION CUADRO DEL MENU//
    void cuadromenu(int RECUADRO1,int RECUADRO2){
        recuadro(35,20,48,14,RECUADRO1,RECUADRO2);
    }
    //FUCION PARA EL CUADRO DE LA OPCION 0
    void cuadrocerrar(int RECUADRO1,INT RECUADRO2){
        recuadro(36,22,40,10,RECUADRO1,RECUADRO2);
    }

#endif // FUNCIONESCUADROS_H_INCLUDED
