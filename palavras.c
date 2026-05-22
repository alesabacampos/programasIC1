#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>



// Definição do array contendo as palavras mais utilizadas da língua portuguesa
const char *palavras_mais_usadas[] = {
    "o", "a", "que", "de", "e", "um", "uma", "em", "para", "com", // 1-10
    "não", "uma", "os", "as", "se", "por", "mais", "mas", "como", "ao", // 11-20
    "ele", "ela", "eles", "elas", "me", "te", "seu", "sua", "meu", "minha", // 21-30
    "tudo", "todo", "toda", "fazer", "estar", "ser", "ter", "ir", "dizer", "poder", // 31-40
    "ver", "dar", "saber", "querer", "ficar", "passar", "deixar", "chegar", "vida", "tempo", // 41-50
    "casa", "homem", "mulher", "dia", "ano", "vez", "mão", "olho", "trabalho", "grande", // 51-60
    "pequeno", "bom", "bem", "mal", "muito", "pouco", "aqui", "ali", "lá", "onde", // 61-70
    "quando", "como", "quem", "porque", "sempre", "nunca", "talvez", "sim", "não", "hoje", // 71-80
    "ontem", "amanhã", "agora", "depois", "antes", "durante", "sobre", "sob", "atrás", "frente", // 81-90
    "lado", "parte", "fim", "começo", "meio", "novo", "velho", "jovem", "belo", "ruim", // 91-100
    
    // Você pode continuar adicionando as palavras sequencialmente aqui até atingir as 1000 desejadas.
    // O compilador C calculará automaticamente o tamanho correto do array.
};

// Macro para calcular o número de elementos inseridos no array
#define TOTAL_PALAVRAS (sizeof(palavras_mais_usadas) / sizeof(palavras_mais_usadas[0]))

int main() {
    printf("Array de palavras carregado com sucesso!\n");
    printf("Total de palavras cadastradas: %ld\n\n", TOTAL_PALAVRAS);
    
    int t = time(NULL);

    for(int i = 0; i < 1000; i++)
    {    
        srand(t);
        printf("%s ", palavras_mais_usadas[rand() % TOTAL_PALAVRAS]);
        t++;
    }

    return 0;
}