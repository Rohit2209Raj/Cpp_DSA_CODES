#include <iostream>
#include <random>
using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    int money = 10000;
    int sum=0;
    for(int i=0;i<10000;i++){
        uniform_int_distribution<> dist(1,10000); // range [10, 50]

        int x = dist(gen); // one random number

        int y = dist(gen);

        if(x==y) {
            sum+=1000000;
        }
    }

    cout<<"Aqquired sum: "<<sum<<endl;
}