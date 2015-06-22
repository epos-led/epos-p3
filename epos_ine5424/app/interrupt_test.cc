#include <stub/thread.h>
#include <stub/ostream.h>
#include <stub/alarm.h>

__USING_APPLICATION

//int fun_a(int a){
//    OStream cout;
//    long long i =0;
//    Delay::Delay(500000);
//    cout << "Oi\n";
//    Delay::Delay(500000);
//    cout << "Oie\n";
//    Delay::Delay(500000);
//    cout << "Oiee\n";
//    Delay::Delay(500000);
//    cout << "Oieee\n";
//    return 3 + a;
//}

int fun_b(){
    OStream cout;
    int esp0 = 0;
    ASM("mov %%cs, %0" : "=r"(esp0));
    cout << "fb modo=" << esp0 <<"\n";
    cout << "Oi de novo\n";
    return 2;
}


int main()
{
//    OStream cout;

//    Thread * t = new Thread(&fun_a, 4);

//    int esp0 = 0;
//    ASM("mov %%cs, %0" : "=r"(esp0));
//    cout << "main modo=" << esp0 <<"\n";

    new Thread(&fun_b);

//    cout << "Saindo...\n";

//    Delay(10000000);

//    delete t;
//    delete t2;

    return 0;
}
