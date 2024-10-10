#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *texto = fopen("texto_generado.txt","r");
    FILE *registro = fopen("registro.txt","w");
    FILE *resultados = fopen("resultados.txt","w");
    char c = fgetc(texto);
    c = tolower(c);
    int fila = 0;
    int columna = 0;
    int escuela = 0;
    int estudiantes = 0;
    int rencor = 0;
    int rifles = 0;
    int crimen = 0;
    int matanza = 0;

    int caso = 0;
    fprintf(registro,"Edo actual: %d\tCar recibido: %c\n",caso,c);
    while (c!=EOF) {
        if (c != '\n'){
            columna++;
        }
        else if (c == '\n'){
            columna = 0;
            fila++;
        }
        switch (caso)
        {
        case 0:
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
        
            break;
        case 1:
            if (c == 'e'){
                caso = 1;
            }
            else if(c == 's'){
                caso = 2;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
        
            break;
        case 2:
             if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 3;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 't'){
                caso = 7;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 3:
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'u'){
                caso = 4;
            }
            else if (c == 'r')
            {
                caso = 22;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 4: 
            if (c == 'e'){
                caso = 5;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 5: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 's'){
                caso = 2;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'l'){
                caso = 6;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 6: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else if (c == 'a'){
                fprintf(resultados," Palabra 'escuela' en: Fila: %d, columna: %d\n",fila,columna);
                escuela++;
                caso = 0;
            }
            else{
                caso = 0;
            }
            break;
        case 7: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'u'){
                caso = 8;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 8: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'd'){
                caso = 9;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 9: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'i'){
                caso = 10;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 10: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'a'){
                caso = 11;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 11: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'n'){
                caso = 12;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 12: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 't'){
                caso = 13;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 13: 
            if (c == 'e'){
                caso = 32;
            }
            else if (c == 'c')
            {
                caso = 21;
            }

            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 32: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 's'){
                fprintf(resultados,"Palabra 'estudiantes' en: Fila: %d, columna: %d\n",fila,columna);
                estudiantes++;
                caso = 2;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        default:
            break;
        case 14: 
            if (c == 'e'){
                caso = 15;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'i'){
                caso = 19;
            }

            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 15: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 's'){
                caso = 2;
            }
            else if (c == 'n'){
                caso = 16;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 16: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 17;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 17: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 22;
            }
            else if (c == 'o'){
                caso = 18;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 18: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {   
                fprintf(resultados,"Palabra 'rencor' en: Fila: %d, columna: %d\n",fila,columna);
                rencor++;
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 19: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'f'){
                caso = 20;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 20: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'l'){
                caso = 33;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 33: 
            if (c == 'e'){
                caso = 34;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 34: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 's'){
                fprintf(resultados,"Palabra 'rifles' en: Fila: %d, columna: %d\n",fila,columna);
                rifles++;
                caso = 2;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 21: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 22;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 22: 
            if (c == 'e'){
                caso = 15;
            }
            else if (c == 'i'){
                caso = 23;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 23: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'f'){
                caso = 20;
            }
            else if (c == 'm')
            {
                caso = 24;
            }
            else{
                caso = 0;
            }
            break;
        case 24: 
            if (c == 'e'){
                caso = 25;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else if (c == 'a'){
                caso = 27;
            }
            else{
                caso = 0;
            }
            break;
        case 25: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 's'){
                caso = 2;
            }
            else if (c == 'n'){
                fprintf(resultados,"Palabra 'crimen' en: Fila: %d, columna: %d\n",fila,columna);
                crimen++;
                caso = 0;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 26: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'a'){
                caso = 27;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 27: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 't'){
                caso = 28;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 28: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else if (c == 'a'){
                caso = 29;
            }
            else{
                caso = 0;
            }
            break;
        case 29: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'n'){
                caso = 30;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 30: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'z'){
                caso = 31;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;
        case 31: 
            if (c == 'e'){
                caso = 1;
            }
            else if (c == 'a'){
                fprintf(resultados,"Palabra 'matanza' en: Fila: %d, columna: %d\n",fila,columna);
                matanza++;
                caso = 0;
            }
            else if (c == 'c')
            {
                caso = 21;
            }
            else if (c == 'r')
            {
                caso = 14;
            }
            else if (c == 'm')
            {
                caso = 26;
            }
            else{
                caso = 0;
            }
            break;

    }
    c = fgetc(texto);
    c = tolower(c);
    fprintf(registro,"Edo actual: %d\tCar recibido: %c\n",caso,c);
}
fprintf(resultados,"escuela: %d\n", escuela);
fprintf(resultados,"estudiantes: %d\n", estudiantes);
fprintf(resultados,"rencor: %d\n", rencor);
fprintf(resultados,"rifles: %d\n", rifles);
fprintf(resultados,"crimen: %d\n", crimen);
fprintf(resultados,"matanza: %d\n", matanza);
fclose(texto);
fclose(registro);
fclose(resultados);

return 0;
}