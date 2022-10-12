#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <iterator>

using namespace std;

void display(unordered_set<string> s)
{
  unordered_set<string>::iterator itr;
   
  // Displaying set elements
  for (itr = s.begin();
       itr != s.end(); itr++)
  {
    cout << *itr << " ";
  }
} 
 

int main(){
string t2 = "[('e', 65), ('s', 49),('a', 47),('i', 46),('r', 40),('l', 35),('t', 32),('n', 29),('o', 27),('d', 25),('c', 18),('g', 17),('p', 16),('u', 15),('f', 10),('m', 10),('h', 8),('y', 8),('v', 8),('w', 4),('k', 4),('z', 4),('b', 4),('q', 2),('x', 1),('j', 1)]";
string t11 = "[('e', 73),(' /', 60),('s', 54),('i', 49),('r', 40),('o', 40),('t', 39),('n', 37),('a', 35),('c', 24),('l', 23),('u', 20),('d', 18),('p', 15),('m', 14),('b', 10),('g', 9),('h', 8),('v', 8),('w', 7),('y', 5),('k', 5),('f', 5),('x', 1),('z', 1)]";
string t12 = "[('e', 64),(' /', 62),('a', 44),('i', 43),('s', 43),('l', 38),('n', 37),('t', 36),('r', 33),('o', 28),('c', 21),('d', 20),('g', 18),('b', 14),'u', 14),('h', 14),('p', 14),('y', 13),('m', 12),('f', 8),('w', 7),('k', 6),('v', 5),('j', 2),('z', 2),('x', 2)]";
string t13 = "[(' /', 65),('e', 63),('n', 43),('r', 42),('i', 42),('s', 42),('t', 37),('a', 36),('o', 34),('l', 31),('u', 20),('d', 19),('c', 18),('m', 17),('b', 16),('y', 16),('g', 11),('p', 10),('v', 7),('f', 6),('h', 6),('k', 6),('w', 5),('x', 5),('z', 1),('q', 1),('j', 1)]";
string t14 = "[('e', 63),(' /', 60),('i', 55),('a', 46),('s', 44),('l', 36),('t', 36),('n', 35),('r', 34),('c', 31),('o', 30),('u', 15),('d', 14),('p', 13),('y', 13),('g', 12),('v', 11),('b', 11),('m', 10),('f', 9),('h', 8),('k', 6),('x', 4),('q', 1),'j', 1),'z', 1),('w', 1)]";
string t15 = "[(' /', 64),('e', 62),('s', 53),('i', 47),('r', 47),('a', 42),('t', 39),('n', 33),('l', 28),('u', 26),('o', 23),('c', 18),('g', 18),('d', 17),('m', 15),('p', 13),('b', 13),('h', 12),('y', 9),('j', 4),('w', 4),('q', 4),('v', 4),('k', 3),('f', 2)]";

vector<string> t = {t11, t12, t13, t14, t15, t2};

unordered_set<string> s {"/", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};

 for (int i = 0; i < t.size(); i++){
    cout << i << "th element is missing: ";
    unordered_set<string> scopy = s;
    for (int j = 0; j < t[i].length(); j++){
        if (scopy.find(string() + t[i][j]) != scopy.end() )
            {scopy.erase(string() + t[i][j]);
            }
    }
    display(scopy);
    cout << endl;
 }
    return 0;
}