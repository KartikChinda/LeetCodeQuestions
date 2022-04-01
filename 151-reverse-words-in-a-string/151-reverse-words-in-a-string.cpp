class Solution {
public:
    string reverseWords(string s) {
        string st="";
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                st=st+s[i];
            else
            {
                if(st!="")
                {
                    if(str=="")
                        str=st+str;
                    else
                        str=st+' '+str;
                }
                    
                st="";
            }
        }
        if(st!="" && str=="")
            str=st+str;
        else if(st!="")
            str=st+' '+str;
        return str;
    
        
    }
};