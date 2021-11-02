//=============================================//
//            AUTHOR : ABDO NASSER             //
//                                             //
//            DATE : 2021-09-27                //
//=============================================//

#include <iostream>
#include<cmath>
#include <algorithm>
#include <string>
#include <iomanip>
#include <numeric>
#include<cctype>
int arr[100];
using namespace std;

void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fast();
    int n;
    cin >> n;
    int arr[100005];
    int c = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1 && arr[i + 1] == -1) {
            c--;
        }
        else if(arr[i+1]==1&&arr[i]==-1||arr[i]==1&&arr[i+1]==1)
            c++;
    }
    
    cout << c;
}

    

