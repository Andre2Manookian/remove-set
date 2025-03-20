#include <iostream>
#include <set>
using namespace std;



///Write a program that stores numbers {1, 3, 5, 7, 9} in a set<int>. Then, take a number as input and remove it from the set if it exists. Print the updated set.


int main() {
    set<int> numbers = {1, 3, 5, 7, 9};
    int num;

    cout << "Enter number to remove: ";
    cin >> num;

    numbers.erase(num);

    cout << "Updated set: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
