#include <iostream>
using namespace std;

int getSum(int n);

int main(){
    int N, A;
    int sum;
    do {
        cout << "Enter the number of integers \n";
        cin >> N;
        if (N != -1){
            sum = getSum(N);
            cout << "Sum is " << sum << endl;
            break;
        }
    } while (N != -1);

}

int getSum(int n){
    int a[n], max, min, sum;
    
    sum = 0;
    for (int i=0; i < n; i++){
        cout << "Enter your integers: " << endl;
        cin >> a[i];
        sum = a[i] + sum;
    }

    max = a[0];
    min = a[0];
    for (int i = 1; i<n; i++){
        if (a[i] < min){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
        }

    }
    sum =  sum - min - max;
    return sum;
}