// A B C
// B C D
// C D E

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char cha ='A'+i+j-2;
            cout<<cha;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}