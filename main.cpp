#include <iostream>
#include"lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char nome[1][20];
    int pos;
    for(int i=0;i<10;i++){
        cin>>lista[i];
    }
    cin>>nome[0];
    if(cercanome(nome,lista,pos)){
        cout<<pos;
    }else{
        cout<<"non presente";
    }

    return 0;
}
