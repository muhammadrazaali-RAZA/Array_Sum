#include <iostream>
#include <sstream>
using namespace std;

string to_stringx(const int& n); 
void str2inta(string s, int x[], int size);
string inta2str(int x[], int size);


void array_sum(int a[], int b[], int c[], int size) {
  //////// START OF MARKER for array_sum code
 	int sum=0, rem=0;
	for(int i=0; i<size; i++){
	
		 sum=a[i]+b[i]+rem;
		  rem=0;
		  if(sum==10)
		  {
		  	rem=1;
		  	sum=0;
		  }
		  else if(sum>10)
		  {
		  	sum=sum-10;
		  	rem=1;
		  }
		 c[i]=sum;
		}

  //////// END OF MARKER 

  return;
}






//////// HELPER FUNCTION
/*int main_test() {
    int a[100], b[100], c[100];
    str2inta("128", a, 100);
    str2inta("985", b, 100);
    array_sum(a, b, c, 100);
    cout <<  inta2str(c, 100) << endl;
    return 0;
}*/

///////////// DO NOT MODIFY CODE BEYOND THIS LINE /////////////


/// !!! FOR SUCCESSFULL SUBMISSION, THE FOLLOWING NEEDS TO BE THE main FUNCTION
int main(int argc, char* argv[]) {
    int a[100], b[100], c[100];
    str2inta(argv[1], a, 100);
    str2inta(argv[2], b, 100);
    array_sum(a, b, c, 100);
    cout <<  inta2str(c, 100) << endl;
    return 0;
}


// OTHER HELPER FUNCTIONS
void str2inta(string s, int x[], int size) {
  int max_idx = s.length() - 1;
  for (int i=0; i < size; i++)
    x[i] = 0;
  for (int i=0; i < s.length(); i++)
    x[max_idx--] = s[i] - '0';
}
string inta2str(int x[], int size) {
  string val = "";
  for (int i=size-1; i >= 0; i--)
    val = val + to_stringx(x[i]);
  val = val.erase(0, val.find_first_not_of('0'));
  return val.length() > 0 ? val : "0";
}
string to_stringx(const int &n) { 
  std::ostringstream stm ;
  stm << n ;
  return stm.str() ;
} 
