#include <iostream>
#include <cmath>

using namespace std;
unsigned long int fact(int num){
    unsigned long int fact = 1;
    for (int i = num; i > 0; i--)
        fact *= i;
    return fact;
}

long double power(int num, float power){
    long double result = num;
    if (num <= 0)
        return 1;
    for (int i = 1; i < power; i++)
        result *= num;
    return result;
}

long double powerFact(int m, int r){
    long double fact = 0;
    for (int i = m; i > 0; i--)
        fact += (long double)1 / power(i, r);
    return fact;
}

void a(){
    long int m;
    double res;
    cout << "Please enter m: ", cin >> m;
    for (int i = 1; i <= m; i++)
        res += (double)1 / fact(i);
    cout << res << endl;
}

void b(){
    long int m;
    long int r;
    cout << "Please enter m: ", cin >> m;
    cout << "Please enter r: ", cin >> r;
    cout << powerFact(m, r) << endl;
}

void c(){
    int m;
    cout << "Please enter m: ", cin >> m;
    long double res;
    for (int i = 1; i <= m; i++)
    {
        if (i == 1)
        {
            res += 1;
            continue;
        }
        res += (long double)1 / power(i, m - i);
    }
    cout << (long double)res << endl;
}

void d(){

    int x, temp = 1;
    cout << "Please enter x: ", cin >> x;
    long double res = x;

    for (int i = 3; i <= x; i += 2){
        temp++;
        if (temp % 2 == 0)
            res -= power(x, i) / fact(i);
        else
            res += power(x, i) / fact(i);
    }

    cout << "Sine: " << (long double)sin(res) << endl;
}

void e(){
    long int x, temp = 1;
    cout << "Please enter x: ", cin >> x;
    long double res = 1;

    for (int i = 2; i <= x; i += 2){
        temp++;
        if (temp % 2 == 0)
            res -= power(x, i) / fact(i);
        else
            res += power(x, i) / fact(i);
    }

    cout << "Cosine: " << (long double)cos(res) << endl;
}

void f(){
    int e, x;
    int res = 1;
    cout << "Please enter e: ", cin >> e;
    cout << "Please enter x: ", cin >> x;

    for (int i = 2; i <= x; i++){
        res += power(x, i) / fact(i);
    }
    cout << power(e, res) << endl;
}


int main(){

    string plan;

    cout << "Please choose a plan from A till F: ";
    cin >> plan;

    if(plan == "a" || plan == "A"){
        a();
        main();
    }else if(plan == "b" || plan == "B"){
        b();
        main();
    }else if(plan == "c" || plan == "C"){
        c();
        main();
    }else if(plan == "d" || plan == "D"){
        d();
        main();
    }else if(plan == "e" || plan == "E"){
        e();
        main();
    }else if(plan == "f" || plan == "F"){
        f();
        main();
    }

}

//Thank you Pfr.Asghari for the valuable lessons that you have taught & will teach us.