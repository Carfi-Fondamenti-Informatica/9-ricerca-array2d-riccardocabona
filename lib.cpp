#include"lib.h"
#include <cstring>
bool cercanome(char nome[1][20],char lista[10][20],int &pos) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(nome[0],lista[i])==0) {
            pos=i;
            return true;
        }
    }
    return false;
}
