// This target is used for convert Roman numbers into int numbers
#include <iostream>
#include <string>

using namespace std;

int RomanInt (string s);
// Get the number of letter
int getNum (char ch);

int main() {
    /* Firstly, we have to use a function to check the letter from the end to beginning if its smaller. If it's bigger, plus it, else minus it.
     */
    string Roman;
    cout << "Please enter the Roman number.\n";
    cin >> Roman;
    int IntNum;
    IntNum = (int)RomanInt(Roman);
    printf("The Roman number to integer is %d\n", IntNum);
    
}

// Define the function
int RomanInt (string s){
    int totalNum = 0;
    int perNum, thisNum;
    // Add the final number to total number
    totalNum += getNum(s[s.length() - 1]);
    
    for (int i = (int)s.length() - 1; i > 0; i--){
        
        thisNum = getNum(s[i]);
        perNum = getNum(s[i - 1]);
        if (perNum < thisNum)
            totalNum -= perNum;
        else
            totalNum += perNum;
        
    }
    return totalNum;
}



int getNum (char ch){
    switch (ch){
        case 'I': return 1;
            break;
        case 'V': return 5;
            break;
        case 'X': return 10;
            break;
        case 'L': return 50;
            break;
        case 'C': return 100;
            break;
        case 'D': return 500;
            break;
        case 'M': return 1000;
            break;
        default: return 0;
    }
}
