class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        // indicate number of different chars
        int cnt = 0;
        // different char's index
        // we need to only 2 of them bec cnt > 2 or cnt == 1 means return false
        int id_1, id_2;
        for(int i=0; i< s1.size(); i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(cnt==1)
                    id_1 = i;
                if(cnt==2)
                    id_2=i;
                if(cnt>2)
                    return false;
            }
        }
        // no need to swap
        if(cnt==0)
            return true;
    
        if(cnt==1)
            return false;
        
        // check swap results the same string
        if(s1[id_2] == s2[id_1] && s1[id_1] == s2[id_2])
            return true;
        
        return false;
        
    }
};
