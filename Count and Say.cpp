string Solution::countAndSay(int A) {
    if(A==1)
        return "1";
    if(A==2)
        return "11";
    string str="11";
    for(int i=3;i<=A;i++){
        str+='$';  // z value algo
        int len=str.length();
        int c=1;
        string tmp="";
        for(int j=1;j<len;j++){
            if(str[j]!=str[j-1]){
                tmp+=c+'0';
                tmp+=str[j-1];
                c=1;
            }
            else
                c++;
        }
        str=tmp;
    }
    return str;
}
