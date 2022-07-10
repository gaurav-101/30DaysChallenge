
//   Method -1 // Using Bit
void printSS(string ques, string ans){
    int t=ques.length();
    int n=pow(2,t)-1;
    while(n!=0){
        int temp=n;
        int i=0;
        while(temp!=0){
            if(temp&1){
                cout<<ques[i];
            }
            i++;
            temp= temp>>1;
        }
        cout<<endl;
        n--;
    }
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}