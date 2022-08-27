#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    char str[] = "Coding is fun";
    int i, count = 0;

   for(i=0; str[i]!='\0';i++) {
      if(isspace(str[i]))
      count++;
   }

   cout<<"Number of spaces in the string are "<<count;

    return 0;
}