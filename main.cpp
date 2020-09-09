#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    int x=0;
    unsigned int a=0;
    bool k,l,m,n=0;
    unsigned short int b=0;
    unsigned short int c,d,e,f=0;
    std::cout << "Hello!" << std::endl << "Insert x: ";
    std::cin>>x;
    std::cout << "Insert a: ";
    std::cin>>a;
    std::cout << "Insert k,l,m,n: ";
    std::cin>>k >> l >> m >> n;
    std::cout << "Insert b: ";
    std::cin>>b;
    std::cout << "Insert c,d,e,f: ";
    std::cin>>c >> d >> e >> f;
    int j = pow(2,b);
    bool y = (n||(m^!k)&&!l);
    std::cout << std::fixed << std::setprecision(3) << pow(x,2)+2*pow(x,3)-2 << std::endl; // 1 task
    std::cout << std::showpos << 5*abs(a)+ sqrt(3*a-2) << std::endl;  // 2 task
    if (y == 1) {  //3 task
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
    if (b<=7) {
        std::cout << std::dec << j << " " << std::oct << j << std::endl; // 4 task
    }
    unsigned short int z = ((~c&f)|(c&~f));
    std::hex; std::showbase; std::internal; std::setfill(0);
    std::cout << (~(e|d)&z) << std::endl;


    return 0;
}