#include <stdio.h>
#include <stdlib.h>
 
//Declaracion de Datos 
int main(){
     
    int Monto;
    float Resultado = 0;
    int Conversion,Salir;
    float PesoDolarA = 0.050;
	float PesoDolarC = 0.063;
	float Euro = 0.042;
	float Libra = 0.036;

while(1){
	
printf ("Ingresa el Monto independiente a la Divisa a convertir \n ");
scanf("%d", &Monto);
printf(" Tipo de conversion ");

printf("------------------------ $ \n"

"1.- Convertir Pesos Mxn a Dolares Americanos \n" 
"2.- Convertir Pesos Mxn a Dolares Canadienses \n" 
"3.- Convertir Pesos Mxn a Euros \n" 
"4.- Convertir Pesos Mxn a Libras Esterlinas \n"
"5.- Convertir Dolares Americanos a Pesos Mexicanos\n"
"6.- Convertir Dolares Canadienses a Pesos Mexicanos\n"
"7.- Convertir Euros a Pesos Mexicanos\n"
"8.- Convertir Libras Esterlinas a Pesos Mexicanos\n");

scanf("%d", &Conversion);



switch (Conversion){

case 1:
printf("El Resultado de %d * %f = %0.2f Dolares Americanos \n", Monto, PesoDolarA, Monto*PesoDolarA);
//1 Peso = 0.050 Dolares Americanos
    break;
case 2 : 
printf("El Resultado de %d * %f = %0.2f Dolares Canadienses \n",Monto,PesoDolarC,Monto*PesoDolarC);
//1 Peso = 0.063 Dolares Canadienses
    break;
case 3:
printf("El Resultado de %d * %f = %0.2f Euros \n",Monto,Euro,Monto*Euro);
//1 Peso = 0.042 Euros
    break;
case 4:
printf("El Resultado de %d * %f = %0.2f Libras \n",Monto,Libra,Monto*Libra);
//1 Peso = 0.036 Libras 
    break;
 
 case 5:
printf("El Resultado de %d / %f = %0.2f Pesos MXN \n",Monto,PesoDolarA,Monto/PesoDolarA);
//1 Peso = 0.050 Dolares Americanos
    break;
    
case 6:
printf("El Resultado de %d / %f = %0.2f Pesos MXN \n",Monto,PesoDolarC,Monto*PesoDolarC);
//1 Peso = 0.063 Dolares Canadienses
    break;
    
case 7:
printf("El Resultado de %d / %f = %0.2f Pesos MXN \n",Monto,Euro,Monto/Euro);
//1 Peso = 0.042 Euros 
    break;
    
case 8:
printf("El Resultado de %d / %f = %0.2f Pesos MXN \n",Monto,Libra,Monto/Libra);
//1 Peso = 0.036 Libras 
    break;
    
default:
    break;
    
}
printf("Salir\n"
"1.- si \n"
"2.- no \n");
scanf("%d", &Salir);
if ( Salir == 1 ){
exit (0);
}

}
} 