//using namespace std;

/* count digits, white space, others */

/* TODO: (1) fix all errors;
*       (2) add code for painting histogram in console,
*           cf. picture in https://en.wikipedia.org/wiki/Histogram
*
*/
#include "header.h"

int main()
{
	string src("12 plus 45 minus 39 is 18\n");
	int i = 0, nwhite, nother;
	const int size = 10;
	int ndigit[size];
	nwhite = nother = 0;

	char c;
	while (i <= src.length() && (c = src[i++]) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' && c == '\n' && c == '\t')
			++nwhite;
		else
			++nother;

		std::cout << "source string: " << src << std::endl << "digits =";
		for (int i = 0; i < size; ++i)
			cout << " " << ndigit[i];

		cout << ", white space = " << nwhite
			<< ", other = " << nother << std::endl; 

		cout << endl << endl << endl;
		int a[] {1, 2, 6, 7, 5};
		my_qsort(a, 5);
		for (int i = 0; i < 5; i++)
			cout << a[i] << ' ';
}