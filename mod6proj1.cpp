#include <iostream>
#include <string>

using namespace std;


string piglatin(string);
string piglatin2(string);

int main(){
    string input;
    cout<<"Translate into Piglatin: ";
    getline(cin, input);
    int space = input.find(' ');

    if (space > 0){
    cout<<piglatin(input)<<endl;

    }else{
    string final = piglatin2(input);
    cout<<final<<endl;
 }
}

string piglatin(string input){
    int space, space2;
    space = input.find(" ");
    cout<<space<<endl;
    string word1 = input.substr(0, space);
    cout<<word1<<endl;
    string pig1 = piglatin2(word1);
    string fpglatin = pig1;
    input = input + " ";

    while(space2 > 0){
        space2 = input.find(" ", space + 1);
        cout<<space2<<endl;
        space2 = space2 - 1;
        string word2 = input.substr(space - 1, space2);
        cout<<word2<<endl;
        space = space2;
        string out = piglatin2(word2);
        fpglatin = fpglatin + out + " ";

    }
    return fpglatin;

}

string piglatin2(string word){
    char letter1 = word[0];
    char letter2 = word[1];
    string pglatin;
    int length = word.length();
    if (letter1 == 'a' || letter1 == 'e'|| letter1 == 'i' || letter1 == 'o' || letter1 == 'u' ){
        pglatin = word + "way";
    }else {

        if(letter2 == 'a' || letter2 == 'e'|| letter2 == 'i' || letter2 == 'o' || letter2 == 'u' ){
            char firstl = word[0];
            pglatin = word.substr(1,length-1) + letter1 + "ay";
        }else{
            pglatin = word.substr(2, length) + letter1 + letter2 + "ay";

        }
    }
    return pglatin;
}



