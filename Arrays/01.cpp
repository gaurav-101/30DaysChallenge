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

//Method 2 Using Two Pointers

string reverseWord(string str){
    int i=0;
    int j=str.length()-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    return str;
  //Your code here
}
