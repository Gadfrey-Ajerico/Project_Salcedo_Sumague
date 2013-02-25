#include "../include/project.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <vector>
#include<math.h>
#include <cstdlib>

using namespace std;

project::project()
{
    //ctor
}

project::~project()
{
    //dtor
}

void project::multiples_3_and_5()
{
    int total = 0;

    for(int i = 0; i < 1000; i++){
        if(i%3 == 0 || i%5 == 0){
            total += i;
        }
    }
    cout << total << endl;
}

void project::even_fibonacce()
{
    int sum = 0, num1 = 1, num2 = 1, temp;


    while(num1 < 4000000){
        if(num1%2 == 0){
            sum += num1;
        }

        temp = num1;
        num1 += num2;
        num2 = temp;
    }
    cout << "The summation of all even numbers is " << sum << endl;
}

void project::largest_prime_factor()
{
    unsigned long long BIG = 600851475143LL;
    unsigned long long count;

    for(count = 2; count < BIG/2; count++)
    {
        if(0 == BIG % count)
        {
            BIG /= count;
        }
    }
    cout << "Biggest prime factor is " <<  BIG << endl;

}

void project::largest_palindrome_product()
{
      int numbers[2];
    int highest = 0;

    for(int i = 1000 -1 ; i > 100; i--)
    {
        numbers[0] = i;
        for(int k = 1000 - 1; k > 100; k--)
        {
            ostringstream convert;
            string palindrome;
            string final_palindrome = "";
            numbers[1] = k;
            int product = numbers[0]*numbers[1];
            convert << product;
            palindrome = convert.str();
            int range = palindrome.length();
            for(int x = 0; x < range; x++)
            {
                final_palindrome = palindrome.at(x) + final_palindrome;
                if(palindrome == final_palindrome)
                {
                    if(product > highest)
                    {
                        highest = product;
                    }
                }
            }
        }
    }
    cout << highest << endl;
}

void project::smallest_multiple()
{
    int i = 1;
    bool k = false;

    while ( !k )
    {
        for ( int j = 1; j <= 20; j++)
        {
            if ( i % j == 0 )
            {
                if ( j == 20 )
                {
                    k = true;
                    break;
                }
            }

            else
            {
                break;
            }
        }
        i++;
    }
    i--;

    cout << i << endl << endl;
}


void project::sum_square_diff(){
    int sum = 0;
    int sqr = 0;
    int temp = 0;

    for(int i = 1; i <= 100; i++){
        sum += i;
        temp = i*i;
        sqr += temp;
    }
    sum *= sum;
    cout << sum - sqr << endl;
}

void project::the_10001st_prime(){
    int x = 2;

    for(int i = 0; i < 10001; i++){
        bool c = 0;
        while(!c){
            for(int k = 2; k <= x; k++){
                if(k == x){
                    c = true;
                    break;
                }
                else if(x%k == 0){
                    break;
                }
            }
            x++;
        }
    }
    x--;
    cout << x << endl;
}

void project::largest_product_in_series()
{


    int myNum[1000];
    const int MAX    = 5;
    int greatestProd = 1;
    int temp         = 1;
    int k            = 1;

    string num = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";

    for(int i = 0; i < 1000; i++)
    {
        myNum[i] = (num[i] - 48);
    }

    while(k < 995)
    {
        temp = 1;
        for(int j = k; j < (k + MAX); j++)
        {
            temp *= myNum[j];
        }
        if (temp > greatestProd)
        {
            greatestProd = temp;
        }
    k++;
}

    cout << "Greatest Product: " << greatestProd << endl;
}

void project::special_pytho_triplet()
{
    int a=3;
    int b=4;
    int c=5;
    const int LIMIT = 1000;
    for(a = 3; a < b; a++)
    {
        for(b = 4; b < c; b++)
        {
            for(c = 5; c < LIMIT; c++)
            {
                if( (a*a + b*b == c*c) && (a + b + c == LIMIT) )
                {
                cout << "a: " << a << " b: " << b << " c: " << c << endl;
                cout << "Product a*b*c = " << a*b*c << endl;
                }
            }
        }
    }
}

void project::summation_of_primes(){
    long long sum = 0LL;
    int range = 2000000;

    for(int i = 2; i < range; i++){
        for(int k = 2; k <= i; k++){
            if(k == i){
                sum += i;
            }
            else if(i%k == 0){
                break;
            }
        }
    }
    cout << sum << endl;
}


void project::largest_product_grid()
{
int main();
{

    int array[20][20]=
    {
{ 8,  2, 22, 97, 38, 15,  0, 40,  0, 75,  4,  5,  7, 78, 52, 12, 50, 77, 91,  8},
{49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48,  4, 56, 62,  0},
{81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30,  3, 49, 13, 36, 65},
{52, 70, 95, 23,  4, 60, 11, 42, 69, 24, 68, 56,  1, 32, 56, 71, 37,  2, 36, 91},
{22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
{24, 47, 32, 60, 99,  3, 45,  2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
{32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
{67, 26, 20, 68,  2, 62, 12, 20, 95, 63, 94, 39, 63,  8, 40, 91, 66, 49, 94, 21},
{24, 55, 58,  5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
{21, 36, 23,  9, 75,  0, 76, 44, 20, 45, 35, 14,  0, 61, 33, 97, 34, 31, 33, 95},
{78, 17, 53, 28, 22, 75, 31, 67, 15, 94,  3, 80,  4, 62, 16, 14,  9, 53, 56, 92},
{16, 39,  5, 42, 96, 35, 31, 47, 55, 58, 88, 24,  0, 17, 54, 24, 36, 29, 85, 57},
{86, 56,  0, 48, 35, 71, 89,  7,  5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
{19, 80, 81, 68,  5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77,  4, 89, 55, 40},
{ 4, 52,  8, 83, 97, 35, 99, 16,  7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
{88, 36, 68, 87, 57, 62, 20, 72,  3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
{ 4, 42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18,  8, 46, 29, 32, 40, 62, 76, 36},
{20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74,  4, 36, 16},
{20, 73, 35, 29, 78, 31, 90,  1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57,  5, 54},
{ 1, 70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52,  1, 89, 19, 67, 48},
    };

    unsigned long long highest=0;
    unsigned long long test=0;

    int one=0;
    int two=0;
    int three=0;
    int four=0;

    int i=0;
    int j=0;

    //check for horizontal highest//
    for(i=0; i<20; i++)
    {

        for(j=0; j<17; j++)
        {
            test=(array[i][j]*array[i][j+1]*array[i][j+2]*array[i][j+3]);

            if(test>highest)
            {
                highest=test;

                one=array[i][j];
                two=array[i][j+1];
                three=array[i][j+2];
                four=array[i][j+3];
            }

        }//end of j for loop

    }//end of i for loop


    //test for vertical highest//
    for(i=0; i<17; i++)
    {

        for(j=0; j<20; j++)
     {

            test=(array[i][j]*array[i+1][j]*array[i+2][j]*array[i+3][j]);

            if(test>highest)
            {
                highest=test;
                one=array[i][j];
                two=array[i+1][j];
                three=array[i+2][j];
                four=array[i+3][j];
            }

     }//end of j for loop

    }//end of i for loop


    //check for diagonal-right highest//
    for(i=3; i<20; i++)
    {

        for(j=0; j<17; j++)
        {

        test=(array[i][j]*array[i-1][j-1]*array[i-2][j-2]*array[i-3][i-3]);

            if(test>highest)
            {
                highest=test;
                one=array[i][j];
                two=array[i-1][j-1];
                three=array[i-2][j-2];
                four=array[i-3][j-3];
            }

        }//end j for loop

    }//end i for loop


    //check for diagonal-left highest//
    for(i=0; i<17; i++)
    {

        for(j=0; j<17; j++)
        {

        test=(array[i][j]*array[i+1][j-1]*array[i+2][j-2]*array[i+3][j-3]);

            if(test>highest)
            {
                highest=test;
                one=array[i][j];
                two=array[i+1][j-1];
                three=array[i+2][j-2];
                four=array[i+3][j-3];
            }

        }//end j for loop

    }//end i for loop


    printf("%d\n", highest);
}
}

void project::divisible_triangular_number()
{
int numDivisors      = 0;
unsigned long triNum = 0;

int main();
{
    for(unsigned long i = 1; ; i++)
    {
        triNum = triNum + i;
        for(int j = 1; j < sqrt(triNum); j++)
        {
            if(0 == (triNum % j))
            {
                numDivisors += 2;
            }
        }
        if( triNum == (sqrt(triNum) * sqrt(triNum)))
        {
            numDivisors++;
        }
        if (500 < numDivisors)
        {
            cout << triNum << " has " << numDivisors << " divisors.\n";
            break;
        }
    numDivisors = 0;
    }

}


}

void project::largest_sum()
{

int numDivisors      = 0;
unsigned long triNum = 0;
int main();
for(unsigned long i = 1; ; i++)
    {
        triNum = triNum + i;
        for(int j = 1; j < sqrt(triNum); j++)
        {
            if(0 == (triNum % j))
            {
                numDivisors += 2;
            }
        }
        if( triNum == (sqrt(triNum) * sqrt(triNum)))
        {
            numDivisors++;
        }
        if (500 < numDivisors)
        {
            cout << triNum << " has " << numDivisors << " divisors.\n";
            break;
        }
    numDivisors = 0;
    }

}

void project::longest_collatz_sequence()
{
int main();
{
    unsigned long numTerms;
    unsigned long longestSeq = 1;
    unsigned long mostTerms  = 1;
    unsigned long count;
    unsigned long i;

    for(i = 999999; i > 1; i--)
    {
        numTerms = 1;
        count    = i;
        while (count > 1)
        {
            numTerms++;
            if (0 == count%2)
            {
                count = count/2;
            }
            else
            {
                count = 3 * count + 1;
            }
        }
        if (numTerms > mostTerms)
        {
            mostTerms  = numTerms;
            longestSeq = i;
        }
    }

    cout << "Longest sequence started with " << longestSeq << " which had " << mostTerms<< " terms.\n";

}

}

void project::diophantine_reciprocals_a()
{
int main();
{
    unsigned long rows         = 20;
    unsigned long blocks       = 40;
    int num[20];
    int denom[20];
    int pos                    = 0;
    unsigned long long top     = 1;
    unsigned long long bottom  = 1;

    for (int i = blocks; i > rows; i--)
    {
        num[pos] = i;
        denom[pos] = i - 20;
        pos++;
    }

    for(int i = 0; i < 20; i++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(0 == num[i] % denom[j])
            {
                num[i] = num[i] / denom[j];
                denom[j] = 1;
            }
        }
    }


    for(int i = 0; i < 20; i++)
    {
       top *= num[i];
       bottom *= denom[i];
    }

    cout << "Numerator:\n" << top;
    cout << "\nDenominator:\n" << bottom << endl;;

    cout << "Quotient:\n" << top / bottom << endl;


}

}

void project::power_digit_sum()
{
void doubleNumber(vector<int>&);
 int sum = 0;
    vector<int> v1;
    v1.push_back(2);

    for(int i = 0; i < 999; i++)
    {
        doubleNumber(v1);
    }

    cout << "2^1000 is ";
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] ;
        sum += v1[i];
    }
    cout << endl;
    cout << "\nSum of the digits is: " << sum << endl;

}

void doubleNumber(vector<int> & vect)
{
    int carry = 0;
    for(int i = 0; i < vect.size(); i++)
    {
        vect[i] = vect[i] + vect[i] + carry;
        if( 9 < vect[i] )   //need to carry
        {
            carry    = 1;
            vect[i] -=10;
            if ( vect.size() == (i+1) )    //last element
            {
                vect.push_back(carry);
                break;
             }
        }
        else
        {
            carry = 0;
        }
    }
}

void project::number_letter_counts()
{
    void addPoints(int* point, int* numb);
int sum     = 0;
   int num     = 0;
   int modPart = 0;
   int divPart = 0;

   for(num = 1; num <= 1000; num++)
       {
           if (num < 20)                    //If number is less than 20
           {
               addPoints(&sum, &num);
           }
           else if( (num > 19) && (num < 100) )  //If number is two digits
           {
               if(0 == (num%10) )
               {
                   addPoints(&sum, &num);
               }
               else
               {
                   modPart = num%10;
                   divPart = num - modPart;
                   addPoints(&sum, &modPart);
                   addPoints(&sum, &divPart);
               } //end if
           } // end if
           else if( ((num%100) >= 1) &&  ((num%100) < 20) ) //if last two

           {                                                // are between
           1 and 19;
               sum += 7;   // add seven points for the word 'hundred'
               sum += 3;   // add three points for the word 'and'
               modPart =  num%100;
               addPoints(&sum, &modPart);
               divPart = num/100;
               addPoints(&sum, &divPart);
           }
           else if(1000 == num)                //if it's 1000
           {
               sum += 11;                      // add 11 for the word 'one
           }
           else
           {
               if(0 == num%100)               // all other numbers
               {
                   sum += 7;                  // add seven points for
                                              // the word 'hundred'
                   divPart = num/100;
                   addPoints(&sum, &divPart); // add the number in the
                                              // hundreds column
               }
            else
               {                    sum +=
                   7;                  // seven points for the word
            modPart = num%10;
                   addPoints(&sum, &modPart);
                   divPart = num%100 - modPart;
                   addPoints(&sum, &divPart);
                   divPart = num/100;
                   addPoints(&sum, &divPart);
               }
           }
       } // end for
      cout << "\ntotal: " << sum << endl;
}

void addPoints(int* points, int* numb)
{
   if ( (1 == *numb) || (2 == *numb)  || (6 == *numb)  || (10 == *numb) )
       {
           *points += 3;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
   else if( (4 == *numb) || (5 == *numb)  || (9 == *numb) )
       {
           *points += 4;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
   else if( (3 == *numb) || (7 == *numb) || (8 == *numb) || (40 == *numb)
             ||
             (50 == *numb) || (60 == *numb) )
       {
           *points += 5;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
   else if( (11 == *numb) || (12 == *numb) || ( 20 == *numb) || (30 ==
              *numb) ||
              (80 == *numb) || (90 == *numb) )
       {
           *points += 6;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
   else if( (15 == *numb) || (16 == *numb) || (70 == *numb) )
       {
           *points += 7;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
    else if( (13 == *numb) || (14 == *numb) || (18 == *numb) || (19 ==
    *numb) )
       {
           *points += 8;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
    else if( (17 == *numb) ) //|| (14 == *numb) || (18 == *numb) )
       {
           *points += 9;
            //cout << "num: " << *numb << " sum: " << *points<< endl;
       }
}



void project :: max_path_sum_one()
{
    clock_t start = clock();
    int total = 0;
    unsigned int numbers[15][15];
    ifstream fi;

    fi.open("18.txt");

    for (int l=0;l<15;l++)
        for (int n=0;n<l+1;n++)
            fi >> numbers[l][n];

    fi.close ();

    for (int l=13;l>=0;l--)
        for (int n=0;n<l+1;n++)
            if (numbers[l+1][n]>numbers[l+1][n+1])
                numbers[l][n]+=numbers[l+1][n];
            else numbers[l][n]+=numbers[l+1][n+1];

    cout << numbers[0][0] << endl
         << "Process took " << (static_cast<double> (clock()) - start) / CLOCKS_PER_SEC << " seconds." << endl;
}


void project::counting_sundays()
{
    int checkDays(int*);
static int day   = 2;
    int year         = 1901;
    int month        = 1;
    int numSundays   = 0;
    int lastDay;
    int* ptrNumDays;

for(year = 1901; year < 2001; year++)
{
    for(month = 1; month < 13; month++)
    {
        if (31 == checkDays(&month))
        {
            ptrNumDays = new int[31];
            lastDay = 31;
        }
        else if(30 == checkDays(&month))
        {
            ptrNumDays = new int[30];
            lastDay = 30;
        }
        else
        {
            if( 0 != year%4 )
            {
                ptrNumDays = new int[28];
                lastDay = 28;
            }
            else
            {
                ptrNumDays = new int[29];
                lastDay = 29;
            }
        }
        for(int i = 0; i < lastDay; i++)
        {
            *(ptrNumDays+i) = day++;
            if(6 < day)
            {
                day -= 7;
            }
        }
        if(0 == *(ptrNumDays) )
        {
            numSundays++;
        }
        delete[] ptrNumDays;
    }
}
    cout << "Sundays: " << numSundays << endl;
}

int checkDays(int* m)
{
    if( (*m == 1) || (*m == 3) || (*m == 5) || (*m == 7) || (*m == 8) || (*m == 10) || (*m == 12) )
    {
        return 31;
    }
    if ( (*m ==2) )
    {
        return 28;
    }
    return 30;

}

void project::factorial_digit_sum ()
{
    void factorial(vector<int> &, int);
int number    = 0;
    int sumDigits = 0;                   //Sum of digits of number!
    vector<int>     v1;

    cout << "Enter a number: ";
    cin >> number;
    v1.push_back(number);                //Seed the first element

    for(int i = 2; i < number; i++)                  //Store i! in v1
    {
        factorial(v1, i);
    }

    cout << endl << "Sum of these digits: " << endl;
    for(int i = 0; i < v1.size(); i++)
    {
        sumDigits += v1[i];
    }
    cout << sumDigits << endl;
}

void carryNum(vector<int> & vect)
{
    int carry = 0;
    for(int i = 0; i < vect.size(); i++)
    {
        if( 9 < vect[i] )                        //Need to carry
        {
           if( i+1 == vect.size() )            //Last element
           {
              vect.push_back(vect[i]/10);
              vect[i] = vect[i]%10;
           }
           else
           {
               carry   = vect[i]/10;
               vect[i] = vect[i]%10;
               vect[i+1] += carry;
           }
        }
    }
}

void factorial(vector<int> & vect, int num)
{
    for (int j = 0; j < vect.size(); j++)
    {
        vect[j] = vect[j] * num;              //Calculate the carry value
    }                                     //after the multiplication cycle
    carryNum(vect);                          //finishes.
}


