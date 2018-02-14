#include "prefixparser.h"

int parseExpression(istream& ins){
    if(ins.eof()){
        return 0;
    }
    string str;
    ins >> str;
    if(str == "+"){
        return parseExpression(ins) + parseExpression(ins);
    }
    else if(str == "-"){
        return parseExpression(ins) - parseExpression(ins);
    }
    else if(str == "*"){
        return parseExpression(ins) * parseExpression(ins);
    }
    else if(str == "/"){

        return parseExpression(ins) / parseExpression(ins);
    }

    else{
        int number = atoi(str.c_str());
        return number;
    }
    return 0;
}
