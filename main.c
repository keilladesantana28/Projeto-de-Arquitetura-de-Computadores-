
#include <stdio.h> 
int main (void) {

int a[5] = { 392, 340, 350, 360, 400};
int v[5] = { 110, 127, 115, 120, 130}; 

int c = 0; 

for (int i = 0; i < 5 ; i++){

    c += a[i] * v[i]; // potência em w
 
} 

printf("Valor total: %d\n" , c); 



return 0; 

}
