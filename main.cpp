#include<iostream>
#include<cmath>

using namespace std;

int Check_Number (int n);
void Find_Divisor(int n);
void Sum_Divisor(int x);
void Mul_Divisor(int x);
void Count_Divisor(int x);
void List_Odd_Divisor(int x);
void List_Even_Divisor(int x);
void Mul_Odd_Divisor(int x);
void Mul_Even_Divisor(int x);
void Sum_Little_Divisor(int x);
void Max_Odd_Divisor(int x);
void Check_Perfect_Number(int x);
void Check_Prefix_Number(int x);
void Check_Square_Number( int x);
void Square_n( int x);

int main(){
  int x, i, n;
  cout << " Find Greatest common divisor\n";
  // Find_Divisor(x);
  // Sum_Divisor(x);
  // Mul_Divisor(x);
  // Count_Divisor(x);
  // List_Odd_Divisor(x);
  // List_Even_Divisor(x);
  // Mul_Odd_Divisor(x);
  // Mul_Even_Divisor(x);
  // Sum_Little_Divisor(x);
  // Max_Odd_Divisor(x);
  // Check_Perfect_Number(x);
  // Check_Prefix_Number(x);
  // Check_Square_Number( x);
  Square_n(x);
  return 0;

}

int Check_Number (int n){
    do
  {
    cout << " Enter the positive number: ";
    cin >> n;
    if (n <= 0)
    {
      cout << n << " is not positive number. Please enter again!!\n";
    }
  } while ( n <= 0);
  return n;
  
}

// Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
// void Find_Divisor(int x){
//   int a = Check_Number(x);
//   for (int i = 1; i <= a; i++)
//   {
//     if ( ( a % i) == 0)
//     {
//       cout << i << " ";
//     }
    
//   }
// }

// Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n
// void Sum_Divisor(int x){
//   int a = Check_Number(x);
//   int s = 0;
//   for (int i = 1; i <= a; i++)
//   {
//     if ( ( a % i) == 0)
//     {
//       s += i;
//     }
//   }
//   cout << s ;
// }

// Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n
// void Mul_Divisor(int x){
//   int a = Check_Number(x);
//   int s = 1;
//   for (int i = 1; i <= a; i++)
//   {
//     if ( ( a % i) == 0)
//     {
//       s *= i;
//     }
//   }
//   cout << s ;
// }

// Bài 23: Đếm số lượng “ước số” của số nguyên dương n
// void Count_Divisor(int x){
//   int a = Check_Number(x);
//   int s = 0;
//   for (int i = 1; i <= a; i++)
//   {
//     if ( ( a % i) == 0)
//     {
//       s += 1;
//     }
//   }
//   cout << s ;
// }

// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
// void List_Odd_Divisor(int x){
//   int a = Check_Number(x);
//   for (int i = 1; i <= a; i++)
//   {
//     if ( (( a % i) == 0) && ((i % 2) != 0 ))
//     {
//        cout << i << " ";
//     }
//   }
// }

// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
// void List_Even_Divisor(int x){
//   int a = Check_Number(x);
//   for (int i = 1; i <= a; i++)
//   {
//     if ( (( a % i) == 0) && ((i % 2) == 0 ))
//     {
//        cout << i << " ";
//     }
//   }
// }

// Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
// void Mul_Odd_Divisor(int x){
//   int a = Check_Number(x);
//   int S = 1;
//   for (int i = 1; i <= a; i++)
//   {
//     if ( (( a % i) == 0) && ((i % 2) != 0 ))
//     {
//        S *= i;
//     }
//   }
//   cout << S;
// }

// Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
// void Mul_Even_Divisor(int x){
//   int a = Check_Number(x);
//   int S = 1;
//   for (int i = 1; i <= a; i++)
//   {
//     if ( (( a % i) == 0) && ((i % 2) == 0 ))
//     {
//        S *= i;
//     }
//   }
//   cout << S;
// }

// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
// void Sum_Little_Divisor(int x){
//   int a = Check_Number(x);
//   int s = 0;
//   for (int i = 1; i < a; i++)
//   {
//     if ( ( a % i) == 0)
//     {
//       s += i;
//     }
//   }
//   cout << s ;
// }

// Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
// void Max_Odd_Divisor(int x){
//   int a = Check_Number(x);
//   int max = 0;
//   for (int i = 1; i <= a; i++)
//   {
//     if ( (( a % i) == 0) && ((i % 2) != 0 ))
//     {
//        max = i;
//     }
//   }
//   cout << max;
// }

// Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
// void Check_Perfect_Number(int x){
//   int a = Check_Number(x);
//   int s = 0;
//   for (int i = 1; i < a; i++)
//   {
//     if ( (a % i ) == 0)
//     {
//       s += i;
//     }
//   }
//   if ( s == a)
//   {
//     cout << a << " is a perfect number";
//   } 
//   else {cout << a << " is not a perfect number";}
// }

// Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
// void Check_Prefix_Number(int x){
//   int a = Check_Number(x);
//   for (int i = 2; i < a; i++)
//   {
//     if ( (a % i ) == 0)
//     {
//      cout << a << " is not a prefix number";
//      break;
//     }
//   }
//   cout << a << " is a prefix number";
 
// }

// Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
// void Check_Square_Number( int x){
//   int a = Check_Number(x);
//   if ( sqrt((float) a) == (int)sqrt((float) a))
//   {
//     cout << a << " is a  square number";
//   }
//   else cout << a << " is not a square numer";
// }


// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
void Square_n( int x){
  int a = Check_Number(x);
  int s = 2 + sqrt(2), t;
  for (int i = 0; i < a + 1 ; i++)
  {
    t = sqrt(s);
    s = t;
  }
  cout << t ;
  
}

// Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dấu căn
// Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
// Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
// Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
// Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn