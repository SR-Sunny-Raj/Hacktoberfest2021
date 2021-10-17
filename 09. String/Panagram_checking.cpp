//Pangram Checking 
//Given a string check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.
//Input:
//S = Bawds jog, flick quartz, vex nymph
//Output: 1
//Explantion: In the given input, there
//are all the letters of the English
//alphabet. Hence, the output is 1.


//Input:
//S = sdfs
//Output: 0
//Explantion: In the given input, there
//aren't all the letters present in the
//English alphabet. Hence, the output
//is 0.

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) {
       vector<bool> ans(26,false);
       
      int index;
      for(int i=0;str[i]!='\0';i++)
      {
          if(str[i]>='A'&&str[i]<='Z')
          index= str[i]-'A';
          else if(str[i]>='a'&&str[i]<='z')
          index= str[i]-'a';
          else
          continue;
          
        ans[index]=true;
      }
      for (int i = 0; i <= 25; i++)
        if (ans[i] == false)
            return (false);
            
      return true;
    }

};

// { Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}


