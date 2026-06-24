#include <iostream>
using namespace std;

void numeric()
{
    string s;
    bool flag = true;
    cout << "Enter Your Input: ";
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]<'0'||s[i]>'9')
        flag = false;
    }
    if(flag)
        cout << "Numeric Constant";
    else
        cout << "Not Numeric";
}

void op()
{
    string exp;
    cout << "Enter Expression: ";
    cin >> exp;
    for(int i=0;i<exp.length();i++)
    {
        if(exp[i]=='+' || exp[i]=='-' ||
           exp[i]=='*' || exp[i]=='/' ||
           exp[i]=='%' || exp[i]=='=')
        {
            cout<<"Operator: "<<exp[i]<<endl;
        }
    }
}

void comment()
{
    cin.ignore();
    string s;
    cout<<"Enter Comment: ";
    getline(cin,s);

    if(s[0]=='/'&&s[1]=='/')
        cout<<"Single Line Comment";
    else if(s[0]=='/' && s[1]=='*')
        cout<<"Multiple Line Comment";
    else
        cout<<"Not Comment";
}

void identifier()
{
    string s;
    bool ok=true;
    cout<<"Enter Identifier: ";
    cin>>s;

    if(!((s[0]>='A'&&s[0]<='Z')||
         (s[0]>='a'&&s[0]<='z')||
         s[0]=='_'))
    {
        ok=false;
    }
    for(int i=1;i<s.length();i++)
    {
        if(!((s[i]>='A'&&s[i]<='Z')||
             (s[i]>='a'&&s[i]<='z')||
             (s[i]>='0'&&s[i]<='9')||
             s[i]=='_'))
        {
            ok=false;
        }
    }
    if(ok)
        cout<<"Valid Identifier";
    else
        cout<<"Invalid Identifier";
}

void average()
{
    int n,sum=0;
    cout<<"Enter The  Size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"Average="<<(float)sum/n<<endl;
}

void minmax()
{
    int n;
    cout<<"Enter The Size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min=a[0];
    int max=a[0];

    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }

    cout<<"Minimum="<<min<<endl;
    cout<<"Maximum="<<max<<endl;
}

void fullname()
{
    string first,last;
    cout<<"Enter First Name:";
    cin>>first;
    cout<<"Enter Last Name:";
    cin>>last;
    cout<<"Full Name="<<first<<" "<<last<<endl;
}

int main()
{
    int choice;
    do
    {
        cout << "--MENU--\n";
        cout << "1. Numeric Constant\n";
        cout << "2. Operator Check\n";
        cout << "3. Comment Check\n";
        cout << "4. Identifier Check\n";
        cout << "5. Average of Array\n";
        cout << "6. Min Max of Array\n";
        cout << "7. Full Name\n";
        cout << "8. Exit The Menu\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                numeric();
                break;
            case 2:
                op();
                break;
            case 3:
                comment();
                break;
            case 4:
                identifier();
                break;
            case 5:
                average();
                break;
            case 6:
                minmax();
                break;
            case 7:
                fullname();
                break;
            case 8:
                cout<<"Program Ended";
                break;
            default:
                cout<<"Invalid Choice";
        }

    } while(choice != 8);

    return 0;
}
