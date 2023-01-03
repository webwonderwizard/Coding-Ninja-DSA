#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
  int n;
  cin>>n;
  int i = 1;
  while(i <= n) {
	  int s = 1;
	  while(s <= (n - i / 2)) {
		  cout<<" ";
		  s++;
	  }
	  int j = 1;
	  while(j <=  (i)) {
		  cout<<"*";
		  j++;
	  }
	// 	j = i - 1;
	//   while(j >= 1) {
	// 	  cout<<"*";
	// 	  j--;
	//   }
	  cout<<endl;
	  i++;
  }
    
}