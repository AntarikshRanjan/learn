class Solution{	
	public:		
		bool palindromeCheck(string& s){

            string temp = s;

            reverse(temp.begin(), temp.end());

        return s == temp;
    }
};