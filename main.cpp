/*
Graded Learning Activity 3.5
Printing Pyramids
Print a pyramid of Pascal’s triangle


Sample Input/Output 01:
Please enter the total number of rows:
5
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1

Sample Input/Output 02:
Please enter the total number of rows:
8
                 1
               1   1
             1   2   1
           1   3   3   1
         1   4   6   4   1
       1   5  10  10   5   1
     1   6  15  20  15   6   1
   1   7  21  35  35  21   7   1
*/

#include <iomanip>
#include <iostream>
using namespace std;

void pyramid(int n);
float getContent(int i, int j);


int main() {
  int r;
  cout << "Please enter the total number of rows: " << endl;
  cin >> r;
  pyramid(r);


}

void pyramid(int r)
{
    int content;
    for(int i=1; i<=r; i++) // for the lines
    {
        for(int j=1; r-i+1>j; j++) // for the spaces
        {
            cout << "  ";
        }
        for(int j=1; j<=i; j++) // for the content
        {
          if (j == 1 || j == i){
            content = 1;
          }
          else {
          content = getContent(i, j);

          }
          cout << setw(4) << content;
        }
    cout << endl;
    }
}

float getContent(int i, int j)
{
int auxn=1, auxp=1, auxnp, auxij=1, prodn=1, prodp=1, prodnp=1, content;


    i -= 1;
    j -= 1;
    auxnp = i - j;
    while(auxn<=i){
        prodn *= auxn;
        auxn++;
    }

    while(auxp<=j){
        prodp *= auxp;
        auxp++;
    }

    while(auxij<=auxnp){
        prodnp *= auxij;
        auxij++;
    }
    content = prodn / (prodp * prodnp);

  return content;

}