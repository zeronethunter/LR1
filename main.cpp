#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    int x=0;
    unsigned int a=0;
    bool k,l,m,n = false;
    unsigned short int b=0;
    unsigned short int c,d,e,f=0;

    std::cout << "Hello!" << std::endl << " Insert x: ";
    std::cin>>x;
    std::cout << "Insert a: ";
    std::cin>>a;
    std::cout << "Insert k,l,m,n: ";
    std::cin>>k >> l >> m >> n;
    std::cout << "Insert b: ";
    std::cin>>b;
    std::cout << "Insert c,d,e,f: ";
    std::cin>> c >> d >> e >> f;

    int j = pow(2,b);
    bool y = (n||(m^!k)&&!l);

    std::cout << std::fixed << std::setprecision(3) << "1. " <<  pow(x,2)+2*pow(x,3)-2 << std::endl; // 1 task

    std::cout << std::setprecision(0) << std::showpos << " 2. "  << 5*a+ sqrt(3*a-2) << std::endl;  // 2 task

    if (y == 1) {  // 3 task
        std::cout << " 3. True" << std::endl;
    } else {
        std::cout << " 3. False" << std::endl;
    }

    if (b<=7) {  // 4 task
        std::cout << std::noshowpos << " 4. " << j << " ";
        std::cout << std::oct << j << std::endl;
    }

    unsigned short int task = (~(e|d))&(c^f); // 5 task
    std::cout << " 5. ";
    std::cout << std::hex << std::setw(6) << std::setfill('0') << std::showbase << std::internal << task << std::endl;


    return 0;
}