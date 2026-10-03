// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     string s="krishna";
    
// //     int len=s.size();
// //     s[len-1]='s';
// //     // cout << s[len-1];
// //     cout<<s;




// //     return 0;
// // }


// // #include<bits/stdc++.h>
// // using namespace std ;
// // int main(){
// //     for (int i = 1 ;i<11;i+=1){
// //         cout<<"meow"<<endl;
// //     }
// //     return 0;
// // }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for (int i =10 ; i>=1;i=i-1){
//          cout<<"meow"<<endl;


//     }
   


//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//     int a=20 ;
//     cout<<a<<endl;
   



//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i;
//     for (i=10;i>5;i=i-1){
//         cout<<"yo"<<endl;
//     }

//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;
// int main(){

//    int i=10;
//    while(i>5){
//     cout<<"les go"<<endl;

//     i=i-1;
//    }


//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int i=10;
//     do{
//         cout<<"yo"<<endl;
//         i=i-1;
//     }while (i<5);
//     cout<<'i'<<endl;

    
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void printname(string name){
//     cout<<"hello "<<name<<endl;

// }
// int main(){
//     string name;
//     cout<<"enter your name"; 
//     cin>>name;
//     printname(name);

//     string name2;
//     cout<<"enter name 2"<<endl;
//     cin>>name2;
//     printname(name2);
    
//     // cout<<"end"<<endl;

//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// int sum(int n1 , int n2 ){
//     int n3 = n1+n2;
//     return n3;
// }

// int main(){
//     int num1,num2;
//     cin>>num1>>num2 ;
//     int res =sum(num1,num2);
//     cout<< res;



//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// void yolo(int num111){

    
//     num111+=5;
//     cout<<num111<<endl;
//     num111+=5;
//     cout<<num111<<endl;
//     // return num;
//  }
// int main(){

//     int num;
//     cout<<"enter yoour number"<<endl;
//     cin>>num;
//     yolo(num);

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// // void abc(int &num){
    
// // }

  
// int main(){
//     int i;
//     int arr[5];
//     for (i=0;i<5;i+=1){

//         cin>>arr[i];
//         cout<<arr[i]<<endl;

//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for (int i=0;i<4;i++){

//         for (int j=0;j<4;j++){

//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
    
    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// void abc(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }
// int main(){

//     cout<<"enter no of times u wanna run loop"<<endl;
//     int t;
//     cin>>t;
//     for ( int i=0 ;i<t;i++){
//         int n ;
//         cin>>n;

//         abc(n);


//     }
    
   
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// void abc(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n;i<=j;j--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
// }
// int main(){

//     cout<<"enter no of times u wanna run loop"<<endl;
//     int t;
//     cin>>t;
//     for ( int i=0 ;i<t;i++){
//         int n ;
//         cin>>n;

//         abc(n);
//     }

//     }
    


// #include<bits/stdc++.h>
// using namespace std;
// void abc(int n){

//     for(int i=0 ;i<n;i++){
//         for (int j=2*n-i;n<=j;j--){             
//             cout<<"*";

//         }
//         for (int k=0; k<=i ; k++){
//             cout<<" ";
//         }
//         {
            
//         }
        
//     cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     abc(n);


//     return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;


// void abd(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n;i<=j;j--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
// }

// void abc(int n) {
//     for (int i = 0; i < n; i++) {
        
//         // 1. Print spaces
//         // Spaces increase as we go down (0, 1, 2, 3...)
//         for (int j = 0; j < i; j++) {
//             cout << " ";
//         }
        
//         // 2. Print stars
//         // Stars decrease as we go down (9, 7, 5, 3, 1...)
//         for (int j = 0; j < 2 * (n - i) - 1; j++) {
//             cout << "*";
//         }
        
//         // 3. Move to the next line
//         cout << endl;
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     abd(n);
//     abc(n);

//     return 0;
// }

//PAIRS


// #include<bits/stdc++.h>
// using namespace std;
// void abc(){

//     pair <int,int> p ={1,3};
//     cout<<p.first<<" "<< p.second;
// }
// int main(){
//     abc();

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// void abc(){

//     pair <int,pair <int,int>> p ={1,{2,3}};
//     cout<<p.first<<" "<< p.second.second<< " "<<p.second.first;
// }
// int main(){
//     abc();

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void abc(){
//     pair <int ,int> arr[]= {{1,3},{455,43},{123,432}};
//     cout<<arr[2].second;
// }
// int main(){
//     abc();

//     return 0;
// }





// VECTORS

// #include<bits/stdc++.h>
// using namespace std;
// void vectur(){
//     vector <pair <int,int> >abs(3,{11,111}) ;
//     abs.emplace_back(111,111);
//     for(auto p :abs){
//         cout << p.first << " " << p.second << endl;
        
//     }
   
// }
// int main(){
    
//     vectur();

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector<pair<int, int>> vec = {{1, 100}, {2, 200}};

//     for (auto p : vec) {
//         cout << p.first << " " << p.second << "\n";
//     }

//     return 0;
// }


//SINGLE PAIR VECTOR

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector <int>meow= {11,100};
//     for (auto p:meow){
//         cout<<p<<" " <<"\n";
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     vector <pair <int,int>>meow= {{11,100},{12,423}};
//     for (auto p:meow){
//         cout<<p.first<<" "<<p.second<<" " <<"\n";
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {10, 20, 30};
    cout << v[0]<<" "<< v.at(1)<<" "<<v.front()<<" "<<v.back();
    return 0;
}
      
















