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
        //cout<<"meow"<<endl;
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



// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v = {10, 20, 30};
//     cout << v[0]<<" "<< v.at(1)<<" "<<v.front()<<" "<<v.back();
//     return 0;
// }
      

//Practicse Array

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int a=0 ;

//     for (int i =0 ; i<5 ; i++){
//         cout << arr[i];
//         cout<<"\n";
//         a=a+i ;
        

        


//     }
//     cout<<"sum of all elements is "<<a<<endl;
//     a=a/5;
//     cout<<"average of the array is"<<a;

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int a=0 ;

//     for (int i =0 ; i<5 ; i++){
//         cout << arr[i];
//         cout<<"\n";
//         a=a+i ;
//     }
//     cout<<"sum of all elements is "<<a<<endl;
//     a=a/5;
//     cout<<"average of the array is"<<a;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int i ;
//     for (int i =5 ; i>=0 ;i--){
//         cout<<arr[i]<<endl;
//     }

    
    
    

//     return 0;
// }


// #include <bits/stdc++.h>
// // #include <vector>

// using namespace std;

// void printArray( vector<int>& arr) {
    
//     for (int i = 0; i < arr.size(); ++i) {
//         cout << arr[i] << (i < arr.size() - 1  ", " : "");
//     }
    
// }

// void insertElement(vector<int>& arr, int element, int position) {
//     // Valid positions: 0 to arr.size()
//     if (position < 0 || position > arr.size()) {
//         cout << "Insertion Failed: Position " << position << " is out of bounds.\n";
//     } else {
//         arr.insert(arr.begin() + position, element);
//         cout << "After inserting " << element << " at position " << position << ": ";
//         printArray(arr);
//     }
// }

// void deleteElement(vector<int>& arr, int position) {
//     // Valid positions: 0 to arr.size() - 1
//     if (position < 0 || position >= arr.size()) {
//         cout << "Deletion Failed: Position " << position << " is out of bounds.\n";
//     } else {
//         int removed_element = arr[position];
//         arr.erase(arr.begin() + position);
//         cout << "After deleting " << removed_element << " from position " << position << ": ";
//         printArray(arr);
//     }
// }

// int main() {
//     vector<int> my_array = {10, 20, 30, 40, 50};
    
//     cout << "Original Array: ";
//     printArray(my_array);
//     cout << "\n";

//     // 1. Valid Insertion
//     insertElement(my_array, 25, 2);
    
//     // 2. Valid Deletion
//     deleteElement(my_array, 4);
    
//     // 3. Invalid Insertion (Index too large)
//     insertElement(my_array, 99, 10);
    
//     // 4. Invalid Deletion (Negative index out of bounds)
//     deleteElement(my_array, -1);

//     return 0;
// }

//Vecotors used


// #include <bits/stdc++.h>
// using namespace std;


// void printArray(const vector<int>& arr) {
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void insertElement(vector<int>& arr, int element, int position) {
    
//     if (position >= 0 && position <= arr.size()) {
       
//         arr.insert(arr.begin() + position, element);
//         printArray(arr);
//     } else {
//         cout << "Invalid position!" << endl;
//     }
// }

// int main() {
//     vector<int> my_array = {1, 2, 3, 4, 5};

//     cout << "Original array: ";
//     printArray(my_array);

//     cout << "Inserting 1111 at position 2 (index 2): ";
//     insertElement(my_array, 1111, 2);

//     return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int pos=2;
//     int n =5;
//     int item =23;
//     int arr[6]={1,2,3,4,5};
//     for (int i = n ; i>= pos; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos-1]=item;
//     for (int i=0 ; i<= n;i++){
//         cout<<arr[i]<<endl;
//     }


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int pos=2;
//     int n =5;
//     int item =23;
//     int arr[6]={1,2,3,4,5};
//     for (int i = n ; i>= pos; i--){
//         arr[i]=arr[i-1];
//     }
//     arr[pos-1]=item;
//     for (int i=0 ; i<= n;i++){
//         cout<<arr[i]<<endl;
//     }


//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int factori(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     else {
//         return n * factori(n - 1);
//     }
// }

// int main() {
//     cout << factori(5);

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int fibonacci(int n)
// {
//     if(n == 0)
//         return 0;

//     if(n == 1)
//         return 1;

//     return fibonacci(n-1) + fibonacci(n-2);
// }

// int main()
// {
//     cout << fibonacci(5);

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main (){
//     int arr[5] ={1,2,3,4,5};
//     for (int i=0 ; i<=5;i++){
//         if(arr[i]==4 ) {
//         cout<<"no.found at" <<i<<endl ;
//     }
//         else{
//             cout<<"nothing here"<<endl;
//         }
//     }



//     return 0;
// }



//Binary Search


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int arr[] = {5, 12, 23, 34, 45, 56, 67, 78};
//     int n = 8;
//     int key = 56;

//     int low = 0;
//     int high = n - 1;

//     while (low <= high) {
//         int mid = (low + high) / 2;

//         cout << "Low = " << low
//              << ", Mid = " << mid
//              << ", High = " << high
//              << ", arr[mid] = " << arr[mid] << endl;

//         if (arr[mid] == key) {
//             cout << "\nElement found at index " << mid;
//             return 0;
//         }
//         else if (key > arr[mid]) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }

//     cout << "\nElement not found";
//     return 0;
// }

//Tower of Hanoi

// #include <iostream>
// using namespace std;

// void solveHanoi(int n, char from_rod, char to_rod, char aux_rod) {
//     // BASE CASE: If there are no disks left to move, stop.
//     if (n == 0) {
//         return; 
//     }

//     // STEP 1: Move the top n-1 disks off the largest disk and onto the auxiliary rod.
//     // Notice that 'aux_rod' and 'to_rod' swap places in this call.
//     solveHanoi(n - 1, from_rod, aux_rod, to_rod);

    
//     cout << "Move disk " << n << " from " << from_rod << " to " << to_rod << endl;

//     // STEP 3: Move the n-1 disks from the auxiliary rod to the target rod.
//     // Notice that 'from_rod' and 'aux_rod' swap places here.
//     solveHanoi(n - 1, aux_rod, to_rod, from_rod);
// }


// int main() {
//     int total_disks = 3;
//     cout << "Steps to solve for " << total_disks << " disks:\n";
    
//     // Start with disks on 'A', target is 'C', using 'B' as the spare.
//     solveHanoi(total_disks, 'A', 'C', 'B');
    
//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// struct Node { 
// public:
//     int data;
//     Node* next;

// public: // 2. Changed semicolon (;) to colon (:)
//     Node(int data1, Node* next1) {
//         data = data1;
//         next = next1;
//     }
// };

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 67};
    
//     Node* y = new Node(arr[0], nullptr);
    
//     cout << y ; 
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

struct Node {
        public:
        int data ;
        Node * next ;


        public:
        Node(int data1 ,Node*next1){
                data=data1;
                next=next1;
        }
};

int main(){
        vector <int> arr = {1,2,3,4,5};
        Node*y = new Node (arr[0],nullptr);
        cout<<y;




        return 0;
}