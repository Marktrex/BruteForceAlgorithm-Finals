//#include <cstdlib> //#include <cctype> //#include <conio.h>
#include <iostream>
#include <cstring>
using namespace std;

int main(){	
	Start:
	system("cls"); 
	int size;
	int array[size];
		
	char choice,ans;		
	cout<<"===========BRUTE FORCE ALGORITHM===========\n"<<endl;
	cout<<"\t(A) Bubble Sort\n"<<endl;	
	cout<<"\t(B) Selection Sort\n"<<endl;
	cout<<"\t(C) Sequential Search\n"<<endl;
	cout<<"\t(D) String Matching\n"<<endl;
	cout<<"==========================================="<<endl;
	cout<<endl<<"Type Your Selection: "; cin>>choice; //choice 
	
	if(choice == 'a' || choice == 'A'){
	Bubble: 
	
		system("cls"); 
		cout<<"===========BRUTE FORCE ALGORITHM===========\n"<<endl;
		cout<<"\t(A) Bubble Sort\n"<<endl;	
		cout<<"\t(B) Selection Sort\n"<<endl;
		cout<<"\t(C) Sequential Search\n"<<endl;
		cout<<"\t(D) String Matching\n"<<endl;
		cout<<"==========================================="<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"  ARRANGE THE INTEGERS USING BUBBLE SORT  "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"===========================================\n"<<endl;
		cout<<"Input the number of Integers: "; cin>>size; cout<<endl;	//enter the size of the array
		cout<<"==========================================="<<endl;
		cout<<"Input the " <<size<< " values to be sorted: \n"<<endl; 
		
		for (int i=0; i<size; i++){ 							//for loop when entering the value of the integers
		cout << "Value of Integer (" <<i+1<< "): "; 
		cin>>array[i];
		}
				
		for (int i = 0; i<size; i++) { //bubble sort for loop code
	        for (int j = 0; j<size-1; j++) {
	            if (array[j] > array[j + 1]) {
	                swap(array[j], array[j + 1]);
	            }
	        }
	    }cout<<endl;
		cout<<"==========================================="<<endl;
		cout<<"Sorted Array: "; 
		
		for(int i = 0; i<size; i++) { //for loop that shows the value or output of the integers
		   cout <<array[i]<<" ";
		}
		
		cout<<endl;
		cout<<"===========================================\n";
		cout<<"Do you wish to do it again?"<<endl;
		cout<<"\t\t(Y/N) ";cin>>ans;
		
	    if(ans == 'Y' || ans == 'y'){ //if else statement when the user is being ask if he/she wants to play again
	    	goto Bubble;
		} else if(ans == 'N' || ans == 'n'){
			goto Start;
		} else{
			cout<<"===========================================\n"<<endl;
			cout<<"Invalid output!... System is crashing!!!";
			return 0;
		}	
	}
	else if(choice == 'b' || choice == 'B'){
	Selection:
	
		system("cls"); 
		int size;
		int array[size];
		
		cout<<"===========BRUTE FORCE ALGORITHM===========\n"<<endl;
		cout<<"\t(A) Bubble Sort\n"<<endl;	
		cout<<"\t(B) Selection Sort\n"<<endl;
		cout<<"\t(C) Sequential Search\n"<<endl;
		cout<<"\t(D) String Matching\n"<<endl;
		cout<<"==========================================="<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<" ARRANGE THE INTEGERS USING SELECTION SORT "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"===========================================\n"<<endl;
		cout<<"Input the number of Integers: "; cin>>size; cout<<endl; //enter the size of the array
		cout<<"===========================================\n";	
		cout<<"Input the " <<size<< " values to be arranged: \n"<<endl; 
		
		for (int i=0; i<size; i++){ //for loop when entering the value of the integers
		cout<<"Value of Integer "<<i+1<<": ";
		cin>>array[i];
		} cout<<endl;
		
		for (int i = 0; i < size; i++) { //Selection Sort for loop
        int minIndex = i;
        for (int j = i ; j < size; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }  
        }
      swap(array[i], array[minIndex]);//swap function for the Selection Sort
    }
		
		cout<<"===========================================\n";
		cout <<"Sorted Array: ";
		
		for(int i = 0; i<size; i++) { //for loop that shows the value or output of the integers
		   cout <<array[i]<<" ";
		}
		
		cout<<endl;
		cout<<"===========================================\n";
		cout<<"Do you want Sort/Solve again?"<<endl;
		cout<<"\t\t(Y/N) ";cin>>ans;
		
	    if(ans == 'Y' || ans == 'y'){ //if else statement when the user is being ask if he/she wants to play again
	    	goto Selection;
		} else if(ans == 'N' || ans == 'n'){
			goto Start;
		} else{
			cout<<"===========================================\n";
			cout<<"Invalid output!... System is crashing!!!";
			return 0;
		}	
	}
	else if(choice == 'c' || choice == 'C'){
	Sequential:
	
		system("cls"); 
		int i,key; 
		int size;
		int array[size];
		cout<<"===========BRUTE FORCE ALGORITHM===========\n"<<endl;
		cout<<"\t(A) Bubble Sort\n"<<endl;	
		cout<<"\t(B) Selection Sort\n"<<endl;
		cout<<"\t(C) Sequential Search\n"<<endl;
		cout<<"\t(D) String Matching\n"<<endl;
		cout<<"==========================================="<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<" FIND THE ELEMENT USING SEQUENTIAL SEARCH "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"===========================================\n"<<endl;
		cout<<"Input the number of Integers: "; cin>>size; cout<<endl;	//enter the size of the array
		cout<<"===========================================\n";	
		cout<< "Input the values of the " <<size<< " integers: \n"<<endl;
	
		for(int j=0;j<size;j++){ 								//for loop when entering the value of the integers
		cout<<"Value of Integer "<<j+1<< ": ";
		cin>>array[j];
		} cout<<endl;
		cout<<"===========================================\n";
	
		cout<<"Input a value to search in the array: ";
	    cin>>key;
	    
		for( i=0;i<size;i++){ //for loop searching for the position or index of the given value
	      if(key==array[i]){
			break;
	   	  }
	 	}
	 	cout<<"===========================================\n";	
	 	
		if(i != size){
			cout<<"Value found at index: "<<i<<endl;
		}
		else{
			cout<<"The value does not exist in the array"<<endl;
		}
		
		cout<<"===========================================\n";
		cout<<"Do you wish to do it again?"<<endl;
		cout<<"\t\t(Y/N) ";cin>>ans;
		
	    if(ans == 'Y' || ans == 'y'){ //if else statement when the user is being ask if he/she wants to play again
	    	goto Sequential;
		} else if(ans == 'N' || ans == 'n'){
			goto Start;
		} else{
			cout<<"===========================================\n";
			cout<<"Invalid output!... System is crashing!!!";
			return 0;
		}	

	}
	else if(choice == 'd' || choice == 'D'){
	String: 
		system("cls"); 
		cin.ignore();
		char text[50];
		char pattern[50];
		cout<<"===========BRUTE FORCE ALGORITHM===========\n"<<endl;
		cout<<"\t(A) Bubble Sort\n"<<endl;	
		cout<<"\t(B) Selection Sort\n"<<endl;
		cout<<"\t(C) Sequential Search\n"<<endl;
		cout<<"\t(D) String Matching\n"<<endl;
		cout<<"==========================================="<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"  FIND THE PATTERN USING STRING MATCHING  "<<endl;
		cout<<"-------------------------------------------"<<endl;
		cout<<"===========================================\n"<<endl;
		cout<<"Input the desired text: ";  
		cin.getline(text,50); cout<<endl;	
		cout<<"Input the pattern you're looking for: "; 
		cin.getline(pattern,50); cout<<endl; 
		cout<<"===========================================\n";

		char *found;                     //uhh for char index i guess...
		found = strstr(text,pattern);		
		
		if(found){									//if statement if you found a pattern or not
			cout<<"A pattern has found in the index "<<found-text+1<<endl;
		} else{
			cout<<"The pattern sadly doesnt exists..."<<endl;
		}
		
    	cout<<"===========================================\n";
		cout<<"Do you wish to do it again?"<<endl;
		cout<<"\t\t(Y/N) ";cin>>ans;
	    if(ans == 'Y' || ans == 'y'){ //if else statement when the user is being ask if he/she wants to play again
	    	goto String;
		} else if(ans == 'N' || ans == 'n'){
			goto Start;
		} else{
			cout<<"===========================================\n";
			cout<<"Invalid output!... System is crashing!!!";
			return 0;	
		}
	}
	else{
		cout<<"Invalid output!... System is crashing!!!"<<endl;
		return 0;
	}
system("pause");
}
