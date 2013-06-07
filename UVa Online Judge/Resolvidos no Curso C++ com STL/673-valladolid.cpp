#include <iostream>
#include <sstream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;

int main(){
    string linha;
    char c;
    stack<char> s;
    bool flag;
    
    getline(cin, linha) ;
    istringstream ss(linha);
    int n;
    ss >> n;
    for(int i = 0; i < n; i++){
    cout << flush;
    getline(cin, linha);
    istringstream ss(linha);
    flag = true;
    while(ss >> c){         
         switch(c){
             case 40:{                  
                  s.push(c);
                  break;
             }
             
             case 91:{
                  s.push(c);
                  break;
             }
             
             case 123:{
                  s.push(c);
                  break;
             }
             
             case 41:{
                  if(!s.empty() && s.top() == 40)
                     s.pop();
                  else                  
                     flag = false;
                  break;
             }
             
             case 93:{
                  if(!s.empty() && s.top() == 91)
                     s.pop();
                  else
                     flag = false;
                  break;
             }
             case 125:{
                  if(!s.empty() && s.top() == 123)
                     s.pop();
                  else
                     flag = false;
                  break;
             }
         }         
    }
    if(!s.empty())                   
            flag = false;
            
    flag ? cout << "Yes" << endl : cout << "No" << endl;
    while(!s.empty())
      s.pop();         
}
    
    return 0;
}
