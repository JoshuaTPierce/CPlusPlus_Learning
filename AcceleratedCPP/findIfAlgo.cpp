//Functions that deal with unique delimiters for strings:

//true if the argument is a whitespace, false otherwise

bool space(char c){
	return isspace(c);
}

//false if the argument is whitespace, true otherwise
bool not_space(char c){
	return !isspace(c);
}

vector<string> split(const string& str){
	typedef string::const_iterator iter;
	vector<string> ret;

	iter i = string.begin();
	while(i != str.end()){
		//ignore leading blanks
		i = find_if(i, str.end(), not_space);

		//find end of next word
		iter j = find_if(i, str.end(), space);

		//copy the chars in [i,j)
		if(i != str.end())
			ret.push_back(string(i, j));
		i = j;
	}
	return ret;
}
	
/*
The algorithm used is find_if. Its first two arguments are iterators
that denote a sequence. The third is a predicate which tests its 
argument and returns true or false. The find_if function calls the 
predicate on each element in the sequence, stopping when the 
predicate reutns true.
*/