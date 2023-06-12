#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print(){
    cout << "raj";
}

int sum(int a, int b){
    return a + b;
}

void explainPair(){

    pair<int,int> p = {1,3};
    cout << p.first  << " " << p.second << endl;
    pair <int , pair<int,int>> m = {1,{3,4}};
    cout << m.first << " " << m.second.first << " " << m.second.first << endl;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout << arr[1].second << endl;

}

void explainVector(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    v.push_back({1,2});
    v.push_back(1,2);

    vector<int> v{5,100}; // {100,100,100,100,100}

    vector<int> v1 {5,20};
    vector<int> v2 (v1); //copy of v1, not v1, but copy of v1
    

}
int main(){
    int s =sum(1,5);
    cout << s;
    explainPair();
    return 0;
}