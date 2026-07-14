#include <iostream>
using namespace std;

void checkToken(string text)
{
    string key[3]={"int","float","char"};
    string token = "";

    for(int i=0;i<=text.length();i++)
    {
        if(i==text.length()||text[i]==' ')
        {
            if(token!="")
            {
                int flag=0;


                for(int k=0;k<3;k++)
                {
                    if(token==key[k])
                    {
                        cout<<token<<":Keyword"<<endl;
                        flag=1;
                        break;
                    }
                }


                if(flag==0)
                {
                    int digit=1;

                    for(int k=0;k<token.length();k++)
                    {
                        if(token[k]<'0'||token[k]>'9')
                        {
                            digit=0;
                            break;
                        }
                    }

                    if(digit==1)
                    {
                        cout<<token<<":Numeric Constant"<<endl;
                        flag=1;
                    }
                }

                if(flag==0)
                {
                    if((token[0]>='a'&&token[0]<='z')||
                            (token[0]>='A'&&token[0]<='Z')||
                            token[0]=='_')
                    {
                        cout<<token<<":Valid Identifier"<<endl;
                    }
                    else
                    {
                        cout<<token<<":Lexical Error"<<endl;
                    }
                }

                token="";
            }
        }
        else
        {
            token +=text[i];
        }
    }
}

int main()
{
    int total;
    string input="";
    string word;

    cout<<"Enter total number of words: ";
    cin>>total;

    for(int i=0;i<total; i++)
    {
        cin>>word;
        input+=word;
        input+=" ";
    }

    cout<<endl;
    checkToken(input);

    return 0;
}
