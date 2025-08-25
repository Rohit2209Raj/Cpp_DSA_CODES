#include<iostream>
using namespace std;
// void toh(int n,char source,char via,char dest){
//     if(n==0) return;
//     toh(n-1,source,dest,via);
//     cout<<source<<"->"<<dest<<endl;
//     toh(n-1,via,source,dest);
// }
// int main(){
//     int n=3;
//     toh(n,'A','B','C');
// }

// // Q2
// int toh(int n,char source,char via,char dest){
//     if(n==0) return 0;
//     return toh(n-1,source,dest,via)+1+toh(n-1,via,source,dest);
// }
// int main(){
//     int n=3;
//     cout<<toh(n,'A','B','C');
// }

// Q3
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Function to print the current state of rods
void printState(vector<stack<int>> &rods) {
    char names[3] = {'A', 'B', 'C'};
    for (int i = 0; i < 3; i++) {
        cout << names[i] << ": ";
        vector<int> temp;
        // Extract elements to display properly (bottom to top)
        while (!rods[i].empty()) {
            temp.push_back(rods[i].top());
            rods[i].pop();
        }
        for (int j = temp.size()-1; j >= 0; j--) {
            cout << temp[j] << " ";
            rods[i].push(temp[j]); // restore stack
        }
        cout << endl;
    }
    cout << "----------------------\n";
}

// Recursive Tower of Hanoi
void toh(int n, int from, int to, int aux, vector<stack<int>> &rods) {
    if (n == 0) return;

    // Move n-1 disks to auxiliary
    toh(n-1, from, aux, to, rods);

    // Move the nth disk
    int disk = rods[from].top();
    rods[from].pop();
    rods[to].push(disk);

    cout << "Move disk " << disk << " from " 
         << char('A'+from) << " to " << char('A'+to) << endl;

    // Print rod states after this move
    printState(rods);

    // Move the n-1 disks from aux to destination
    toh(n-1, aux, to, from, rods);
}

int main() {
    int n = 3; // Number of disks
    vector<stack<int>> rods(3);

    // Initialize rod A with n disks (largest at bottom)
    for (int i = n; i >= 1; i--)
        rods[0].push(i);

    cout << "Initial State:\n";
    printState(rods);

    toh(n, 0, 2, 1, rods);

    return 0;
}
