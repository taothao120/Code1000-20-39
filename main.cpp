
#include <iostream>
#include <iomanip>
#include <cstring>
#include <algorithm>

int dem=0;
using namespace std;

struct student
{
    int ID;
    char name[30];
    char fname[30];
    char cell[30];
    double dob;
    char address[30];

    void get_data()
    {
      cout<<"Enter student's ID in  format(1XXXXXXXX): ";
      cin>>ID;
      cout<<"Enter student's name: ";
      fflush(stdin);
      gets(name);
      cout<<"Enter facutly : ";
      fflush(stdin);
      gets(fname);
      cout<<"Enter student's cell phone number: ";
      fflush(stdin);
      gets(cell); 
      cout<<"Enter student's Address(province): ";
      fflush(stdin);
      gets(address);
      //cin >> address;
      cout<<"Enter student's Date of Birth(year): ";
      cin >> dob;
    }
    void show_data()
    {
        cout <<setw(2)<<++dem<<setw(10)<<ID<<setw(12)<<name<<setw(10)<<fname<<setw(14)<<cell<<setw(12)<<dob<<setw(12)<<address<<endl;
    }
};

typedef student ST;

void get_data_all(ST st[],int n);
void show_data_all(ST *st,int n);
void Title();
void Menu();
void total_data(int &n);
void add_data(ST st[],int &n);
void remove_data(ST *st,int &n);
void update_data(ST *st,int n);
float Max(ST *st,int n);
void InMax(ST *st,int n);
float Min(ST *st,int n);
void InMin(ST *st,int n);
void arange_ID(ST *st,int n);
void arange_name(ST *st,int n);
void find_data(ST *st,int n);
void Press();

int main()
{
    int n = 0;
    char b;
    int choose;
    ST *st;
    st = new ST[n];
    do
    {
        Menu();
        cout <<"Enter selection: ";
        cin >>choose;
        switch (choose)
        {
            case 1:
                total_data(n);
                get_data_all(st, n);
                Press();
                break;
            case 2:
                show_data_all(st, n);
                Press();
                break;
            case 3:
                add_data(st, n);
                Press();
                break;
            case 4:
                remove_data(st, n);
                Press();
                break;
            case 5:
                InMax(st, n);
                Press();
                break;
            case 6:
                InMin(st, n);
                Press();
                break;
            case 7:
                find_data(st, n);
                Press();
                break;
            case 8: 
                arange_ID(st, n);
                Press();
                break;
            case 9:
                arange_name(st, n);
                Press();
                break;
        default:
            cout <<"Wrong! Please enter again!"<<endl;
            Press();
            break;
        }
        
        cout <<"Do you want to continue?(y/n): ";
        cin >>b;
        if(b == 'n')
            cout <<"Goodbye\n";
    } while (b =='y'||b == 'Y');
    
    delete[] st;
    return 0;
}

void get_data_all(ST st[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout <<"Nhap thong tin loai hoa thu "<<i+1<<": "<<endl;
        st[i].get_data();
    }
}

void Title()
{
    cout<<setw(3)<<"STT"<<setw(8)<<"ID"<<setw(12)<<"NAME"<<setw(14)<<"FACULTY"<<setw(12)<<"PHONE"<<setw(12)<<"BIRTH"<<setw(12)<<"ADDRESS"<< endl;
}

void show_data_all(ST *st, int n)
{
    cout <<"List of student: "<<endl;
    Title();
    for(int i=0;i<n;i++)
    {
        st[i].show_data();
    }
}

// ham them 1 sinh vien
void add_data(ST st[], int &n)
{
   int dem = 0;
    n++;
    cout <<"Enter student information: "<<endl;
    st[n-1].get_data();
}
// hàm xóa 1 sinh viên
void remove_data(ST *st, int &n)
{
    int so;
    int dem = 0;
    cout <<"Enter ID: ";
    cin >>so;
    for(int i=0; i<n;i++)
    {
        if(st[i].ID == so)
        {
           for(int j=i;j<n;j++)
                st[j] = st[j+1];
            dem++;
        }
    }
    if(dem == 0)
        cout <<"Wrong!"<<endl;
    else n--;
}

// hàm cập nhật thông tinh sinh viên

void update_data(ST *st, int n)
{
    int so;
    int res = 0;
    cout <<"Enter ID of student: ";
    cin >>so;
    for(int i=0; i<n;i++)
    {
        if(st[i].ID == so)
        {
           st[i].get_data();
           res++;
        }
    }
    if(res == 0)
        cout <<"Wrong!"<<endl;
}

// hàm trả về điểm cao nhất

float Max(ST *st, int n)
{
    int max = st[0].ID;
    for(int i=1;i<n;i++)
    {
        if(st[i].ID >max)
        {
            max = st[i].ID;
        }
    }
    return max;
}
// ham in ra sinh vien co diem trung binh cao nhat
void InMax(ST *st, int n)
{
    dem = 0;
    cout <<"Max: "<<endl;
    Title();
    for(int i=0;i<n;i++)
    {
        if(st[i].ID == Max(st, n) )
        {
            st[i].show_data();
        }
    }
}
// hàm trả về điểm min
float Min(ST *st, int n)
{
    int min = st[0].ID;
    for(int i=1;i<n;i++)
    {
        if(st[i].ID <min)
        {
            min= st[i].ID;
        }
    }
    return min;
}

// ham in ra sinh vien co diem trung binh thap nhat
void InMin(ST *st, int n)
{
    dem = 0;
    cout <<"Min: "<<endl;
    Title();
    for(int i=0;i<n;i++)
    {
        if(st[i].ID == Min(st, n) )
        {
            st[i].show_data();
        }
    }
}

// hàm sắp xếp sinh viên theo mã số sinh viên
void arange_ID(ST *st, int n)
{
    dem=0;
    cout <<"Arange: "<<endl;
    Title();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(st[i].ID > st[j].ID )
            {
                swap(st[i], st[j]);
            }
        }
    }
    show_data_all(st, n);
}



// ham nhap so luogn sinh vien
void total_data(int &n)
{
    do
    {
        cout <<"Enter total data: ";
        cin >>n;
        if(n<0)
            cout <<"Wrong!Please enter again!"<<endl;
    }while(n<0);
}

// tim kiem sinh vien thong qua ma so sinh vien
void find_data(ST *st, int n)
{
    int ms,res=0;
    cout <<"Enter ID of student: ";
    cin >>ms;
    for(int i=0;i<n;i++)
    {
        if(st[i].ID == ms)
        {
            st[i].show_data();
            res++;
        }
    }
    if(res == 0)
        cout <<"Student ID is not in the list!"<<endl;
}

// sắp xếp danh sách học sinh theo abc
void arange_name(ST *st,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		   if(strcmp(st[i].name,st[j].name)>0)
		  {
              swap(st[i], st[j]);
		  }
		}
	} 
    show_data_all(st, n);
}
void Menu(){
    cout<<" MENU "<<"\n";
    cout<<" 1. Create list"<<"\n";
    cout<<" 2. Show list "<<"\n";
    cout<<" 3. Add "<<"\n";
    cout<<" 4. Remove "<<"\n";
    cout<<" 5. Max"<<"\n";
    cout<<" 6. Min"<<"\n"; 
    cout<<" 7. Find"<<"\n"; 
    cout<<" 8. Arange by ID"<<"\n"; 
    cout<<" 9. Arange by name\n";
    cout<<"0. Thoat"<<endl;
}

void Press()
{
    system("pause");
    system("cls");
}



