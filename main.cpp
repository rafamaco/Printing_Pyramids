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