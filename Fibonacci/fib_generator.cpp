#include <iostream>
#include <generator>
using namespace std;
using i64 = long long;
generator<i64> fib(int n){
    i64 last = 0;
    i64 next = 1;
    for(int i = 0; i < n; i++){
        i64 temp = last;
        co_yield last;
        last = next;
        next += temp;
    }
}
void print_fib(int n){
    for(auto f : fib(n + 1)){
        cout << f << " ";
    }
    cout << '\n';
}
int main(int argc, char * argv[]){
    if(argc <= 1 ) return -1;
    print_fib(stoi(argv[1]));
    return 0;
}
