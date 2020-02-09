
#include <iostream>
using namespace std;

void mystrcat(char destination[], const char source[])
{
    int i;
    int w;
    int j;
    int l;
    for(i = 0; destination[i] != '\0'; i++); // gets num before null - 3
    for(w = 0; source[w] != '\0'; w++); // - 3
    l = w;
    w = 0;
    for(j = 0; j < l; j++)
    {
        destination[i] = source[w];
        w++;
        i++;
    }
    destination[i] = '\0';
    
}
int main()
{
   char s[80] = "";
   char d[80] = "dog";
   mystrcat(s,d);
   cout << s << endl;
   return 0;
}

