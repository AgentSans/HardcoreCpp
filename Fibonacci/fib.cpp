#include <iostream>
#include <map>
using namespace std;
using i64 = long long;
map<int, i64> memory = {{0, 0}, {1, 1}};
i64 fib(int n){
	if(n <= 1) return n;
	if(memory.find(n) != memory.end()) return memory[n];
	memory[n] = fib(n - 1) + fib(n - 2);
	return memory[n];
}
void print_fib(int n){
	fib(n);
	for(int i = 0; i < memory.size(); i++){
		cout << memory[i] << " ";
	}
	cout << "\n";
}
int main(int argc, char * argv[]){
	if(argc <= 1 ) return -1;
	else print_fib(stoll(argv[1]));
}

