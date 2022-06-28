//Method 1 Using Recursion

string reverseWord(string str){
    if(str.length()==0){
        return "";
    }
    string ros=str.substr(1);
    reverseWord(ros);
    cout<<str[0];
  //Your code here
}