#include <iostream>

using namespace std;

int summa(int* m, int &len);
void add_cubs(int* m, int &len);

int main(){
    int len = 10;
    int nums[10];
    add_cubs(nums, len);
    for (int i=0; i < len; i++){
        cout << nums[i] << endl;
    }
    int sum = summa(nums, len);
    cout << "Summa = " << sum << endl;
    return 0;
}

int summa(int* m, int &len){
    int summa = 0;
    for (int i = 0; i < len; i++){
        summa +=  *(m + i);
    }
    return summa;
}

void add_cubs(int* m, int &len){
    for (int i = 0; i < len; i++){
        *(m + i) = i*i*i;
    }
}
