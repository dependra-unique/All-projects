# include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "plz enter input" <<endl;
    cin >> ch;
    if(ch=='a'|| ch == 'b'||ch=='c'||ch=='d'||ch=='e'||ch=='f'||ch=='g'||ch=='h'||ch=='i'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='o'||ch=='p'||ch=='q'||ch=='r'||ch=='s'||ch=='t'||ch=='u'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z')
    {
        cout << "iower case letter" << " and this is :" << ch << endl;;
    }
    else if(ch=='A'|| ch == 'B'||ch=='C'||ch=='D'||ch=='E'||ch=='F'||ch=='G'||ch=='H'||ch=='I'||ch=='J'||ch=='K'||ch=='L'||ch=='M'||ch=='N'||ch=='O'||ch=='P'||ch=='Q'||ch=='R'||ch=='S'||ch=='T'||ch=='U'||ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='Z'){

        cout <<"upper case letter " << " and this is:" << ch << endl;
    }
    else if(ch=='0'||ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
        cout << "This is numeric and the number is:" << ch << endl;
    }
    else{
        cout << "This is unknown, plz enter your valid input" << endl;
    }
}

