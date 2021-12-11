// biggest & smallest values with position using NAIVE method

#include <iostream>
using namespace std;
int main()
{
    int num[50], n, max, min, max_loc, min_loc, i;
    cout << "How many numbers:";
    cin >> n;
    for(i=1;i<=n; i++){
        cout << "num["<<i<<"]=";
        cin >> num[i];
    }
    max=num[1];
    min=num[1];
    for(i=2;i<=n;i++){
        if(num[i]>max){
            max = num[i];
            max_loc=i;
        }
        if(num[i]<min){
            min=num[i];
            min_loc=i;
        }
    }
    cout << "The biggest value is:" <<max<<endl;
    cout << "And the position is:" <<max_loc <<endl;
    cout << "The smallest value is:" << min << endl;
    cout << "And the position is:" <<min_loc <<endl;
    return 0;
}
