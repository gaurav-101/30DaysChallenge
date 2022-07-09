bool areRotations(string s1,string s2)
    {
        int n1=s1.length();
        int n2=s2.length();
        if(n1!=n2){
            return false;
        }
        else{
            string temp=s1+s1;
            // Weather string 2 is present in temp or not
            if(temp.find(s2) != string::npos){
                return true;
            }
            else 
                return false;
        }
    }