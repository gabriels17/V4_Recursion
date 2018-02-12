#include <fstream>
#include "prefixparser.h"

int main(int argc, const char * argv[]) {

    ifstream fin;
    fin.open("new_test.txt");

    string inp;
    while (fin >> inp) {
        if (inp == "new") {
            cout << "New test" << endl;
        }else if (inp == "parse") {
            cout << "Calling parseExpression()" << endl;
            try {
                int result = parseExpression(fin);
                cout << "Parsed expression: " << result << endl;
            }
            catch(DivideByZeroException) {
                cout << "Caught DivideByZeroException" << endl;
            }
        }else {
            cout << "INVALID INPUT: " << inp << endl;
        }
    }

    fin.close();

    return 0;
}
