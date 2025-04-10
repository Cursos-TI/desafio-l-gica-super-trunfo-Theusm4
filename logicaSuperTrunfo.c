#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
      int opcao,atributo1,atributo2;
      float valor1_carta1,valor2_carta1,valor1_carta2,valor2_carta2,soma1,soma2;
      // Definição das variáveis para armazenar as propriedades das cidades
      // Você pode utilizar o código do primeiro desafio
      //Declarando as váriaveis que estruturam as cartas das cidades
   //carta1
   char estado[3],nome_cidade[20],cod_carta[4];
   int pts_turisticos;
   double area,pib;
   float densidade,pib_pct;
   long unsigned int superPower,populacao;

   //carta2
   char estado2[3],nome_cidade2[20],cod_carta2[4];
   int pts_turisticos2;
   double area2,pib2;
   float densidade2,pib_pct2;
   unsigned long int superPower2,populacao2;

   // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   printf("Cadastramento de cartas:\n");

   //Cadastramento da primeira carta
   printf("\nPreencha os dados da primeira carta: \n");
   printf("Digite o estado da cidade: 'S = São Paulo'\n");
   scanf("%2s", estado);

   printf("Digite o código da cidade: 'Estado + número de 01 a 04\n");
   scanf("%s", cod_carta);

   getchar();

   printf("Digite o nome da cidade:\n");
   scanf("%20[^\n]", nome_cidade);

   printf("Digite quantidade populacional da cidade:\n");
   scanf("%i", &populacao);

   printf("Digite a área total da cidade, em km²:\n");
   scanf("%lf", &area);

   printf("Digite o PIB da cidade:\n");
   scanf("%lf", &pib);

   printf("Digite a quantidade de pontos turísticos:\n");
   scanf("%i", &pts_turisticos);

   //Cadastramento da segunda carta
   printf("\nPreencha os dados da segunda carta: \n");
   printf("Digite o estado da cidade: 'S = São Paulo'\n");
   scanf("%2s", estado2);

   printf("Digite o código da cidade: 'Estado + número de 01 a 04\n");
   scanf("%s", cod_carta2);

   getchar();
   
   printf("Digite o nome da cidade:\n");
   scanf("%20[^\n]", nome_cidade2);

   printf("Digite quantidade populacional da cidade:\n");
   scanf("%i", &populacao2);

   printf("Digite a área total da cidade, em km²:\n");
   scanf("%lf", &area2);

   printf("Digite o PIB da cidade:\n");
   scanf("%lf", &pib2);

   printf("Digite a quantidade de pontos turísticos:\n");
   scanf("%i", &pts_turisticos2);

   //Realizando o cálculo da densidade populacional das cartas
   densidade = (float) populacao/area;
   densidade2 = (float) populacao2/area2;

   //Realizando o cálculo do PIB per Capita das cartas
   pib_pct = pib/populacao;
   pib_pct2 = pib2/populacao2;

   //Realizando o cálculo do Super Poder das cartas
   superPower = (populacao+area+pib+pts_turisticos+pib_pct+(1/densidade));
   superPower2 = (populacao2+area2+pib2+pts_turisticos2+pib_pct2+(1/densidade2));

   //Apresentação em tela, das cartas cadastradas e dos dados calculados.    
   //Carta 1
   printf("\nCartas cadastradas:\n");
   printf("\nDados da primeira carta:\n");
   printf("\nCodigo da Carta: %s\n", cod_carta);
   printf("Estado: %s\n", estado);
   printf("Nome da Cidade: %s\n", nome_cidade);
   printf("Populacao Total: %lu\n", populacao);
   printf("Area Total: %.2lf km²\n", area);
   printf("PIB Total: %.2lf\n", pib);
   printf("Total de Pontos Turisticos: %i\n", pts_turisticos);
   printf("Densidade Populacional: %.2f habitantes/km²\n", densidade);
   printf("PIB per Capita: %.2f\n", pib_pct);
   printf("Super Poder: %lu\n", superPower);

   //Carta 2
   printf("\nDados da segunda carta:\n");
   printf("\nCodigo da Carta: %s\n", cod_carta2);
   printf("Estado: %s\n", estado2);
   printf("Nome da Cidade: %s\n", nome_cidade2);
   printf("Populacao Total: %lu\n", populacao2);
   printf("Area Total: %.2lf km²\n", area2);
   printf("PIB Total: %.2lf\n", pib2);
   printf("Total de Pontos Turisticos: %i\n", pts_turisticos2);
   printf("Densidade Populacional: %.2f habitantes/km²\n", densidade2);
   printf("PIB per Capita: %.2f\n", pib_pct2);
   printf("Super Poder: %lu\n", superPower2);

   //menu interativo para escolha das opções de comparação de atributos.
   printf("\nMenu Principal\n");
   printf("1. Iniciar Jogo.\n");
   printf("2. Visualizar Regras.\n");
   printf("3. Sair.\n");
   scanf("%d", &opcao);

   //Apresentaçao dos dados a depender da opção selecionada pelo usuario
   //Cada case representa, de acordo com sua numeração, a opção selecionada
   switch (opcao){
   case 1:

      //exibindo o menu para escolha do primeiro atributo
      printf("\nEscolha o primeiro atributo:\n");
      printf("1. Populacao Total.\n");
      printf("2. Area Total.\n");
      printf("3. PIB Total.\n");
      printf("4. Pontos turisticos.\n");
      printf("5. Densidade populacional.\n");
      printf("6. PIB per Capita.\n");
      printf("7. Super Poder.\n");
      scanf("%d", &atributo1);

      //Exibindo menu para escolha do segundo atributo
      printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
      if(atributo1 !=1) printf("1. Populacao Total.\n");
      if(atributo1 !=2) printf("2. Area Total.\n");
      if(atributo1 !=3) printf("3. PIB Total.\n");
      if(atributo1 !=4) printf("4. Pontos Turisticos.\n");
      if(atributo1 !=5) printf("5. Densidade Populacional.\n");
      if(atributo1 !=6) printf("6. PIB per Capita.\n");
      if(atributo1 !=7) printf("7. Super Poder.\n");
      scanf("%d", &atributo2);

      if (atributo1 == atributo2){
         printf("\nVoce não deve escolher o mesmo atributo duas vezes.\n");

         return 0;
      }
     
   //alocando o primeiro atributo selecionado em uma variavel para carta 1
      valor1_carta1 = (atributo1 == 1) ? populacao :
                     (atributo1 == 2) ? area :
                     (atributo1 == 3) ? pib :
                     (atributo1 == 4) ? pts_turisticos :
                     (atributo1 == 5) ? densidade :
                     (atributo1 == 6) ? pib_pct :
                     superPower;
      //alocando o segundo atributo selecionado em uma variavel para carta 1
      valor2_carta1 = (atributo2 == 1) ? populacao :
                     (atributo2 == 2) ? area :
                     (atributo2 == 3) ? pib :
                     (atributo2 == 4) ? pts_turisticos :
                     (atributo2 == 5) ? densidade :
                     (atributo2 == 6) ? pib_pct :
                     superPower;

      //alocando o primeiro atributo selecionado em uma variavel para carta 2
      valor1_carta2 = (atributo1 == 1) ? populacao2 :
                     (atributo1 == 2) ? area2 :
                     (atributo1 == 3) ? pib2 :
                     (atributo1 == 4) ? pts_turisticos2 :
                     (atributo1 == 5) ? densidade2 :
                     (atributo1 == 6) ? pib_pct2 :
                     superPower2;
      //alocando o segundo atributo selecionado em uma variavel para carta 2
      valor2_carta2 = (atributo2 == 1) ? populacao2 :
                     (atributo2 == 2) ? area2 :
                     (atributo2 == 3) ? pib2 :
                     (atributo2 == 4) ? pts_turisticos2 :
                     (atributo2 == 5) ? densidade2 :
                     (atributo2 == 6) ? pib_pct2 :
                     superPower2;

      //definindo a soma dos atributos selecionados para cada carta
      soma1 = valor1_carta1 + valor2_carta1;
      soma2 = valor1_carta2 + valor2_carta2;

      printf("\nResultado do combate:\n");

      printf("\nCarta 1 - Cidade de %s\n", nome_cidade);
      printf("%s: %.2f\n", (atributo1 == 1) ? "Populacao Total" :
                           (atributo1 == 2) ? "Area Total" :
                           (atributo1 == 3) ? "PIB Total" :
                           (atributo1 == 4) ? "Pontos Turisticos" :
                           (atributo1 == 5) ? "Densidade Populacional" :
                           (atributo1 == 6) ? "PIB per Capita" : "Super Poder",
                           valor1_carta1);

      printf("%s: %.2f\n", (atributo2 == 1) ? "Populacao Total" :
                           (atributo2 == 2) ? "Area Total" :
                           (atributo2 == 3) ? "PIB Total" :
                           (atributo2 == 4) ? "Pontos Turisticos" :
                           (atributo2 == 5) ? "Densidade Populacional" :
                           (atributo2 == 6) ? "PIB per Capita" : "Super Poder",
                           valor2_carta1);

      printf("\nCarta 2 - Cidade de %s\n", nome_cidade2);
      printf("%s: %.2f\n", (atributo1 == 1) ? "Populacao Total" :
                           (atributo1 == 2) ? "Area Total" :
                           (atributo1 == 3) ? "PIB Total" :
                           (atributo1 == 4) ? "Pontos Turisticos" :
                           (atributo1 == 5) ? "Densidade Populacional" :
                           (atributo1 == 6) ? "PIB per Capita" : "Super Poder",
                           valor1_carta2);

      printf("%s: %.2f\n", (atributo2 == 1) ? "Populacao Total" :
                           (atributo2 == 2) ? "Area Total" :
                           (atributo2 == 3) ? "PIB Total" :
                           (atributo2 == 4) ? "Pontos Turisticos" :
                           (atributo2 == 5) ? "Densidade Populacional" :
                           (atributo2 == 6) ? "PIB per Capita" : "Super Poder",
                           valor2_carta2);
      
      //Verificando e retornando qual cidade venceu em determinado atributo selecionado
      if (atributo1 == 5){
         (valor1_carta1 < valor1_carta2) ? printf("Carta 1 - Cidade de %s venceu no primeiro atributo!\n", nome_cidade) :
         (valor1_carta1 > valor1_carta2) ? printf("Carta 2 - Cidade de %s venceu no primeiro atributo!\n", nome_cidade2) :
         printf("\nHouve empate no primeiro atributo!\n");
      }else{
         (valor1_carta1 > valor1_carta2) ? printf("Carta 1 - Cidade de %s venceu no primeiro atributo!\n", nome_cidade) :
         (valor1_carta1 < valor1_carta2) ? printf("Carta 2 - Cidade de %s venceu no primeiro atributo!\n", nome_cidade2) :
         printf("\nHouve empate no primeiro atributo!\n");
      }

      if (atributo2 == 5){
         (valor2_carta1 < valor2_carta2) ? printf("Carta 1 - Cidade de %s venceu no segundo atributo!\n", nome_cidade) :
         (valor2_carta1 > valor2_carta2) ? printf("Carta 2 - Cidade de %s venceu no segundo atributo!\n", nome_cidade2) :
         printf("Houve empate no segundo atributo!\n");
      }else{
         (valor2_carta1 > valor2_carta2) ? printf("Carta 1 - Cidade de %s venceu no segundo atributo!\n", nome_cidade) :
         (valor2_carta1 < valor2_carta2) ? printf("Carta 2 - Cidade de %s venceu no segundo atributo!\n", nome_cidade2) :
         printf("Houve empate no segundo atributo!\n");
      }

      //Verificando a soma dos atributos e exibindo o vencedor
      printf("\nResultado da soma dos atributos:\n");
      (soma1 > soma2) ? printf("\nCarta 1 - Cidade de %s, venceu com um total de %.5f\n", nome_cidade,soma1) : 
      (soma1 < soma2) ? printf("Carta 2 - Cidade de %s, venceu com um total de %.5f\n", nome_cidade2,soma2) :
      printf("Houve empate na soma dos atributos!\n");

      break;

   case 2:
      printf("\nRegras do Jogo!\n");
      printf("1. Usuário precisa cadastrar as duas cartas corretamente.\n");
      printf("2. O usuário deve escolher entre dois atributos para a comparação, sem permissão de repetir o atributo.\n");
      printf("3. O maior valor do atributo escolhido vence, salvo 'Densidade Populacional' que vence o menor valor.\n");
      printf("4. Após decisão do vitorioso por atributo, é realizado a soma dos dois atributos de cada carta \n");
      printf("e o maior valor vence.\n");

      break;

   case 3:
      printf("\nSaindo do jogo...\n");

      break;

   return 0;

   }

}
