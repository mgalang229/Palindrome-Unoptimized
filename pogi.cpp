#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
	
	int i, j = 0, k = 0, counter = 0;
	char str1[100],str2[100],str3[100],str4[100],str5[100];
	
	cout << "************************\n";
	cout << "PALINDROME\n";
	cout << "************************\n";
	cout << "Enter a word: ";
	cin.getline(str1, 255);
	
	for(i=0;i<strlen(str1);i++){
		if(isspace(str1[i])){
			counter++;
		}else{
			break;
		}
	}
	
	if(counter>0){
		for(i = counter;i<=strlen(str1);i++){
			str5[j] = str1[i];
			j++;
		}
	} else{
		strcpy(str5, str1);
	}
	cout << "str5: " << str5 << endl;
	cout << "strlen of str5: " << strlen(str5) << endl;
	
	for(i = 0;i<=strlen(str5);i++){
		str4[i] = tolower(str5[i]);
	}
	
	cout << "str4: " << str4 << endl;
	strcpy(str2,str4);
	cout << "str2: " << str2 << endl;
	
	for(i=strlen(str5)-1;i>=0;i--){
		str3[k] = str2[i];
		k++;
	}
	
	cout << "str3: " << str3 << endl;
	if(strcmp(str4,str3)==0){
		cout << str5 << " is a palindrome";
	} else{
		cout << str5 << " is not a palindrome";
	}
	
	
	return 0;
}
