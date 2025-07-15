class Solution {
public:

    bool isipv4(string &s){
        vector<string>parts;
        stringstream ss(s);
        string word;
        while(getline(ss,word,'.')){
            parts.push_back(word);
        }

        if(parts.size()!=4) return false;
        for(string part:parts){
            if(part.empty()|| part.size()>3) return false;
            if(part[0]=='0' && part.size()>1) return false;
            for(char ch:part){
                if(!isdigit(ch)) return false;
            }
            int n=stoi(part);
            if(n<0 || n>255) return false;
        }
     
        return true;
    }


    bool isipv6(string &s){
        vector<string>parts;
        stringstream ss(s);
        string word;
        while(getline(ss,word,':')){
            parts.push_back(word);
        }

        if(parts.size()!=8) return false;

        for(string part:parts){
            if(part.empty() || part.size()>4) return false;
            for(char ch:part){
                if(!isxdigit(ch)){
                    return false;
                }
            }
        }
        return true;

    }
    string validIPAddress(string queryIP) {
    if (queryIP.empty()) return "Neither";

    if (queryIP.front() == '.' || queryIP.back() == '.' ||
        queryIP.front() == ':' || queryIP.back() == ':') {
        return "Neither";
    }
        if(queryIP.find('.')!=string::npos ){
            return isipv4(queryIP)?"IPv4":"Neither";
        }
        else if(queryIP.find(':')!=string::npos ){
            return isipv6(queryIP)?"IPv6":"Neither";
        }
        return "Neither";
    }
};