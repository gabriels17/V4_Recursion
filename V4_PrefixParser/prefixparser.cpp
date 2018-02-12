#include "prefixparser.h"

int parseExpression(istream& ins){
    if(ins.eof()){
        return 0;
    }
    string str;
    //char* str = new char[10];
    //str[0] = '\0';
    cout << str << endl;
    ins >> str;
    cout << str;
    if(str == "+"){
        cout << "went into if body" << endl;
        parseExpression(ins);
    }

    else{
        cout << "went into else body" << endl;
        //char* calc_operator = str;
        int number = atoi(str);
        cout << number << endl;
        parseExpression(ins);
    }
    //int number = atoi(str);
    return 0;//atoi(str); ///delete str, return tmp_int (tmp_int = str)
}
