#include<bits/stdc++.h>
using namespace std;

int main(){

  int num=10;
  int *ptr = &num;
  // *ptr = *ptr + 1;
  cout<<*ptr++<<endl; // or cout<<*ptr + 1<<endl;
  // cout << *ptr++;: Prints the value pointed to by ptr, which is 10, and then increments the pointer ptr by 1 (because of the post-increment ++ operator). However, since ptr is an integer pointer, incrementing it by 1 means moving by the size of an integer (usually 4 bytes on most systems). In this case, it moves to the next memory location after num.

  cout<<*ptr<<endl;
  // cout << *ptr << endl;: Prints the value pointed to by the modified ptr. Since ptr was incremented in the previous step, it now points to an arbitrary memory location (undefined behavior). The output of this line is unpredictable, and it may print a garbage value.

  cout<<num<<endl;
  // cout << num;: Prints the original value of num, which is still 10.

  // --------------------------------------------------------

  int new_num = 11;
  int *new_ptr = &new_num;
  cout<<++*new_ptr<<endl;
  // cout << ++*new_ptr << endl;: Pre-increments the value pointed to by new_ptr. So, *new_ptr is incremented to 12, and the result is printed. After this operation, *new_ptr becomes 12.

  cout<<*new_ptr<<endl;
  // cout << *new_ptr << endl;: Prints the value pointed to by new_ptr, which is 12.

  cout<<new_num<<endl;
  // cout << new_num << endl;: Prints the value of new_num, which is 12 as well. When you change the value via the pointer, it also affects the original variable new_num.

  cout<<(*new_ptr)+1<<endl;
  // (*new_ptr): This dereferences the pointer new_ptr, retrieving the value it points to, which is 12 (as explained in the previous response).

  // (*new_ptr) + 1: Adds 1 to the value obtained from step 1, i.e., 12 + 1 which equals 13.

  // Therefore, (*new_ptr) + 1 results in 13, and that's what is printed.

  /*----------------------------------------------------*/

  //NULL POINTER AND VALUE ACCESS



  int *p; // bad practice it points to a garbage value;
  cout<<*p<<endl; // 1077940385

  //insted point to a null ptr;
  int *p1=0;
  cout<<*p1<<endl; // sometimes give segmentation fault because no such 0 memory exist in the memory blocks

  // ANOTHER WAY OF INITIALIZING PTRS ARE..
  int i = 5;
  int *ptr_i;
  ptr_i = &i;
  cout<<*ptr_i<<endl; // output = 5;

 //-------------------------------------------------------

 // COPYING A POINTER

  int n = 100;;
  int *p2 = &n;
  int *q = p2;

  cout<<*q<<" "<<*p2<<" "<<n<<endl; // 100 100 100





  

  
  return 0;

}