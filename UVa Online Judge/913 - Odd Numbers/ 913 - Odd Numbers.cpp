//http://ideone.com/i4lzHa - Algoritmos Aula 1 - 24/11/12
#include <iostream>
using namespace std;
int main(){
    unsigned long long int n, sumOfLastThreeNumbers, lastNumber, line;
    
    while (cin >> n) {
        sumOfLastThreeNumbers = lastNumber = line = 0;
        
        line = (n  / 2) + 1;
        
        lastNumber = (line*line)*2 - 1;
        
        sumOfLastThreeNumbers = (lastNumber * 3) - 6;
        cout << sumOfLastThreeNumbers << endl;
    }
}
