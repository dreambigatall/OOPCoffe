#include <iostream>
#include <string>
using namespace std;
class machine {
public:
void setType();
void initalizer();
void reportecalc();
void reporter();
void moneyCalc();
void message();
private:
double milk;
double water;
double sugare;
double coffe;
double moneyq, moneyd , moneyn, moneyp;
double money;
string type;
char Type;
double banker;
};

int main() {
  cout<<"welcome To our coffe machine"<<endl;
  machine coffe;
  string repo;
 // bool dg=false;
  coffe.initalizer();
  string df;
  while(df!="off")
    {  coffe.setType();
      // coffe.initalizer();
       coffe.reportecalc();
    // coffe.moneyCalc();
     int nop;
     cout<<"enter 1 to showe the rport else 0 ";
     cin>>nop;
     if(nop == 1)
     { cout<<"enter 'report' to show the reporte ";
     cin>>repo;
     if(repo == "report")
       coffe.reporter();}
     else
       cout<<"Ok Boose"<<endl;
     
    cout<<"Enter 'oN' to continu ";
     cin>>df;
  
  
  
}
}
void  machine::setType()
{
  cout<<"enter your choose from the list "<<endl<<"1.latte"<<endl<<"2.cappcino"<<endl<<"3.espreso"<<endl;
  cin>>type;
  if(type == "latte")
    Type='l';
  else if(type == "cappcino")
   Type='c';
  else if(type == "espreso")
    Type='e';
}
void machine::initalizer()
{
  cout<<"Enter the amount of water ";
  cin>>water;
  cout<<"Enter the amount of milk ";
  cin>>milk;
  cout<<"Enter the amount of coffe ";
  cin>>coffe;
  cout<<"Entr the amount of sugare ";
  cin>>sugare;
  money=0.0;
  banker=0.0;
  cout<<milk<<"ml milk\n"<<water<<"ml water\n"<<sugare<<"g sugare\n"<<coffe<<"g coffe\n";
}
void machine::reportecalc()
{
  switch(Type)
    {
      case 'l':if (milk<25 || water < 50  )
        cout<<"WE have no enoug resource"<<endl;
         else 
           {milk-=25;
            water-=50;
            sugare-=10;
           machine::moneyCalc();}
      break;
      case 'c': if((milk < 150 || water < 100 ) || (sugare < 30 || coffe < 40))
             cout<<"we have no enouge resource"<<endl;
         else{
           milk-=150;
           water-=100;
           sugare-=30;
           coffe-=40;
           machine::moneyCalc();
         }
      break;
      case 'e': if((milk < 100 || water < 75 ) || (sugare < 20 || coffe < 25))
           cout<<"We have no enouge resorce"<<endl;
           else
             {  
               milk-=100;
               water-=75;
               sugare-=20;
               coffe-=25;
             
         machine::moneyCalc();  }
      break;
      default: cout<<"Please Insert YOure chooise a gain"<<endl;
    }
}
void machine::moneyCalc()
{  
  double retur;
  cout<<"enter youre qurter cent ";
  cin>>moneyq;
  cout<<"enter your dimes cent ";
  cin>>moneyd;
  cout<<"enter your nickel cent ";
  cin>>moneyn;
  cout<<"enter your peni cent ";
  cin>>moneyp;
  money=0;
  money=(0.25 * moneyq) + (0.10 * moneyd)  + (0.05 * moneyn) + (0.01 * moneyp);
  switch(Type)
    {
      case 'l': if(money == 1.75)
        cout<<"The money you enter is "<< money << "is enoug to buy "<<type<<endl;
        else if (money > 1.75)
        {
          retur=money - 1.75;
          money=money - retur;
          cout<<"you have $"<<retur<<" on return cent";
          banker+=money;
          
        }
        else if (money < 1.75)
          cout<<"pleas insert more coin"<<endl;
      break;
      case 'c': if(money == 3.00)
              cout<<"The money you enter is "<< money << "is enoug to buy "<<type<<endl;
             else if (money > 3.00)
             { retur=money - 3.00;
             money=money - retur;
             cout<<"you have $"<<retur<<" on return cent";
              banker+=money;
               
             }
           else if (money < 3.00)
             cout<<"Pleas insert more coin"<<endl;
      break;
      case 'e': if(money == 2.25)
                  cout<<"The money you enter is "<< money << "is enoug to buy "<<type<<endl;
                else if (money > 2.25)
                { retur=money - 2.25;
                  money-= retur;
                 
                   cout<<"you have $"<<retur<<" on return cent";
                 banker+=money;
                
                }
                       else if (money < 2.25)
                           cout<<"pleas insert more coin"<<endl;
              
        break;
      default:cout<<"please choose you choiise corectly"<<endl;

          
    }
}

void machine::reporter()
{
  cout<<"The Whole Report of Machine"<<endl;
  cout<<"milk ml"<<milk<<endl;
  cout<<"water ml"<<water<<endl;
  cout<<"sugare gm"<<sugare<<endl;
  cout<<"coffe gm"<<coffe<<endl;
  cout<<"money $"<<banker<<endl;
}