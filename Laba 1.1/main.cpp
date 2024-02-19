
#include "IntPower.h"

using namespace std;

IntPower* makeIntPower(){
    IntPower* result = new IntPower();

    if(!result->Read()) {
        cout << "Entered data is not valid!" << endl;
        delete result;
        return NULL;
    }

    return result;
}

int main() {
    auto a = makeIntPower();

    if(!a) {
        return 1;
    }

    a->Power();
    a->Display();

    delete a;
    return 0;
}
