#include <iostream>
#include <cstring>
#include <random>
#include <cstdlib>
#include<ctime>
#include<array>
#include <iterator>



using namespace std;


int main()
{
	char password[] = "0123456789`~<>!@#$%^&*()BCDFGHJKLMNPQRSTUVWXYZbcdfghjklmnpqrstvwxz";
	int passSize;
	int MAX = 16;
	string userPassword;
	char autoPass;
	bool aUpper = false , aLower = false , aDigit = false , aVowel = false , aMax = false , aSpecial = false;
	
	
	do{
	cout << "Would you like an automated password?(--Y/y for yes ,--N/n for no): ";
	cin >> autoPass;
}while(autoPass != 'n' && autoPass != 'N' && autoPass != 'y' && autoPass != 'Y');
	cin.ignore(100 , '\n');
	if(autoPass == 'n' || autoPass == 'N')
	{
		
	do{
	
		bool aUpper = false , aLower = false , aDigit = false , aVowel = false , aMax = false , aSpecial = false;
		
		cout << "Enter a password: ";
		getline(cin , userPassword);
				
		cout << userPassword.length() << "************\n\n\n"; 
	
		for(int x=0; x < userPassword.length(); ++x)
		{	
			
			if (isupper(userPassword[x]))
				aUpper = true;
			if(islower(userPassword[x]))
				aLower = true;
			if(isdigit(userPassword[x]))
				aDigit = true;
			if(userPassword[x]=='a' || userPassword[x]=='e' || userPassword[x]=='i' ||
           		userPassword[x]=='o' || userPassword[x]=='u' || userPassword[x]=='A' ||
           		userPassword[x]=='E' || userPassword[x]=='I' || userPassword[x]=='O' ||
				userPassword[x]=='U')
		   			aVowel = true;	   	
			if(userPassword.length() >= MAX)
				aMax = true;
			if(userPassword[x]=='`' || userPassword[x]=='~' || userPassword[x]=='!' ||
           		userPassword[x]=='@' || userPassword[x]=='#' || userPassword[x]=='$' ||
           		userPassword[x]=='%' || userPassword[x]=='^' || userPassword[x]=='&' ||
				userPassword[x]=='*' || userPassword[x]=='(' || userPassword[x]==')' || userPassword[x]=='-' ||
           		userPassword[x]=='_' || userPassword[x]=='+' || userPassword[x]=='=' ||
           		userPassword[x]=='[' || userPassword[x]=='}' || userPassword[x]=='{' ||
				userPassword[x]==']' || userPassword[x]=='|' || userPassword[x]==':' ||
           		userPassword[x]=='/' || userPassword[x]=='?' || userPassword[x]==';' ||
           		userPassword[x]=='>' || userPassword[x]=='.' || userPassword[x]=='<' ||
				userPassword[x]=='<')	
					aSpecial = true;
						   	
		}
		
	//	cout << userPassword.length() << "<<<<<<<<<<\n\n\n";
	
		if(aUpper == true && aLower == true && aDigit == true && aVowel == true && aMax == true && aSpecial == true)
			{cout << "\nYour password is: " << userPassword; 
			break;}
		if(aUpper == false)
			{cout<<"invalid! Must include at least one upper case letter!" << endl;}
		if(aLower == false)
			{cout<<"invalid! Must include at least one lower case letter!" << endl;}	
		if(aDigit == false)
			{cout<<"invalid! Must include at least one number!" << endl;}	
		if(aVowel == false)
			{cout<<"invalid! Must include at least one vowel!" << endl;}	
		if(aMax == false)
			{cout<<"invalid! Must contain 16 or more characters!" << endl;}	
		if(aSpecial == false)
			{cout<<"Invalid! Must contain a special character!" << endl;}		
	
	//	cout << "\n" << aUpper << aLower << aDigit << aVowel << aMax << "\n";
		}while(aUpper != true || aLower != true || aDigit != true || aVowel != true || aMax != true || aSpecial != true);
	
	}
	 
	 
	else
	{  
    	passSize = sizeof(password) -  1;
    	    
		srand(time(0));
		cout << "Your auto generated password is: ";	
	
    	for(int x = 0; x < MAX; ++x)
    	{
        	cout << password[rand() % passSize];
    	}
	}
    return 0;
}
