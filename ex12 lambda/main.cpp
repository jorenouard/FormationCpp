#include <bits/stdc++.h>

using namespace std;


void printVector(vector<int> v)
{
    for_each(v.begin(), v.end(), [](int i) {
        cout << i << " ";
    });
    cout << endl;
}

void printReverse(vector<int> v)
{
    for_each(v.rbegin(), v.rend(), [](int i) {
        cout << i << " ";
    });
    cout << endl;
}

void bigToSmall(vector<int> v)
{
    sort(v.begin(), v.end(), [](int a, int b) {return a > b;});
    printVector(v);
}


int main(){
    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};

    cout << "number of values in v above 5 is " << count(v.begin(), v.end(), [](int i) {return i > 5;}) << endl;
    printVector(v);
    printReverse(v);
    bigToSmall(v);

    vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i) {
        return i > 4;
    });



    auto square = [](int i)
    {
        return i * i;
    };

    cout << "puissance de 5 : " << square(5) << endl;
}