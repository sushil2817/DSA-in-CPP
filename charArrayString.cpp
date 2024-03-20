#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int lengthOfString(char ch[], int size)
{

   //   int count = 0;
   int i = 0;

   while (ch[i] != '\0')
   {
      // count++;
      i++;
   }
   return i;
   //  int count = 0;

   //  for(int i=0;i<size;i++){
   //    if(ch[i]=='\0'){
   //       // break
   //       break;
   //    }else{
   //       count++;
   //    }
   //  }
   //  return count;
}

// char arr by default by reference pass hote h same to same int array

void reverseString(char ch[], int len)
{
   int i = 0;
   int j = len - 1;
   while (i <= j)
   {
      swap(ch[i], ch[j]);
      i++;
      j--;
   }
}

void upperCase(char ch[], int len)
{

   int i = 0;

   while (ch[i] != '\0')
   {
      // check if lower case then convert to lower case
      if (ch[i] >= 'a' && ch[i] <= 'z')
      {
         ch[i] = ch[i] - 'a' + 'A';
      }
      i++;
   }
}

void replaceAt(char ch[])
{
   int i = 0;
   while (ch[i] != '\0')
   {
      if (ch[i] == '@')
      {
         ch[i] = ' ';
      }
      i++;
   }

   // T.C.=> O(l) l is length of string
}

int main()
{
   char ch[100];

   cin.getline(ch, 100);

   //   cout<<"printing the value of ch: "<<ch<<endl;

   int len = lengthOfString(ch, 100);

   replaceAt(ch);
   cout << ch << endl;

   // cout<<len<<endl;

   // upperCase(ch,100);
   // cout<<ch<<endl;

   // cout<<"Before :"<<ch<<endl;

   // reverseString(ch,len);

   // cout<<"After :"<<ch<<endl;

   //  reverse(begin(ch),end(ch));

   //  cout<<"after second reverse: "<<ch<<endl;
   // cout<<"len of ch is: "<<len<<endl;

   // cout<<strlen(ch)<<endl;

   //   for(int i=0;i<100;i++){

   //    if(ch[i]=='\0'){
   //       break;
   //    }else{

   //      cout<<i<<" th index: "<<ch[i]<<endl;
   //     }
   //   }
   //   char temp = ch[6];

   //   int index = (int)temp;
   //   cout<<"null char number "<<index<<endl;

   return 0;
}