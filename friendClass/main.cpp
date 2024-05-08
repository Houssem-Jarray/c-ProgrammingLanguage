//
// Created by houssem on 06/05/24.
//

#include <bits/stdc++.h>
using namespace std;
class GFG{
private:
    int private_int;
protected:
    int protected_int;
public:
    GFG(){
        this->private_int = 10;
        this->protected_int = 20;
    }
    friend class F;
};

class F{
public:
    void desplay(GFG& t){
        cout << "The value of private value is " << t.private_int << endl;
        cout << "The value of protected value is " << t.protected_int << endl;
    }
};

int main() {
    cout << "•••••••••••••••••••••••••••••••" << endl;
    F f;
    GFG gfg;
    f.desplay(gfg);
    cout << "•••••••••••••••••••••••••••••••" << endl;
    return 0;
}