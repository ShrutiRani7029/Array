class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp;
	mp['I'] =   1;
	mp['V'] =   5;
	mp['X'] =  10;
	mp['L'] =  50;
	mp['C'] = 100;
	mp['D'] = 500;
	mp['M'] =1000;
	int number=0,i=0;
	
	if(s.length()<=1){
		return mp[s.at(0)];
        //Yeh C++ ka code snippet string s ke pehle character ka associated value map mp 
        //se nikalta hai aur wapas laata hai. s ki pehli character 'h' ho toh agar mp 
        //mein ('h', 5), ('e', 10), ('l', 15), ('o', 20) mapping hai, toh yeh 5 return karega.
	}
	else{
		while(i<s.size()){
			if(mp[s[i]]<mp[s[i+1]]){
				number+=mp[s[i+1]]-mp[s[i]];
				i+=2;
			}
			else{
				number+=mp[s[i]];
				i++;
			}
		}
		return number;
	}
    }
};
