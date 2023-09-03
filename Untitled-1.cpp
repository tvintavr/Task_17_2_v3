#include <iostream>
/*
void swapab(int* &aa, int* &ba) {
    int* temp = aa;
    aa = ba;
    ba = temp;
}
*/

int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *aa=a;
    std::cout<<*aa<<std::endl;
    int *ab=a+1;
    std::cout<<*ab<<std::endl;
    system("pause");
}