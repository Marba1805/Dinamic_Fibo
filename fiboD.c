#include <stdio>;

int fibbonacci(int n) {
// cria-se um vetor para salvar todos os resultados
  int f[n+2];   //cria-se um a mais devido ao 0
  int i; 
  
  // ja deixa salvo o 0 e o 1(primeiro)
  f[0] = 0; 
  f[1] = 1; 
  
    for (i = 2; i <= n; i++) 
  { 
      /* Adiciona os numeros anteriore e ja os salva*/
      f[i] = f[i-1] + f[i-2]; 
  } 
  
  return f[n]; 
}
