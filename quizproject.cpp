#include<iostream>
#include<stdlib.h>
#include<fstream>

using namespace std;

class quiz
{

  public:
      string name;
      void info()
      {

          int m;
          ofstream file;
          file.open("quiz.text",ios::app);
           system("cls");
              cout<<"whats your name?"<<endl;
              cin>>name;
               system("cls");
              cout<<"whats your gender?"<<endl;
              cout<<"Male or Female ?"<<endl;
              cout<<"if male then press 2 otherwise press 3"<<endl;
              t:
              cin>>m;
               system("cls");
              if(m==2)
              {
                 cout<<"Are you ready to start the quiz?  Mr."<<name<<endl;
              }
              else if(m==3)
              {
                  cout<<"Are you ready to start the quiz?  Mrs."<<name<<endl;
              }
              else
              {
                  cout<<"sorry , you press wrong number"<<endl;
                  cout<<"sir, if you are  male then press 2 otherwise press 3"<<endl;
                  cout<<"press again"<<endl;
                  goto t;
              }



              cout<<"if are you ready please press 1 "<<endl;
              int n;
              tt:
              cin>>n;
               system("cls");
             if(n==1)
             {
                 cout<<"Good luck!!!"<<endl;
                 cout<<"you have to go back to menu and you have to press 2 from menu for playing quiz"<<endl;
             }
             else
             {
                cout<<"sorry , you press wrong number"<<endl;
                   cout<<"sir, if are you ready please press 1 "<<endl;
                   cout<<"press again:"<<endl;
                  goto tt;
             }
             file<<name<<endl;
             file<<m<<endl;
             file<<n<<endl;
             file.close();



      }
      void question()
      {
          int op;
          int c;
          ofstream file;
          file.open("quiz1.text",ios::app);
          c=0;
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          cout<<"Q1.Which of the following categories does C++ belong to?"<<endl<<endl;
          cout<<"1.Operating System"<<endl;
          cout<<"2.High-level programming language"<<endl;
          cout<<"3.low-level programming language"<<endl;
          cout<<"4.Compiler"<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==2)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 2 "<<endl<<endl;
          }
          file<<op<<endl;


          cout<<"Q2.Which command is correctly written?"<<endl<<endl;
          cout<<"1.cout >>"<<endl;
          cout<<"2.cin <<"<<endl;
          cout<<"3.cout <>"<<endl;
          cout<<"4.cin>>"<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==4)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }

          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 4 "<<endl<<endl;
          }
          file<<op<<endl;
          cout<<"Q3. What punctuation ends most lines of code?"<<endl<<endl;
          cout<<"1. . >>"<<endl;
          cout<<"2. , <<"<<endl;
          cout<<"3. ; "<<endl;
          cout<<"4. : "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==3)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 3 "<<endl<<endl;
          }
          file<<op<<endl;

          cout<<"Q4. Which of the following is a correct comment?"<<endl<<endl;
          cout<<"1. */ Comments */>> "<<endl;
          cout<<"2. ** Comment ** "<<endl;
          cout<<"3. /* Comment */ "<<endl;
          cout<<"4. { Comment } "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==3)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 3 "<<endl<<endl;
          }
          file<<op<<endl;

          cout<<"Q5. Which of the following is the boolean operator for logical-and?"<<endl<<endl;
          cout<<"1. & "<<endl;
          cout<<"2. | "<<endl;
          cout<<"3. || "<<endl;
          cout<<"4. && "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==4)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 4 "<<endl<<endl;
          }
          file<<op<<endl;

          cout<<"Q6. Which of the following shows the correct syntax for an if statement?"<<endl<<endl;
          cout<<"1. if expression "<<endl;
          cout<<"2. if {expression}"<<endl;
          cout<<"3. if (expression) "<<endl;
          cout<<"4. expression if "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==3)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 3 "<<endl<<endl;
          }
          file<<op<<endl;
          cout<<"Q7. Which of the following correctly declares an array?"<<endl<<endl;
          cout<<"1. int anarray[10]; "<<endl;
          cout<<"2. int anarray; "<<endl;
          cout<<"3. anarray{10}; "<<endl;
          cout<<"4. array anarray[10]; "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==1)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 1 "<<endl<<endl;
          }
          file<<op<<endl;

          cout<<"Q8. What is the index number of the last element of an array with 29 elements?"<<endl<<endl;
          cout<<"1. 29 "<<endl;
          cout<<"2. 28 "<<endl;
          cout<<"3. 0 "<<endl;
          cout<<"4. Programmer-defined "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;

          if(op==2)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 2 "<<endl<<endl;
          }
          file<<op<<endl;

          cout<<"Q9. Which is not a loop structure?"<<endl<<endl;
          cout<<"1. for "<<endl;
          cout<<"2. while "<<endl;
          cout<<"3. do while  "<<endl;
          cout<<"4. repeat until "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          cout<<"             Instruction For Quiz Test        "<<endl;
          cout<<"---------------------------------------------"<<endl;
          cout<<"            *you have total 10 question.*"<<endl;
          cout<<"            *Each question carries 10 marks.*"<<endl;
          cout<<"            *For every wrong answer you loss 3 marks.*"<<endl;
          cout<<"                *Time = 20 Minutes *"<<endl;
          cout<<"                 *Pass Marks = 60*"<<endl;
          cout<<"       * you have to give answer by pressing 1 or 2 or 3 or 4 *"<<endl<<endl;
          if(op==4)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 4 "<<endl<<endl;
          }
          file<<op<<endl;
           cout<<"Q10. C++ does not support the following"<<endl<<endl;
          cout<<"1. Multilevel inheritance "<<endl;
          cout<<"2. Hierarchical inheritance "<<endl;
          cout<<"3. Hybrid inheritance "<<endl;
          cout<<"4. None of the above. "<<endl<<endl;
          cout<<"what's your answer?"<<endl;
          cin>>op;
          system("cls");
          if(op==4)
          {
              cout<<"your answer is right;"<<endl;
              cout<<"you get 10 marks"<<endl<<endl;
              c++;
          }
          else
          {
              cout<<"sorry, your answer is wrong!"<<endl;
              cout<<"The correct answer is 4 "<<endl<<endl;
          }
          file<<op<<endl;

          cout<<"Right Answer:"<<c<<endl;
          cout<<"wrong Answer:"<<10-c<<endl;
          int wa;
          wa=10-c;
          int score=(c*10)-(wa*3);
          if(score>=90)
          {
              cout<<"your total Score is:"<<score<<endl;
              cout<<"you are Brilliant "<<endl;
              file<<score<<endl;
          }
         else if(score>=80)
          {
              cout<<"your total Score is:"<<score<<endl<<endl;
              cout<<"your performance is Awesome"<<endl<<endl;
              file<<score<<endl;
          }
           else if(score>=60)
          {
              cout<<"your total Score is:"<<score<<endl<<endl;
              cout<<"your are Average"<<endl<<endl;
              file<<score<<endl;

          }
           else
          {
              cout<<"your total Score is:"<<score<<endl<<endl;
              cout<<"your are fail"<<endl<<endl;
              cout<<"Better luck next time"<<endl<<endl;
              file<<score<<endl;
          }

          file<<op<<endl;
          file.close();


           ifstream get;
           int t=0;
            get.open("quiz1.text");
            //cout<<"Option"<<endl;
            while(!get.eof())
            {
                if(get>>op)
                {
                    //cout<<op<<endl;
                    t++;
                }
            }
            cout<<"Number of records: "<<t<<endl;
            get.close();


    }

};


int main()
{
    char ch;
    quiz o1,o2,o3,o4;

    cout<<endl<<endl<<endl;
    cout<<"                       ' Project Name: Quiz Test on c++ '"<<endl<<endl;
    cout<<"                     **** WElCOME TO OUR PROJECT ****"<<endl;
    cout<<"          ----------------------------------------------------"<<endl;
    cout<<"                          Prepared by                       "<<endl;
    cout<<"         ........................................................."<<endl;
    cout<<"          Shakib Hasan Readoy"<<"\t"<<"Tasnias Anjum Rifah"<<"\t"<<"Nishat tasnim"<<endl;
    cout<<"          Sunjeeda Nody"<<"\t"<<"       Rakibul islam"<<"\t"<<"       Monir Hossain"<<endl<<endl<<endl;

    do
    {
        cout<<"press 1 to 3 for accessing menu:"<<endl;
        cout<<"press 1 for start:"<<endl;
        cout<<"press 2 for give quiz test:"<<endl;
        cout<<"press 3 for exit :"<<endl;
        cout<<"press any key for menu again:"<<endl;
        cout<<"your option:";
        cin>>ch;
         system("cls");
        switch(ch)
        {
        case '1':
            o1.info();
            break;
            case '2':
            o2.question();
            break;
           default:
            cout<<"Thank you for Participating Quiz"<<endl;

        }
    }
    while(ch!='3');


    return 0;

}
