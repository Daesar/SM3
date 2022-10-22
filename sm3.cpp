//
// Created by Daesar Lau on 2022/10/22.
//

#include "iostream"
#include "string"

using namespace std;

uint32_t IV[8]={
        0x7380166f,
        0x4914b2b9,
        0x172442d7,
        0xda8a0600,
        0xa96f30bc,
        0x163138aa,
        0xe38dee4d,
        0xb0fb0e4e
};
uint32_t T(int j){
    if (j>=0&&j<=15){
        return 0x79cc4519;
    }else if(j>=16&&j<=63){
        return 0x7a879d8a;
    }
    return 0;
}

//bool function
uint32_t FF(int j,uint32_t X,uint32_t Y,uint32_t Z){
    if(j>=0&&j<=15){
        return X^Y^Z;
    } else if (j>=16&&j<=63){
        return (X&Y)|(X&Z)|(Y&Z);
    }
    return 0;
}
uint32_t GG(int j,uint32_t X,uint32_t Y,uint32_t Z){
    if(j>=0&&j<=15){
        return X^Y^Z;
    }else if (j>=16&&j<=63){
        return (X&Y)|((!X)&Z);
    }
    return 0;
}

//置换函数
uint32_t P0(uint32_t X){
    return X^((X<<9)|(X>>23))^((X<<17)|(X>>15));
}
uint32_t P1(uint32_t X){
    return X^((X<<15)|(X>>17))^((X<<23)|(X>>9));
}

//Minimum posInteger
int minPosInteger(int l){
    int k=0;
    while((8*l+k+1)%512!=448){
        k++;
    }
    return k;
}
string fill(string m){
    int l=m.length();
    string mFill=m;

}



