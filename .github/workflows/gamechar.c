#ifndef _GAMECHAR_H
#define _GAMECHAR_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <conio.h>
#include <netdb.h> 
#include <netinet/in.h> 
#include <sys/socket.h> 
#include <sys/types.h> 
#include <arpa/inet.h>
#include <errno.h> 

void game_sleep(int time){
    usleep(time);
}

void game_clear(){
    system("clear");
}

void n_sleep(int tiempo , int opcion){
    if(opcion == 0){
        usleep(tiempo);
        system("clear");
    }
    else if(opcion == 1){
        usleep(tiempo);
    }
    if(opcion == 2){
        system("clear");
    }
    else if(opcion == 3){
        usleep(1000*1000);
        system("clear");
    }
}

void text (const char * texto){
    printf("%s",texto);
}

void view_int (int numero){
    
    printf("%i",numero);
    
}

void duplic_text (const char * text , int cantidad , int tipo){
   
    int fin = 0;
  
    if(tipo == 0){
        while(1){
            fin++;
            printf("%s",text);
            if(fin == cantidad){
                break;
            }
        }
    }
    else if(tipo == 1){
        while(1){
            fin++;
            printf("%s ",text);
            if(fin == cantidad){
                break;
            }
        }
    }
    if(tipo == 2){
        while(1){
            fin++;
            printf("%s\n",text);
            if(fin == cantidad){
                break;
            }
        }
    }
}

void center_text(const char * txt , int espacio){
    
    if(espacio == 10){
        printf("          %s",txt);
    }
    else if(espacio == 5){
        printf("     %s",txt);
    }
    if(espacio == 2){
        printf("  %s",txt);
    }
    else if(espacio == 20){
        printf("                    %s",txt);
    }
    if(espacio == 30){
        printf("                              %s",txt);
    }
    else if(espacio == 40){
        printf("                                        %s",txt);
    }
    if(espacio == 50){
        printf("                                                  %s",txt);
    }
    else if(espacio == 60){
        printf("                                                            %s",txt);
    }
    if(espacio == 70){
        printf("                                                                      %s",txt);
    }
    else if(espacio == 1){
        printf(" %s",txt);
    }
    if(espacio == 80){
        printf("                                                                                %s",txt);
    }
    else if(espacio == 90){
        printf("                                                                                          %s",txt);
    }
    if(espacio == 100){
        printf("                                                                                                    %s",txt);
    }
    
}

int read_int (int leer){
    fflush(stdin);
    scanf("%i",&leer);
    fflush(stdin);
    return leer;
}

int read_float (float leer){
    fflush(stdin);
    scanf("%f",&leer);
    fflush(stdin);
    return leer;
}

int read_char (char * leer){
    fflush(stdin);
    scanf("%s",&leer);
    fflush(stdin);
}

int read_op (int op,int leer,float Float,char C){
    
    if(op == 0){
        fflush(stdin);
        scanf("%i",&leer);
        fflush(stdin);
        return leer;
    }
    else if(op == 1){
        fflush(stdin);
        scanf("%f",&Float);
        fflush(stdin);
        return Float;
    }
    if(op == 2){
        fflush(stdin);
        gets(C);
        fflush(stdin);
    }
}

void view_float (float Float , int op){
    if(op == 0){
        printf("%f",Float);
    }
    else if(op == 1){
        printf("%g",Float);
    }
}

void asii_char (const char * asiic , int op){
    if(op == 0){
        printf("%d",asiic);
    }
    else if(op == 1){
        printf("%c = %d",asiic , asiic);
    }
}

void enter_key (){
    getch();
}

int compare_int (int si , int no){
    
    int correcto = 0;
    int incorrecto = -1;
    
    if(si == no){
        return correcto;
    }
    else if(no == si){
        return correcto;
    }
    else{
        return incorrecto;
    }
}

int random_int (int inicio , int fin){
    
    srand(time(NULL));
    srand(time(NULL));
    srand(time(NULL));
    srand(time(NULL));
    
    inicio = rand()%fin;
    
    return inicio;
    
}

void End (){
    exit(1);
}

int auxiliar (int aux){
    aux++;
    return aux;
}

int loop (int reTurn){
    
    while(1){
        return reTurn;
    }
}

void create_file (const char * archivo , int op , const char * txt){
    
    FILE * db;
    
    db = fopen(archivo,"w");
    
    if(db == NULL){
        printf("GAMECHAR: \"error la crear el archivo %s.\"",archivo);
    }
    else{
        if(op == 0){
            printf("GAMECHAR: \"Archivo: %s se ha creado con éxito.\"",archivo);
        }
        else if(op == 1){
            fprintf(db,"%s",txt);
        }
    }
    
}

int suma (int num1 , int num2){
    num1 = num1 + num2;
    return num1;
}

int resta (int num1 , int num2){
    num1 = num1 - num2;
    return num1;
}

int multiplica (int num1 , int num2){
    num1 = num1 * num2;
    return num1;
}

int divide (int num1 , int num2){
    num1 = num1 / num2;
    return num1;
}

int resuido (int num1 , int num2){
    num1 = num1 % num2;
    return num1;
}

void paint (int dibujo){
    if(dibujo == 0){
        printf("%%");
    }
    else if(dibujo == 1){
        printf("\\");
    }
    if(dibujo == 2){
        printf("|");
    }
    else if(dibujo == 3){
        printf("=");
    }
    if(dibujo == 4){
        printf("[");
    }
    else if(dibujo == 5){
        printf("]");
    }
    if(dibujo == 6){
        printf("<");
    }
    else if(dibujo == 7){
        printf(">");
    }
    if(dibujo == 8){
        printf("{");
    }
    else if(dibujo == 9){
        printf("}");
    }
    if(dibujo == 10){
        printf("@");
    }
    else if(dibujo == 11){
        printf("#");
    }
    if(dibujo == 12){
        printf("$");
    }
    else if(dibujo == 13){
        printf("_");
    }
    if(dibujo == 14){
        printf("&");
    }
    else if(dibujo == 15){
        printf("-");
    }
    if(dibujo == 16){
        printf("+");
    }
    else if(dibujo == 17){
        printf("(");
    }
    if(dibujo == 18){
        printf(")");
    }
    else if(dibujo == 19){
        printf("/");
    }
    if(dibujo == 20){
        printf("*");
    }
    else if(dibujo == 21){
        printf("\"");
    }
    if(dibujo == 22){
        printf("'");
    }
    else if(dibujo == 23){
        printf(":");
    }
    if(dibujo == 24){
        printf(";");
    }
    else if(dibujo == 25){
        printf("!");
    }
    if(dibujo == 26){
        printf("?");
    }
    else if(dibujo == 27){
        printf("ñ");
    }
    if(dibujo == 28){
        printf("~");
    }
    else if(dibujo == 29){
        printf("`");
    }
    if(dibujo == 30){
        printf("•");
    }
    else if(dibujo == 31){
        printf("°");
    }
    if(dibujo == 32){
        printf("×");
    }
    else if(dibujo == 33){
        printf("∆");
    }
    if(dibujo == 34){
        printf("^");
    }
    else if(dibujo == 35){
        printf("÷");
    }
    if(dibujo == 36){
        printf("¶");
    }
}

void star_game (const char * nombre , char * contra , int op){
    
    char not;
    int intentos = 0;
    int maximos_intentos = 500;
    char aux[100];
    
    FILE * password;
    
    password = fopen("project.dat","a");
    
    if(password == NULL){
        printf("Error al crear el archivo.\n");
        
    }
    
    printf("Nombre del projecto/juego: %s.\n",nombre);
    fprintf(password,"Nombre del projecto/juego: %s\n",nombre);
    fprintf(password,"Contraceña: %s\n",contra);
    printf("Se ha guardado con éxito\n");
    
    if(op == 0){
        if(password == NULL){
        printf("Archivo no encontrado...\n");
    }
    else{
        while(aux != EOF){
            fgets(aux,100,password);
            if(strcmp(contra,aux) == 0){
                printf("Todo esta en éxelentes condiciones\n");
            }
            else{
                intentos++;
                printf("contraceña incorrecta: %i => veces\n",intentos);
                if(intentos == maximos_intentos){
                    printf("Borrando datos....\n");
                    if(remove("main.c") == -1){
                        printf("Error al borrar los datos.\n");
                        exit(1);
                    }
                    else{
                        printf("\"main\" borrado con éxito\n");
                        printf("Borrado datos....\n");
                        if(remove("project.dat") == -1){
                            printf("Error al eliminar los datos\n");
                            exit(1);
                        }
                        else{
                            printf("\"projeto.dat\" borrado con éxito.\n");
                        }
                    }
                }
            }
        }
    }
  }
}

void new_line (){
    printf("\n");
}

void new_double_line (){
    printf("\n\n");
}

void new_triple_line (){
    printf("\n\n\n");
}

void new_tab (){
    printf("\t");
}

void return_car (){
    printf("\r");
}

void animation (const char*letra,int posicion,int tiempo,int op){
    if(op == 0){
        
    if(posicion == 0){
        printf("%s",letra);
    }
    else if(posicion == 1){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
    }
    if(posicion == 2){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
    }
    else if(posicion == 3){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
    }
    if(posicion == 4){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
    }
    else if(posicion == 5){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
    }
    if(posicion == 6){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
    }
    else if(posicion == 7){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
    }
    if(posicion == 8){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
        usleep(tiempo);
        system("clear");
        printf("        %s",letra);
    }
    else if(posicion == 9){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
        usleep(tiempo);
        system("clear");
        printf("        %s",letra);
        usleep(tiempo);
        system("clear");
        printf("         %s",letra);
    }
    if(posicion == 10){
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
        usleep(tiempo);
        system("clear");
        printf("        %s",letra);
        usleep(tiempo);
        system("clear");
        printf("         %s",letra);
        usleep(tiempo);
        system("clear");
        printf("          %s",letra);
    }
  }
  else if(op == 1){
      if(posicion == 0){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
    }
    else if(posicion == 1){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
    }
    if(posicion == 2){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
    }
    else if(posicion == 3){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
    }
    if(posicion == 4){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
    }
    else if(posicion == 5){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
    }
    if(posicion == 6){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
    }
    else if(posicion == 7){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
    }
    if(posicion == 8){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
        usleep(tiempo);
        system("clear");
        printf("        %s",letra);
    }
    else if(posicion == 9){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
        usleep(tiempo);
        system("clear");
        printf("        %s",letra);
        usleep(tiempo);
        system("clear");
        printf("         %s",letra);
    }
    if(posicion == 10){
        usleep(tiempo);
        system("clear");
        printf("%s",letra);
        usleep(tiempo);
        system("clear");
        printf(" %s",letra);
        usleep(tiempo);
        system("clear");
        printf("  %s",letra);
        usleep(tiempo);
        system("clear");
        printf("   %s",letra);
        usleep(tiempo);
        system("clear");
        printf("    %s",letra);
        usleep(tiempo);
        system("clear");
        printf("     %s",letra);
        usleep(tiempo);
        system("clear");
        printf("      %s",letra);
        usleep(tiempo);
        system("clear");
        printf("       %s",letra);
        usleep(tiempo);
        system("clear");
        printf("        %s",letra);
        usleep(tiempo);
        system("clear");
        printf("         %s",letra);
        usleep(tiempo);
        system("clear");
        printf("          %s",letra);
    }
  }
}

void paint_animation (int dibujo , int tiempo , int posicion , int opcion){
    
}



#endif
