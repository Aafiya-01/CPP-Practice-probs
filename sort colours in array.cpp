#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int> num = {2, 0, 1, 1, 1, 0, 2};
    int n = num.size();

    // Count the number of 0s, 1s, and 2s
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++) {
        if(num[i] == 0) {
            count0++;
        } else if(num[i] == 1) {
            count1++;
        } else if(num[i] == 2) {
            count2++;
        }
    }

    // Rewrite the array with 0s, 1s, and 2s
    int index = 0;
    for(int i = 0; i < count0; i++) {
        num[index++] = 0;
    }
    for(int i = 0; i < count1; i++) {
        num[index++] = 1;
    }
    for(int i = 0; i < count2; i++) {
        num[index++] = 2;
    }

    cout << "Printing Sorted colours: " << endl;
    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    return 0;

}
