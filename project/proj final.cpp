#include<cstring>
#include<iostream>
#include<conio.h>
#include<vector>
#include <ctime>
#include<windows.h>
#include<sstream>
#include<fstream>
#include<cstdlib>

using namespace std;

// work
class loginManager{
    private:
        bool accessGranted;
    public:
    string Usernameattempt;
    char Passwordattempt[32];
    char a;
    loginManager(){
        accessGranted=0;
    }
    void login(){
cout<<"\t\t\t\t\tWELCOME TO RESTAURANT MANAGEMENT SYSTEM\n";
system("pause");
system("cls");
        string line;
        string line1;
        string line2;
        string line3;
        ifstream fin;
        ofstream  fout;
        fin.open("username.txt");

cout<<"\n\n\t\t\t\t\t\t RESTAURANT MANAGEMENT SYSTEM \n\n";
cout<<"\t\t\t\t\t\t------------------------------";
cout<<"\n\t\t\t\t\t\t\t LOGIN PAGE \n";
cout<<"\t\t\t\t\t\t------------------------------\n";
cout << "\t\t\t\t\t\tUSERNAME: ";
cin>>Usernameattempt;
        if(fin.is_open()){
           while(!fin.eof()){
                 getline(fin,line);
                 getline(fin,line1);
                 getline(fin,line2);
                 getline(fin,line3);
        if(line==Usernameattempt||line1==Usernameattempt||line2==Usernameattempt||line3==Usernameattempt){
        goto label2;
               }
        else{
            cout<<"Incorrect Username"<<endl;
            cout<<"Try Again"<<endl;
            system("cls");
            login();
        }
        }
         label2:
        int i=0;
        string pas;
        string pass1;
        string pass2;
        string pass3;
        ifstream fpin;
        ofstream  fpout;
        fpin.open("password.txt");
          label:
cout << "\t\t\t\t\t\tPASSWORD: ";
//cin>>Passwordattempt;
for( i=0;;)//infinite loop
    {
        a=getch();//stores char typed in a
        if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
            //check if a is numeric or alphabet
        {
            Passwordattempt[i]=a;//stores a in pass
            ++i;
            cout<<"*";
        }
        if(a=='\b'&&i>=1)//if user typed backspace
            //i should be greater than 1.
        {
            cout<<"\b \b";//rub the character behind the cursor.
            --i;
        }
        if(a=='\r')//if enter is pressed
        {
            Passwordattempt[i]='\0';//null means end of string.
            break;//break the loop
        }
    }
        if(fpin.is_open()){
           while(!fpin.eof()){
            getline(fpin,pas);
            getline(fpin,pass1);
            getline(fpin,pass2);
            getline(fpin,pass3);
            if(pas==Passwordattempt||pass1==Passwordattempt||pass2==Passwordattempt||pass3==Passwordattempt){
                cout<<endl<<"\t\t\t\t\t\t\tWelcome!!!"<<endl;
                cout<<"\t\t\t\t\t\t\tLogin is Successful"<<endl;
            }
            else{
                cout<<"\nIncorrect Password"<<endl;
                cout<<"Try Again"<<endl;
                system("cls");
                goto label;
            }
            }
        fout.close();
        }
        fpout.close();
        }
        }
};



//ending


struct st{
    char name[30];
    float price;
};

class Starter;
class chinese;
class desi;
class BBQ;
class friedchic;
class burger;
class sandwich;
class steak;
class pasta;
class pakistani;// : public BBQ , public desi;
class fastfood;// : public burger , public sandwich , public friedchic;
class continental;// : public steak , public pasta;
class pizza;
class addon;
class menu;// : public Starter , public fastfood , public continental , public pakistani , public chinese;
class cart;
class user;

void operator ++ (st a);
void addit(st a, string in, int pr, string nam);

class Starter{
    st corn;
    st hot;
    st fingerfish;
    st salad;
    st wings;
public:
    friend void setwhatyouwant();
    int disp_starter(){
        system("CLS");
        char ch;
        int num;

        cout<<endl<<"S T A R T E R S :"<<endl<<endl;
        cout<<"\t1."<<corn.name<<"\tRs."<<corn.price<<endl;
        cout<<"\t2."<<hot.name<<"\tRs."<<hot.price<<endl;
        cout<<"\t3."<<fingerfish.name<<"\tRs."<<fingerfish.price<<endl;
        cout<<"\t4."<<salad.name<<"\t\tRs."<<salad.price<<endl;
        cout<<"\t5."<<wings.name<<"\t\tRs."<<wings.price<<endl;

       ch=getch();

			switch(ch){

				case '1':
					    system("CLS");
					    cout<<corn.name<<":"<<endl;
						cout<<"\tPure chicken stock with chicken minced, and bits of corn."<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                ++corn;
								cout<<"\rYou have added "<<corn.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '2':
                        system("CLS");
					    cout<<hot.name<<":"<<endl;
						cout<<"\tMade with chicken broth, with chunks of chickens and variety vegetable along with tangy taste.\n"<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++hot;
								cout<<"\rYou have added "<<hot.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '3':
                        system("CLS");
					    cout<<fingerfish.name<<":"<<endl;
						cout<<"\tExtra crispy boneless fish strips coated and deep fried to perfection. Served with tarter sauce and fries."<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++fingerfish;
								cout<<"\rYou have added "<<fingerfish.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '4':
                        system("CLS");
					    cout<<salad.name<<":"<<endl;
   						cout<<"\tDiced Potatos with mixed vegetables plus sprinkle of spices and flloded with sauce and chopped meet. Every bite, extra might\n"<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++salad;
								cout<<"\rYou have added "<<salad.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '5':
                        system("CLS");
					    cout<<wings.name<<":"<<endl;

						cout<<"\t6 Pcs of mouth watering Crispy, flavorful chicken wings deep fried to perfection, served with fries and sauce.\n"<<endl;
						cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++wings;
								cout<<"\rYou have added "<<wings.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                 default:
                        if(ch==0x0d){
                            return -1;}

                        //cout<<"Please enter correct serial number (1-5)."<<endl;
                            return 0;
			}
    }

    st getcorn()const { return corn; }
    st gethot()const {  return hot;  }
    st getfin()const {  return fingerfish; }
    st getsalad()const{ return salad;}
    st getwings()const{ return wings;}

    Starter(){
        strcpy(corn.name,"Chicken Corn Soup");
        corn.price=280;
        strcpy(hot.name,"Hot and Sour Soup");
        hot.price=280;
        strcpy(fingerfish.name,"Crunchy Finger Fish");
        fingerfish.price=790;
        strcpy(salad.name,"Russian Salad");
        salad.price=800;
        strcpy(wings.name,"Chicken Wings");
        wings.price=375;
    }

      void setcorn(){
        cout<<"Enter new price\t"<<endl;
        cin>>corn.price;}
      void sethot(){
        cout<<"Enter new price\t"<<endl;
        cin>>hot.price;}
      void setfish(){
        cout<<"Enter new price\t"<<endl;
        cin>>fingerfish.price;}
      void setsalad(){
        cout<<"Enter new price\t"<<endl;
        cin>>salad.price;}
      void setwings(){
        cout<<"Enter new price\t"<<endl;
        cin>>wings.price;}


};


class burger{

protected:
    st zinger;
    st bbq;
    st jalapeno;
    st grilled;
    st royal;

public:
    friend void setwhatyouwant();
    burger(){
        strcpy(zinger.name,"Crispy Zinger Burger");
        zinger.price=390;

        strcpy(bbq.name,"BBQ Chicken Burger");
        bbq.price=440;

        strcpy(jalapeno.name,"Jalapeno Burger");
        jalapeno.price=570;

        strcpy(grilled.name,"Grilled Burger");
        grilled.price=550;

        strcpy(royal.name,"Chicken Royal Burger");
        royal.price=620;
	}

    st getzinger()const { return zinger; }
    st getbbq()const {  return bbq;  }
    st getjalapeno()const {  return jalapeno; }
    st getgrilled()const{ return grilled;}
    st getroyal()const{ return royal;}

	  void setzinger(){
        cout<<"Enter new price\t"<<endl;
        cin>>zinger.price;}
      void setbbq(){
        cout<<"Enter new price\t"<<endl;
        cin>>bbq.price;}
      void setjalapeno(){
        cout<<"Enter new price\t"<<endl;
        cin>>jalapeno.price;}
      void setgrilled(){
        cout<<"Enter new price\t"<<endl;
        cin>>grilled.price;}
      void setroyal(){
        cout<<"Enter new price\t"<<endl;
        cin>>royal.price;}
};


class sandwich{

    st club;
    st grillsand;
    st bbqsand;
    st malai;
    st beef;

public:
    friend void setwhatyouwant();
    sandwich(){
            strcpy(club.name,"Club Sandwich");
            club.price=390;

            strcpy(grillsand.name,"Grilled Sandwich");
            grillsand.price=520;

            strcpy(bbqsand.name,"BBQ Club Sandwich");
            bbqsand.price=440;

            strcpy(malai.name,"Malai Club Sandwich");
            malai.price=470;

            strcpy(beef.name,"Beef Steak Sandwich");
            beef.price=720;
        }

    int disp_sandwich(){

        system("CLS");
                char ch;
                int num;

        cout<<endl<<endl<<"S A N D W I C H E S :"<<endl<<endl;
        cout<<"\t1."<<club.name<<"\t\t\tRs."<<club.price<<endl;
        cout<<"\t2."<<grillsand.name<<"\t\tRs."<<grillsand.price<<endl;
        cout<<"\t3."<<bbqsand.name<<"\t\tRs."<<bbqsand.price<<endl;
        cout<<"\t4."<<malai.name<<"\t\tRs."<<malai.price<<endl;
        cout<<"\t5."<<beef.name<<"\t\tRs."<<beef.price<<endl;

        ch=getch();
                    switch(ch){

                        case '1':
                                system("CLS");
                                cout<<club.name<<":"<<endl;
                                cout<<"\tSandwich bread stuffed with julienne cut chicken along with egg and vegetables."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++club;
                                        cout<<"\rYou have added "<<club.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '2':
                                system("CLS");
                                cout<<grillsand.name<<":"<<endl;
                                cout<<"\tSandwich bread stuffed with seasoned grilled chicken topped with american sauce along with egg and vegetables."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++grillsand;
                                        cout<<"\rYou have added "<<grillsand.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '3':
                                system("CLS");
                                cout<<bbqsand.name<<":"<<endl;
                                cout<<"\tSandwich bread with chicken BBQ bihari boti along with egg and vegetables."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++bbqsand;
                                        cout<<"\rYou have added "<<bbqsand.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '4':
                                system("CLS");
                                cout<<malai.name<<":"<<endl;
                                cout<<"\tSandwich bread with chicken Malai boti along with egg and vegetables."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++malai;
                                        cout<<"\rYou have added "<<malai.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '5':
                                system("CLS");
                                cout<<beef.name<<":"<<endl;
                                cout<<"\tA perfectly grilled fillet of steak sliced and topped with ice berg, cheese slice , tomato, onion & bbq sauce in a sub bun"<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++beef;
                                        cout<<"\rYou have added "<<beef.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        default:
                                    if(ch==0x0d){
                                        return -1;}

                                    //cout<<"Please enter correct serial number (1-5)."<<endl;
                                        return 0;
                    }



    }


    st getclub()const { return club; }
    st getgrillsand()const {  return grillsand;  }
    st getbbqsand()const {  return bbqsand; }
    st getmalai()const{ return malai;}
    st getbeef()const{ return beef;   }

      void setclub(){
        cout<<"Enter new price\t"<<endl;
        cin>>club.price;}
      void setbbqsand(){
        cout<<"Enter new price\t"<<endl;
        cin>>bbqsand.price;}
      void setgrillsand(){
        cout<<"Enter new price\t"<<endl;
        cin>>grillsand.price;}
      void setmalai(){
        cout<<"Enter new price\t"<<endl;
        cin>>malai.price;}
      void setbeef(){
        cout<<"Enter new price\t"<<endl;
        cin>>beef.price;}

};



class friedchic{

protected:
    st crispy;
    st spicy;
    st cheesy;

public:
friend void setwhatyouwant();
    friedchic(){
        strcpy(crispy.name,"Crispy Broast");
        crispy.price=390;

        strcpy(spicy.name,"Spicy Juicy Broast");
        spicy.price=450;

        strcpy(cheesy.name,"Cheesy Broast");
        cheesy.price=470;
    }

    st getcrispy()const { return crispy; }
    st getspicy()const {  return spicy;  }
    st getcheesy()const {  return cheesy; }

      void setcrispy(){
        cout<<"Enter new price\t"<<endl;
        cin>>crispy.price;}
      void setspicy(){
        cout<<"Enter new price\t"<<endl;
        cin>>spicy.price;}
      void setcheesy(){
        cout<<"Enter new price\t"<<endl;
        cin>>cheesy.price;}

};


class fastfood : public burger , public friedchic
{
    public:
        fastfood() : burger () , friedchic () {}

        int disp_fastfood(){
            system("CLS");
                char ch;
                int num;
                cout<<endl<<"B U R G E R S :"<<endl<<endl;
                cout<<"\t1."<<zinger.name<<"\t\tRs."<<zinger.price<<endl;
                cout<<"\t2."<<bbq.name<<"\t\tRs."<<bbq.price<<endl;
                cout<<"\t3."<<jalapeno.name<<"\t\tRs."<<jalapeno.price<<endl;
                cout<<"\t4."<<grilled.name<<"\t\tRs."<<grilled.price<<endl;
                cout<<"\t5."<<royal.name<<"\t\tRs."<<royal.price<<endl;
                cout<<endl<<endl<<"F R I E D   C H I C K E N :"<<endl<<endl;
                cout<<"\t6."<<crispy.name<<"\t\t\tRs."<<crispy.price<<endl;
                cout<<"\t7."<<spicy.name<<"\t\tRs."<<spicy.price<<endl;
                cout<<"\t8."<<cheesy.name<<"\t\t\tRs."<<cheesy.price<<endl;

                ch=getch();
                    switch(ch){

                        case '1':
                                system("CLS");
                                cout<<zinger.name<<":"<<endl;
                                cout<<"\tBreast Fillet Chicken Coated In Zinger Flavoring Combined With Ice Berg And Foods Inn Special Sauce. Served With Fries & Coleslaw"<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++zinger;
                                        cout<<"\rYou have added "<<zinger.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '2':
                                system("CLS");
                                cout<<bbq.name<<":"<<endl;
                                cout<<"\tCharcoal Grilled Cubes Of Chicken On Bed Of Ice Berg Topped With Smokey Bbq Sauce. Served With Fries & Coleslaw."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++bbq;
                                        cout<<"\rYou have added "<<bbq.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '3':
                                system("CLS");
                                cout<<jalapeno.name<<":"<<endl;
                                cout<<"\tCrispy Chicken Boneless Fillet Topped With Jalapenos, Home Made Sauce And Cheese Slice. Served With Fries & Coleslaw."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++jalapeno;
                                        cout<<"\rYou have added "<<jalapeno.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '4':
                                system("CLS");
                                cout<<grilled.name<<":"<<endl;
                                cout<<"\tGrilled Boneless Chicken Fillet Topped With American Sauce, Sauteed Onions, Sauteed Mushrooms And Cheese. Served With Fries & Coleslaw."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++grilled;
                                        cout<<"\rYou have added "<<grilled.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '5':
                                system("CLS");
                                cout<<royal.name<<":"<<endl;
                                cout<<"\tCrunchy Chicken Boneless Fillet Topped With Black Olives, Jalapenos, Home Made Sauce And Cheddar Cheese And Onions. Served With Fries & Coleslaw."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++royal;
                                        cout<<"\rYou have added "<<royal.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '6':
                                system("CLS");
                                cout<<crispy.name<<":"<<endl;
                                cout<<"\tCrispy, Flavorful Chicken Deep Fried To Perfection, Served With Fries And Sauce."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++crispy;
                                        cout<<"\rYou have added "<<crispy.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '7':
                                system("CLS");
                                cout<<spicy.name<<":"<<endl;
                                cout<<"\tCrispy Deep Fried Chicken Tossed In Sweet And Tangy Foods Inn Sauce."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++spicy;
                                        cout<<"\rYou have added "<<spicy.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '8':
                                system("CLS");
                                cout<<cheesy.name<<":"<<endl;
                                cout<<"\tCrispy Deep Fried Chicken With Foods Inn Special Cheese Dressing"<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++cheesy;
                                      cout<<"\rYou have added "<<cheesy.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        default:
                                    if(ch==0x0d){
                                        return -1;}

                                    //cout<<"Please enter correct serial number (1-5)."<<endl;
                                        return 0;
                    }
                }
};



// continental class starting:



class steak{

protected:
    st beafsteak;
    st chickensteak;

public:
    friend void setwhatyouwant();
     steak(){
        strcpy(beafsteak.name,"Beaf Steak");
        beafsteak.price=1245;
	    strcpy(chickensteak.name,"Chicken Steak");
        chickensteak.price=995;
    }

    st getbeafsteak()const { return beafsteak; }
    st getchickensteak()const {  return chickensteak;  }

      void setbeafsteak(){
        cout<<"Enter new price\t"<<endl;
        cin>>beafsteak.price;}
      void setchickensteak(){
        cout<<"Enter new price\t"<<endl;
        cin>>chickensteak.price;}
};

class pasta{

protected:
    st alfredo;
    st bbqpasta;

public:
    friend void setwhatyouwant();
    pasta(){
        strcpy(alfredo.name,"Chicken Alfredo Pasta");
        alfredo.price=920;

        strcpy(bbqpasta.name,"Chicken BBQ Pasta");
        bbqpasta.price=970;
    }

    st getalfredo()const { return alfredo; }
    st getbbqpasta()const {  return bbqpasta;  }

      void setalfredo(){
        cout<<"Enter new price\t"<<endl;
        cin>>alfredo.price;}
      void setbbqpasta(){
        cout<<"Enter new price\t"<<endl;
        cin>>bbqpasta.price;}
};


class continental : public steak , public pasta
{
    public:
        continental () : steak() , pasta() {}

        int disp_continental(){

                system("CLS");
                char ch;
                int num;

            cout<<endl<<"S T E A K :"<<endl<<endl;
            cout<<"\t1."<<beafsteak.name<<"\t\t\tRs."<<beafsteak.price<<endl;
            cout<<"\t2."<<chickensteak.name<<"\t\tRs."<<chickensteak.price<<endl;
            cout<<endl<<endl<<"P A S T A :"<<endl<<endl;
            cout<<"\t3."<<alfredo.name<<"\t\tRs."<<alfredo.price<<endl;
            cout<<"\t4."<<bbqpasta.name<<"\t\tRs."<<bbqpasta.price<<endl;


            ch=getch();
                        switch(ch){

                            case '1':
                                    system("CLS");
                                    cout<<beafsteak.name<<":"<<endl;
                                    cout<<"\tChar-grilled Beef Fillet Topped With Sauce Of Your Choice"<<endl;
                                    cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                    ch=getch();
                                        if(ch==0x20){
                                                ++beafsteak;
                                            cout<<"\rYou have added "<<beafsteak.name<<" to cart. Please specify the count later\n";
                                            getch();
                                            return 1;}
                                        else return 0;
                                    break;
                            case '2':
                                    system("CLS");
                                    cout<<chickensteak.name<<":"<<endl;
                                    cout<<"\tChar-grilled Chicken Fillet Topped With Sauce Of Your Choice"<<endl;
                                    cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                    ch=getch();
                                        if(ch==0x20){
                                                ++chickensteak;
                                            cout<<"\rYou have added "<<chickensteak.name<<" to cart. Please specify the count later\n";
                                            getch();
                                            return 1;}
                                        else return 0;
                                    break;
                            case '3':
                                    system("CLS");
                                    cout<<alfredo.name<<":"<<endl;
                                    cout<<"\tFettuccini pasta topped in creamy Alfredo sauce topped with grilled chicken"<<endl;
                                    cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                    ch=getch();
                                        if(ch==0x20){
                                                ++alfredo;
                                            cout<<"\rYou have added "<<alfredo.name<<" to cart. Please specify the count later\n";
                                            getch();
                                            return 1;}
                                        else return 0;
                                    break;

                            case '4':
                                    system("CLS");
                                    cout<<bbqpasta.name<<":"<<endl;
                                    cout<<"\tGolden fried chicken breast in penne pasta tossed with mushroom creamy sauce & topped with parmesan cheese"<<endl;
                                    cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                    ch=getch();
                                        if(ch==0x20){
                                                ++bbqpasta;
                                            cout<<"\rYou have added "<<bbqpasta.name<<" to cart. Please specify the count later\n";
                                            getch();
                                            return 1;}
                                        else return 0;
                                    break;

                            default:
                                        if(ch==0x0d){
                                            return -1;}

                                        //cout<<"Please enter correct serial number (1-5)."<<endl;
                                            return 0;
                        }
                    }
};



// chinese class is starting


class chinese{

    st schezwan;
    st shashlik;
    st jalfrezi;
    st manchurian;
    st chowmin;
    st rice;
    st singaporian;

public:
    friend void setwhatyouwant();
    chinese(){
        strcpy(schezwan.name,"Chicken Schezwan");
        schezwan.price=920;

        strcpy(shashlik.name,"Chicken Shashlik");
        shashlik.price=620;

        strcpy(jalfrezi.name,"Chicken Jalfrezi");
        jalfrezi.price=620;

        strcpy(manchurian.name,"Chicken Manchurian");
        manchurian.price=620;

        strcpy(chowmin.name,"Chicken Chowmin");
        chowmin.price=570;

        strcpy(rice.name,"Chicken Fried Rice");
        rice.price=420;

        strcpy(singaporian.name,"Singaporian Rice");
        singaporian.price=700;
    }


    int disp_chinese(){
            system("CLS");
                char ch;
                int num;
                cout<<endl<<"C H I N E S E :"<<endl<<endl;
                cout<<"\t1."<<schezwan.name<<"\t\tRs."<<schezwan.price<<endl;
                cout<<"\t2."<<shashlik.name<<"\t\tRs."<<shashlik.price<<endl;
                cout<<"\t3."<<jalfrezi.name<<"\t\tRs."<<jalfrezi.price<<endl;
                cout<<"\t4."<<manchurian.name<<"\t\tRs."<<manchurian.price<<endl;
                cout<<endl<<endl<<"N O O D L E S   A N D   R I C E :"<<endl<<endl;
                cout<<"\t5."<<chowmin.name<<"\t\tRs."<<chowmin.price<<endl;
                cout<<"\t6."<<rice.name<<"\t\tRs."<<rice.price<<endl;
                cout<<"\t7."<<singaporian.name<<"\t\tRs."<<singaporian.price<<endl;

                ch=getch();
                    switch(ch){

                        case '1':
                                system("CLS");
                                cout<<schezwan.name<<":"<<endl;
                                cout<<"\tJulienne cut chicken and vegetables tossed in a balance flavored gravy, served with stir fried rice."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++schezwan;
                                        cout<<"\rYou have added "<<schezwan.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '2':
                                system("CLS");
                                cout<<shashlik.name<<":"<<endl;
                                cout<<"\tCubes of chicken, onion, capsicum, tomatoes topped with shashlik sauce, served dry along with stir fried rice."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++shashlik;
                                        cout<<"\rYou have added "<<shashlik.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '3':
                                system("CLS");
                                cout<<jalfrezi.name<<":"<<endl;
                                cout<<"\tJulienne cut chicken, onion, capsicum, tomatoes tossed in a balance flavored gravy, served with stir fried rice."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++jalfrezi;
                                        cout<<"\rYou have added "<<jalfrezi.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;

                        case '4':
                                system("CLS");
                                cout<<manchurian.name<<":"<<endl;
                                cout<<"\tchicken cubes with whole chilli tossed in a sweet tangy but balance flavored gravy, served with stir fried rice."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++manchurian;
                                        cout<<"\rYou have added "<<manchurian.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '5':
                                system("CLS");
                                cout<<chowmin.name<<":"<<endl;
                                cout<<"\tOur hand made stir fried noodles with chunks of chicken/meat and vegetables seasoned with soya sauce and other flavorful sauces."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++chowmin;
                                        cout<<"\rYou have added "<<chowmin.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '6':
                                system("CLS");
                                cout<<rice.name<<":"<<endl;
                                cout<<"\tRice, scrambled eggs, spring onion, carrots stir fried on wok along with seasoned chicken."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++rice;
                                        cout<<"\rYou have added "<<rice.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        case '7':
                                system("CLS");
                                cout<<singaporian.name<<":"<<endl;
                                cout<<"\tA perfect blend of Egg fried rice, noodles and chicken manchrian, topped with green chilli and creamy mayo."<<endl;
                                cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                                ch=getch();
                                    if(ch==0x20){
                                            ++singaporian;
                                        cout<<"\rYou have added "<<singaporian.name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;}
                                    else return 0;
                                break;
                        default:
                                    if(ch==0x0d){
                                        return -1;}

                                    //cout<<"Please enter correct serial number (1-5)."<<endl;
                                        return 0;
                    }
     }

    st getschezwan()const { return schezwan; }
    st getshashlik()const {  return shashlik;  }
    st getjalfrezi()const {  return jalfrezi; }
    st getmanchurian()const{ return manchurian;}
    st getchowmin()const{ return chowmin;   }
    st getrice()const{ return rice;   }
    st getsingaporian()const{ return singaporian;   }

      void setshezwan(){
        cout<<"Enter new price\t"<<endl;
        cin>>schezwan.price;}
      void setshashlik(){
        cout<<"Enter new price\t"<<endl;
        cin>>shashlik.price;}
      void setjalfrezi(){
        cout<<"Enter new price\t"<<endl;
        cin>>jalfrezi.price;}
      void setmanchurian(){
        cout<<"Enter new price\t"<<endl;
        cin>>manchurian.price;}
      void setchowmin(){
        cout<<"Enter new price\t"<<endl;
        cin>>chowmin.price;}
      void setrice(){
        cout<<"Enter new price\t"<<endl;
        cin>>rice.price;}
      void setsingaporian(){
        cout<<"Enter new price\t"<<endl;
        cin>>singaporian.price;}

};


// pakistani class is starting



class BBQ{
protected:
    st chi_tikka;
    st chatkhara;
    st chatak;
    st mughlai;

public:
    friend void setwhatyouwant();
    BBQ(){
        strcpy(chi_tikka.name,"Chicken Tikka");
        chi_tikka.price=320;

        strcpy(chatkhara.name,"Chatkhara Tikka");
        chatkhara.price=410;

        strcpy(chatak.name,"Shahi Chatak Boti");
        chatak.price=660;

        strcpy(mughlai.name,"Mughlai Boti");
        mughlai.price=640;
    }

    st getchi_tikka()const { return chi_tikka; }
    st getchatkhara()const {  return chatkhara;  }
    st getchatak()const {  return chatak; }
    st getmughlai()const{ return mughlai;}

      virtual void setchi_tikka(){
        cout<<"Enter new price\t"<<endl;
        cin>>chi_tikka.price;}
      virtual void setchatkhara(){
        cout<<"Enter new price\t"<<endl;
        cin>>chatkhara.price;}
      virtual void setchatak(){
        cout<<"Enter new price\t"<<endl;
        cin>>chatak.price;}
      virtual void setmughlai(){
        cout<<"Enter new price\t"<<endl;
        cin>>mughlai.price;}
};



class desi{
protected:
    st karahi;
    st brain;
    st handi;

public:
    friend void setwhatyouwant();
    desi(){
    	strcpy(karahi.name,"Karahi");
        karahi.price=780;

        strcpy(brain.name,"Brain Tawa Masala With Butter");
        brain.price=900;

        strcpy(handi.name,"Handi");
        handi.price=925;
     }

    st getkarahi()const {  return karahi;  }
    st getbrain()const {  return brain;    }
    st gethandi()const{ return handi;      }

      virtual void setkarahi(){
        cout<<"Enter new price\t"<<endl;
        cin>>karahi.price;}
      virtual void setbrain(){
        cout<<"Enter new price\t"<<endl;
        cin>>brain.price;}
      virtual void sethandi(){
        cout<<"Enter new price\t"<<endl;
        cin>>handi.price;}
};



class pakistani : public BBQ , public desi
{
    public:
        pakistani() : BBQ() , desi() {}

        int disp_pakistani(){
            system("CLS");
            char ch;
            int num;
            cout<<endl<<"B A R B E Q U E : "<<endl<<endl;
            cout<<"\t1."<<chi_tikka.name<<"\t\t\tRs."<<chi_tikka.price<<endl;
            cout<<"\t2."<<chatkhara.name<<"\t\tRs."<<chatkhara.price<<endl;
            cout<<"\t3."<<chatak.name<<"\t\tRs."<<chatak.price<<endl;
            cout<<"\t4."<<mughlai.name<<"\t\t\tRs."<<mughlai.price<<endl;
            cout<<endl<<endl<<" D E S I :"<<endl<<endl;
            cout<<"\t5."<<karahi.name<<"\t\t\tRs."<<karahi.price<<endl;
            cout<<"\t6."<<brain.name<<"\tRs."<<brain.price<<endl;
            cout<<"\t7."<<handi.name<<"\t\t\t\tRs."<<handi.price<<endl;

            ch=getch();
                switch(ch){

                    case '1':
                            system("CLS");
                            cout<<chi_tikka.name<<":"<<endl;
                            cout<<"\tBarbecued Quarter chicken, marinated in ginger, garlic, red chilies and more, served with our special BBQ sauce."<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++chi_tikka;
                                    cout<<"\rYou have added "<<chi_tikka.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;

                    case '2':
                            system("CLS");
                            cout<<chatkhara.name<<":"<<endl;
                            cout<<"\tBarbecued Quarter chicken, marinated with in-house made BBQ sauces and spices, served with our special BBQ sauce."<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++chatkhara;
                                    cout<<"\rYou have added "<<chatkhara.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;

                    case '3':
                            system("CLS");
                            cout<<chatak.name<<":"<<endl;
                            cout<<"\tBoneless Chicken cubes marinated in flavorful spices topped with cream and barbecued to perfection on charcoal grill."<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++chatak;
                                    cout<<"\rYou have added "<<chatak.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;

                    case '4':
                            system("CLS");
                            cout<<mughlai.name<<":"<<endl;
                            cout<<"\tBoneless Chicken cubes marinated in flavorful spices topped with cream and barbecued to perfection on charcoal grill."<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++mughlai;
                                    cout<<"\rYou have added "<<mughlai.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;
                    case '5':
                            system("CLS");
                            cout<<karahi.name<<":"<<endl;
                            //cout<<"\t"<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++karahi;
                                    cout<<"\rYou have added "<<karahi.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;
                    case '6':
                            system("CLS");
                            cout<<brain.name<<":"<<endl;
                            cout<<"\tA gravy of delicious and spicy combination of tomatoes, green chili, crush chili and black pepper full of flavor meat Mutton"<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++brain;
                                    cout<<"\rYou have added "<<brain.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;
                    case '7':
                            system("CLS");
                            cout<<handi.name<<":"<<endl;
                            //cout<<"\t"<<endl;
                            cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
                            ch=getch();
                                if(ch==0x20){
                                        ++handi;
                                    cout<<"\rYou have added "<<handi.name<<" to cart. Please specify the count later\n";
                                    getch();
                                    return 1;}
                                else return 0;
                            break;
                    default:
                                if(ch==0x0d){
                                    return -1;}

                                //cout<<"Please enter correct serial number (1-5)."<<endl;
                                    return 0;
                }

            }
};


//pizza class is starting

class pizza{
protected:
    st large;
    st medium;
    st small;
    string pizza_inst[5];
public:
   pizza(){
    	strcpy(large.name,"Large Pizza");
        large.price=2000;

        strcpy(medium.name,"Medium Pizza");
        medium.price=1400;

        strcpy(small.name,"Small Pizza");
        small.price=800;

        pizza_inst[0]="Chicago Bulls";
        pizza_inst[1]="Florida Feast";
        pizza_inst[2]="Texas BBQ";
        pizza_inst[3]="Mexican Treat";
        pizza_inst[4]="Arizona Cream";
     }

     int pizzaflavor(){
        char ch;
        int num;

        cout<<endl<<"C H O O S E   F L A V O R S :"<<endl<<endl;
        cout<<"\t1."<<pizza_inst[0]<<":"<<endl
            <<"\t\tChicken Tikka with Onions, Mushrooms, Garlic Sauce & Cheese."<<endl<<endl;
        cout<<"\t2."<<pizza_inst[1]<<":"<<endl
            <<"\t\tChicken Fajita topped with Onions, Black Olives, Ranch Sauce & Cheese"<<endl<<endl;
        cout<<"\t3."<<pizza_inst[2]<<":"<<endl
            <<"\t\tBBQ Chicken topped with Onions, Red Jalapenos, BBQ Sauce & Cheese"<<endl<<endl;
        cout<<"\t4."<<pizza_inst[3]<<":"<<endl
            <<"\t\tChicken Tikka topped with Onions & Cheese"<<endl<<endl;
        cout<<"\t5."<<pizza_inst[4]<<":"<<endl
            <<"\t\tCreamy Sauce with Chicken Tikka, Onions & Cheese."<<endl<<endl;
       ch=getch();
           if(ch=='1' || ch=='2' || ch=='3' || ch=='4' || ch=='5'){
               int number= (int)ch - 48;;
               return number;}
           else
             return 0;

    }

     int disp_pizza(){
        system("CLS");
        char ch;
        int num;
        int pr;
        cout<<endl<<"P I Z Z A :"<<endl<<endl;
        cout<<"\t1."<<small.name<<"\tRs."<<small.price<<endl;
        cout<<"\t2."<<medium.name<<"\tRs."<<medium.price<<endl;
        cout<<"\t3."<<large.name<<"\tRs."<<large.price<<endl;

       ch=getch();

			switch(ch){

				case '1':
					    system("CLS");
					    cout<<"\rYou have added "<<small.name<<" to cart. Please specify the count later\n";
                            pr=pizzaflavor();
                            if(pr>=1 && pr<=5){
                                addit(small,pizza_inst[pr-1],pr,"Small Pizza");
                                cout<<"You have added this flavor"<<endl;
                                getch();
                                return 1;}
                            else
                                return 0;
                        break;
                case '2':
                    system("CLS");
                        cout<<"\rYou have added "<<medium.name<<" to cart. Please specify the count later\n";
                         pr=pizzaflavor();
                            if(pr>=1 && pr<=5){
                                addit(medium,pizza_inst[pr-1],pr,"Medium Pizza");
                                cout<<"You have added this flavor"<<endl;
                                getch();
                                return 1;}
                            else
                                return 0;
                        break;
                case '3':
                        system("CLS");
					    cout<<"\rYou have added "<<large.name<<" to cart. Please specify the count later\n";
					     pr=pizzaflavor();
					       if(pr>=1 && pr<=5){
                                addit(large,pizza_inst[pr-1],pr,"Large Pizza");
                                cout<<"You have added this flavor"<<endl;
                                getch();
                                return 1;}
                            else
                                return 0;
                        break;
                 default:
                        if(ch==0x0d){
                            return -1;}

                        //cout<<"Please enter correct serial number (1-5)."<<endl;
                            return 0;
			}
    }


    st getlarge()const {  return large;  }
    st getmedium()const {  return medium;    }
    st getsmall()const{ return small;      }

      void setklarge(){
        cout<<"Enter new price\t"<<endl;
        cin>>large.price;}
      void setmedium(){
        cout<<"Enter new price\t"<<endl;
        cin>>medium.price;}
      void setsmall(){
        cout<<"Enter new price\t"<<endl;
        cin>>small.price;}




};

//beverages class is starting

class beverages{
protected:
    st tea[3];
    st shakes[3];
    st coffee[3];
public:
    beverages(){
        strcpy(shakes[0].name,"Oreo Shakes");shakes[0].price=164;
        strcpy(shakes[1].name,"Pinacolada");shakes[1].price=156;
        strcpy(shakes[2].name,"Strawberry Milk Shake");shakes[2].price=285;

        strcpy(tea[0].name,"Turkish_Cava");tea[0].price=80;
        strcpy(tea[1].name,"Normal Tea");tea[1].price=105;
        strcpy(tea[2].name,"Grean Tea");tea[2].price=65;

        strcpy(coffee[0].name,"Turkish Coffee");coffee[0].price=370;
        strcpy(coffee[1].name,"Milk Coffee");coffee[1].price=250;
        strcpy(coffee[2].name,"Filtered Black Coffee");coffee[2].price=399;

    }

    int disp_beverages(){
            system("CLS");
                char ch;
                int num;
                cout<<endl<<"A _ T E A :"<<endl<<endl;
                cout<<"\t1."<<tea[0].name<<"\t\tRs."<<tea[0].price<<endl;
                cout<<"\t2."<<tea[1].name<<"\t\tRs."<<tea[1].price<<endl;
                cout<<"\t3."<<tea[2].name<<"\t\tRs."<<tea[2].price<<endl;
                 cout<<endl<<endl<<"B _ S H A K E S :"<<endl<<endl;
                cout<<"\t1."<<shakes[0].name<<"\t\tRs."<<shakes[0].price<<endl;
                cout<<"\t2."<<shakes[1].name<<"\t\tRs."<<shakes[1].price<<endl;
                cout<<"\t3."<<shakes[2].name<<"\tRs."<<shakes[2].price<<endl;
                 cout<<endl<<endl<<"C _ C O F F E E :"<<endl<<endl;
                cout<<"\t1."<<coffee[0].name<<"\tRs."<<coffee[0].price<<endl;
                cout<<"\t2."<<coffee[1].name<<"\t\tRs."<<coffee[1].price<<endl;
                cout<<"\t3."<<coffee[2].name<<"\tRs."<<coffee[2].price<<endl;
                cout<<"\n\nEnter for beverage (A-B-C)\t";

                ch=getch();
                    switch(ch){

                        case 'A':
                            cout<<"\r\rEnter for which tea (1-2-3)"<<endl;
                                ch=getch();

                                switch(ch){

                                    case '1':
                                        ++tea[0];
                                        cout<<"\nYou have added "<<tea[0].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    case '2':
                                        ++tea[1];
                                        cout<<"\nYou have added "<<tea[1].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    case '3':
                                         ++tea[2];
                                        cout<<"\nYou have added "<<tea[2].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    default:
                                        return 0;
                                }

                                break;

                        case 'B':
                            cout<<"\r\rEnter for which shakes (1-2-3)"<<endl;
                                ch=getch();

                                switch(ch){

                                    case '1':
                                         ++shakes[0];
                                        cout<<"\nYou have added "<<shakes[0].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    case '2':
                                        ++shakes[1];
                                        cout<<"\nYou have added "<<shakes[1].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    case '3':
                                        ++shakes[2];
                                        cout<<"\nYou have added "<<shakes[2].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    default:
                                        return 0;
                                }
                                break;

                        case 'C':
                            cout<<"\r\rEnter for which coffee (1-2-3)"<<endl;
                                ch=getch();

                                switch(ch){

                                    case '1':
                                            ++coffee[0];
                                        cout<<"\nYou have added "<<coffee[0].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    case '2':
                                            ++coffee[1];
                                        cout<<"\nYou have added "<<coffee[0].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    case '3':
                                            ++coffee[2];
                                        cout<<"\nYou have added "<<coffee[2].name<<" to cart. Please specify the count later\n";
                                        getch();
                                        return 1;
                                        break;

                                    default:
                                        return 0;
                                }
                                break;

                        default:
                            if(ch==0x0d){
                                return -1;}
                            return 0;
                    }
    }

};

//add-ons class is starting

class addon{
    protected:
    st plain;
    st chapati;
    st roghni;
    st garlic;
    st paratha;
public:

    int disp_addon(){
        system("CLS");
        char ch;
        int num;

        cout<<endl<<"R O T I   A N D   P A R A T H A : "<<endl<<endl;
        cout<<"\t1."<<plain.name<<"\tRs."<<plain.price<<endl;
        cout<<"\t2."<<chapati.name<<"\tRs."<<chapati.price<<endl;
        cout<<"\t3."<<roghni.name<<"\tRs."<<roghni.price<<endl;
        cout<<"\t4."<<garlic.name<<"\tRs."<<garlic.price<<endl;
        cout<<"\t5."<<paratha.name<<"\tRs."<<paratha.price<<endl;

       ch=getch();

			switch(ch){

				case '1':
					    system("CLS");
					    cout<<plain.name<<":"<<endl;
						cout<<"\tNaan burshed with butter and sea-same seeds."<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                ++plain;
								cout<<"\rYou have added "<<plain.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '2':
                        system("CLS");
					    cout<<chapati.name<<":"<<endl;
						cout<<"\tHealthy option, made with whole wheat."<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++chapati;
								cout<<"\rYou have added "<<chapati.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '3':
                        system("CLS");
					    cout<<roghni.name<<":"<<endl;
						cout<<"\tNaan burshed with butter and sea-same seeds."<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++roghni;
								cout<<"\rYou have added "<<roghni.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '4':
                        system("CLS");
					    cout<<garlic.name<<":"<<endl;
   						cout<<"\tNaan brushed with butter and garlic to give a scrumptious aroma and taste."<<endl;
                        cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++garlic;
								cout<<"\rYou have added "<<garlic.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                case '5':
                        system("CLS");
					    cout<<paratha.name<<":"<<endl;
						cout<<"\tDeep fried in ghee, made with white flour"<<endl;
						cout<<endl<<endl<<endl<<"\t\t\t\t\tTo order, press Spacebar. Else press any key";
						ch=getch();
							if(ch==0x20){
                                    ++paratha;
								cout<<"\rYou have added "<<paratha.name<<" to cart. Please specify the count later\n";
								getch();
								return 1;}
                            else return 0;
                        break;
                 default:
                        if(ch==0x0d){
                            return -1;}

                        //cout<<"Please enter correct serial number (1-5)."<<endl;
                            return 0;
			}
    }

    st getplain()const { return plain; }
    st getchapati()const {  return chapati;  }
    st getfin()const {  return roghni; }
    st getgarlic()const{ return garlic;}
    st getparatha()const{ return paratha;}

    addon(){
        strcpy(plain.name,"Plain Naan");
        plain.price=30;
        strcpy(chapati.name,"Chapati");
        chapati.price=20;
        strcpy(roghni.name,"Roghni Naan");
        roghni.price=65;
        strcpy(garlic.name,"Garlic Naan");
        garlic.price=55;
        strcpy(paratha.name,"Paratha");
        paratha.price=95;
    }

      void setplain(){
        cout<<"Enter new price\t"<<endl;
        cin>>plain.price;}
      void setchapati(){
        cout<<"Enter new price\t"<<endl;
        cin>>chapati.price;}
      void setfish(){
        cout<<"Enter new price\t"<<endl;
        cin>>roghni.price;}
      void setgarlic(){
        cout<<"Enter new price\t"<<endl;
        cin>>garlic.price;}
      void setparatha(){
        cout<<"Enter new price\t"<<endl;
        cin>>paratha.price;}

};
// menu class is starting


class menu : public Starter , public fastfood , public continental , public pakistani , public chinese , public sandwich , public pizza , public beverages , public addon
{
    public:
        menu() : Starter() , fastfood() , continental() , pakistani() , chinese() , sandwich() , pizza() , beverages() , addon() {}

        char disp_menu(){
            char c;
            cout<<"\n\n\t\t\t We have answer to your every mood.\n\t\t\t Please type the given alphebat(small case) of the following cuisines"<<endl;
            cout<<"\nStarter\t\ta\nFast-Food\tb\nEast-Asian\tc\nContinental\td\nPakistani\te\nPizza\t\tf\nSandwiches\tg\nAdd-Ons\t\th\nBeverages\ti\n"<<endl;
            c=getch();
            return c;
        }


        //functions of Starter
         void setcorn(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void sethot(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setfish(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setsalad(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setwings(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
        //functions of fastfood
            //functions of burgers
             void setzinger(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setbbq(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setgrilled(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setroyal(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setjalapeno(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
            //functions of sandwich
             void setclub(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setgrillsand(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setbbqsand(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setmalai(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setbeef(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
            //functions of fried chicken
             void setcrispy(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setspicy(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
             void setcheesy(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
           //end
        //functions of continental
         void setalfredo(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setbbqpasta(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setchickensteak(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setbeafsteak(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
        //functions of chinese
         void setschezwan(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setshashlik(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setjalfrezi(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setmanchurian(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setchowmin(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setrice(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         void setsingaporian(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         //functions of pakistan food
            //functions of bbq class and desi class
        virtual void setchi_tikka(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
        virtual     void setchatkhara(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         virtual    void setchatak(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         virtual    void setkarahi(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
         virtual    void setmughlai(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
            virtual void setbrain(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
           virtual  void sethandi(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
        //functions of pizza class
           void setklarge(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
           void setmedium(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
           void setsmall(){ cout<<"You dont have access to change these values. Please try from administrator account"<<endl; }
        friend void setwhatyouwant();
};

class cart{

    string name;
    int price;
    unsigned int quantity;
    string inst;

public:

    int getprice(){return price;}
    string getit(){return name;}
    int getquan(){return quantity;}
    string getinst(){return inst;}

    void setprice(int a){ price=a;}
    void setit(string a){name=a;}
    void setquan(int a){quantity=a;}
    void setinst(string a){inst=a;}

    cart(){}

    cart(string a, int b, unsigned int c , string d ){
        name=a;
        price=b;
        quantity=c;
        inst=d;
    }
    friend bool operator == (vector<cart>::iterator ob1 , vector<cart>::iterator ob2);
    friend void display_cart();
    friend void modify_cart();
    friend int gettotal();
    friend void check_duplicates(int total);
    friend void delete_quantity();
} ;

 bool operator == (vector<cart>::iterator ob1 , vector<cart>::iterator ob2){

      if( ob1->name == ob2->name  &&  ob1->price == ob2->price)
            return 1;
      else
        return 0;
    }

class user{
public:
    menu m;
    static vector<cart>c;
};

vector<cart>user::c;

int gettotal(){
    int total=0;
    for (auto &arr : user::c) {
            total+=arr.price*arr.quantity;
            cout<<total;
        }
        return total;
}

void display_cart(){
    for (const auto &arr : user::c) {
        cout<<arr.name<<"\tRs."<<arr.price<<"\t\t"<<arr.quantity<<"\t\t"<<arr.inst<<endl;
    }
}

void modify_cart(){
        for (auto &arr : user::c) {
        cout<<arr.name<<"\tRs."<<arr.price<<"\t\t";
        cin>>arr.quantity;
    }
}

void operator ++ (st a){
    cart b;
    b.setit(a.name);
    b.setprice(a.price);
    b.setquan(1);
    b.setinst("");
    user::c.push_back(b);
}

void addit(st a, string in, int pr, string nam){
    cart b;
    b.setit(nam);
    b.setprice(a.price+pr);
    b.setquan(1);
    b.setinst(in);
    user::c.push_back(b);
}

int gettime(){
   int minutes=user::c.size();
        minutes*=1;
   int hours=minutes/60;

     if(hours==0)
         cout<<endl<<endl<<endl<<"ESTIMATED DELIVERY TIME IS "<<minutes%60<<" minutes"<<endl;
     else
       cout<<endl<<endl<<endl<<"ESTIMATED DELIVERY TIME IS "<<hours<<" hours and "<<minutes<<" minutes"<<endl;
    return minutes;
}

string next_time(int n){

    time_t now = time(0);
    tm *timein;
    timein = localtime(&now);
    static int m=n+timein->tm_min;
    int hr;

    if(m>59){
        hr=timein->tm_hour+1;
        m-=60;}
    else
        hr=timein->tm_hour;
     string month;

    switch(timein->tm_mon){

    case 1:
        month="Jan";
        break;
    case 2:
        month="Feb";
        break;
    case 3:
        month="Mar";
        break;
    case 4:
        month="Apr";
        break;
    case 5:
        month="May";
        break;
    case 6:
        month="Jun";
        break;
    case 7:
        month="Jul";
        break;
    case 8:
        month="Aug";
        break;
    case 9:
        month="Sep";
        break;
    case 10:
        month="Oct";
        break;
    case 11:
        month="Nov";
        break;
    case 12:
        month="Dec";
        break;
    }

    string day;

    switch(timein->tm_wday){
        case 0:
            day="Sun";
            break;
         case 1:
            day="Mon";
            break;
        case 2:
            day="Tues";
            break;
        case 3:
            day="Wed";
            break;
        case 4:
            day="Thur";
            break;
        case 5:
            day="Fri";
            break;
        case 6:
            day="Sat";
            break;
    }

    string a = day + " " + month + " " + to_string(timein->tm_isdst) + to_string(timein->tm_mday) + " " + to_string(hr) + ':' + to_string(m) + ':' + to_string(timein->tm_sec) + ' ' + to_string(1900+timein->tm_year);

    return a;
}

int total;

void check_duplicates(int total){

    vector<cart>::iterator it;
    for (auto i = user::c.begin(); i != user::c.end(); i++) {
        for (auto it = i; it != user::c.end(); it++){
           if (it->price==i->price && it != i) {
            user::c.erase(it);
            it--;
            }
        }
        if (i->quantity==0) {
            user::c.erase(i);
            i--;
            }
    }
    ofstream fout;
    string khubaib;
    cout<<endl<<"Enter your name:\t";
    cin>>khubaib;
    cout<<endl<<endl;
    khubaib+=".txt";
    fout.open(khubaib,ios::trunc | ios::out);
    fout<<"\t\t\tZ A I K A   R E S T U R A N T"<<endl<<endl<<endl;

    for (auto itis = user::c.begin(); itis != user::c.end(); ++itis){
       cout<<itis->name<<"\tRs."<<itis->price<<"\t\t"<<itis->quantity<<endl;
       fout<<itis->name<<"\tRs."<<itis->price<<"\t\t"<<itis->quantity<<endl;
     }
     fout<<endl<<"T O T A L : "<<total+(total*17/100)<<endl<<endl;

     cout<<endl<<endl<<"If there are any further instructions then you can tell here:\t";
     khubaib="";
     cin.ignore();
     getline(cin,khubaib);
     fout<<endl<<endl<<khubaib<<endl<<endl;
     fout<<"\t\t\tT H A N K Y O U   F O R   O R D E R I N G"<<endl;
     fout.close();

}


void setwhatyouwant(){
    cout<<"Which type price do you want to change"<<endl;
        char d,e;
                menu m;
                START:
                d=m.disp_menu();cout<<d;
                    int enter;
                     switch(d){
                            case'a':
                                {
                                    cin>>enter;
                                    Starter *start=&m;
                                    switch(enter){
                                    case 1:
                                        start->setcorn();
                                        break;
                                    case 2:
                                        start->sethot();
                                        break;
                                    case 3:
                                        start->setfish();
                                        break;
                                    case 4:
                                        start->setsalad();
                                        break;
                                    case 5:
                                        start->setwings();
                                        break;

                                    }
                                    break;
                            }
                            case'b':
                                {cin>> enter;
                                burger *star=&m;
                                friedchic *fr=&m;
                                switch(enter){
                                case 1:
                                    star->setzinger();
                                    break;
                                case 2:
                                    star->setbbq();
                                    break;
                                case 3:
                                    star->setjalapeno();
                                    break;
                                case 4:
                                    star->setgrilled();
                                    break;
                                case 5:
                                    star->setroyal();
                                    break;
                                case 6:
                                    fr->setcrispy();
                                    break;
                                case 7:
                                    fr->setspicy();
                                    break;
                                case 8:
                                    fr->setcheesy();
                                    break;

                                }

                                break;
                            }
                            case'c':
                                {
                                    cin>> enter;
                                chinese *star=&m;

                                switch(enter){
                                case 1:
                                    star->setshezwan();
                                    break;
                                case 2:
                                    star->setshashlik();
                                    break;
                                case 3:
                                    star->setjalfrezi();
                                    break;
                                case 4:
                                    star->setmanchurian();
                                    break;
                                                                }

                                break;
                            }
                            case'd':
                                {
                                    cin>> enter;
                                steak *star=&m;
                                pasta *fr=&m;
                                switch(enter){
                                case 1:
                                    star->setbeafsteak();
                                    break;
                                case 2:
                                    star->setchickensteak();
                                    break;
                                case 3:
                                    fr->setalfredo();
                                    break;
                                case 4:
                                    fr->setbbqpasta();
                                    break;
                                }

                                break;
                            }
                            case'e':
                                {
                                    cin>> enter;
                                BBQ *star=&m;
                                desi *fr=&m;
                                switch(enter){
                                case 1:
                                    star->setchi_tikka();
                                    break;
                                case 2:
                                    star->setchatkhara();
                                    break;
                                case 3:
                                    star->setchatak();
                                    break;
                                case 4:
                                    star->setmughlai();
                                    break;
                                case 5:
                                    fr->setkarahi();
                                    break;
                                case 6:
                                    fr->setbrain();
                                    break;
                                case 7:
                                    fr->sethandi();
                                    break;
                                }

                                break;
                            }
                            case'g':
                                {
                                    cin>> enter;
                                sandwich *star=&m;

                                switch(enter){
                                case 1:
                                    star->setclub();
                                    break;
                                case 2:
                                    star->setgrillsand();
                                    break;
                                case 3:
                                    star->setbbqsand();
                                    break;
                                case 4:
                                    star->setmalai();
                                    break;
                                case 5:
                                    star->setbeef();
                                    break;

                                }

                                break;
                            }


                        default:
                            goto START;

                     }

        }










int main(){

    bool enter;
    cout<<"IF YOU ARE ADMIN THEN ENTER 1 ELSE ENTER 0"<<endl;
    cin>>enter;
  if(enter==1){
    loginManager app;
    app.login();
    cin.get();
    system("CLS");
    setwhatyouwant();

   }
 else if(enter==0){
        system("CLS");
        char a[]="WELCOME TO ZAIQA RESTURANT";
        cout<<endl<<endl<<endl<<"\t\t\t\t\t\t";
        for(int i=0;a[i]!='\0';i++){
            cout<<a[i]<<" ";Sleep(100);
        }
    cout<<endl<<endl<<endl<<endl<<"\t\tI N S T R U C T I O N S:"<<endl<<endl<<endl;
    cout<<"\t1. Press enter button to go back. Add Space bar button to proceed when neccessary."<<endl<<endl
        <<"\t2. To go to cart from main menu, press enter and viceversa"<<endl<<endl
        <<"\t3. The changes you would add to cart will not be shown until you enter checkout."<<endl<<endl
        <<"\t4. To delete anything in cart, you would have to enter its quantity as 0 in cart."<<endl<<endl
        <<"\t5. If the pointer of program is stopped and waiting, then please enter any key for confimation."<<endl<<endl
        <<"\t6. If there are duplicate quantities in cart, set the quantity for first one and when you would enter into checkout, the copy of it(second one) will be vanished.";


    getch();
    system("CLS");
    user u;
    char d,e;
    int bol=0,t;
    do{
        do{
            do{

                d=u.m.disp_menu();

                if(d!=0x0d){
                    bol=0;

                    while(bol==0){
                           system("CLS");
                        switch(d){
                            case'a':
                                bol=u.m.disp_starter();
                                break;
                            case'b':
                                bol=u.m.disp_fastfood();
                                break;
                            case'c':
                                bol=u.m.disp_chinese();
                                break;
                            case'd':
                                bol=u.m.disp_continental();
                                break;
                            case'e':
                                bol=u.m.disp_pakistani();
                                break;
                            case'f':
                                bol=u.m.disp_pizza();
                                break;
                            case'g':
                                bol=u.m.disp_sandwich();
                                break;
                            case'h':
                                bol=u.m.disp_addon();
                                break;
                            case'i':
                                bol=u.m.disp_beverages();;
                                break;
                            default:
                                bol=1;
                        }
                    }
                }

                else {bol=2;}
                system("CLS");
            }while(bol==-1 || bol==1);


            while(bol==2){
                char ch;
                cout<<endl<<endl<<"\t\t Y O U   H A V E   E N T E R E D   I N T O   C A R T\n\n\n\n"<<endl;
                display_cart();
                cout<<endl<<endl<<endl<<"\tIf you want to set quantity of certain element a ,"<<
                endl<<"\tif all press A"<<endl<<
                endl<<"PRESS:\n\t ENTER FOR RETURNING TO MENU. \n\t SPACE-BAR FOR PROCEEDING TO CHECK-OUT"<<endl;

                ch=getch();
                if(ch==0x0d){
                    bol=0;
                    system("CLS");
                }
                else if(ch==0x20){
                    bol=1;
                    system("CLS");
                }
                else if (ch=='a'){
                    int a,b;
                    cout<<endl<<endl<<"ENTER THE SERIAL NUMBER YOU WANT TO CHANGE AND ALSO THE QUANTITY."<<endl;
                    cin>>a>>b;
                     user::c[a-1].setquan(b);
                    system("CLS");
                }
                else if (ch=='A'){
                    system("CLS");
                    cout<<endl<<endl<<"\t\t Y O U   H A V E   E N T E R E D   I N T O   M O D I F Y I N G   C A R T\n\n\n\n"<<endl;
                    int a;
                    cout<<endl<<endl<<"ENTER QUANTITY"<<endl;
                    modify_cart();
                    system("CLS");
                }
            }
    }while(bol==2 || bol==0);
    system("CLS");

    total=gettotal();
    cout<<endl<<"C H E C K O U T"<<endl<<endl<<endl;
    cout<<"\tORDER SURRAMY:"<<endl<<endl;
    cout<<"NAME\t\tPRICE\tQUANTITY"<<endl<<endl;
    check_duplicates(total);
    //display_cart();
    cout<<endl<<endl<<"SUB TOTAL\t"<<total<<endl;
    cout<<"TAX\t\t"<<total*17/100<<endl;
    cout<<endl<<endl<<"TOTAL\t\t"<<total+(total*17/100)<<endl;
    t=gettime();
    cout<<endl<<endl<<endl<<"PRESS SPACEBAR TO ORDER.. ELSE ENTER KEY"<<endl;
     e=getch();
     system("CLS");
    }while(e==0x0d);

    string z=next_time(t);
    tm *timout;
    tm *timfin;
    time_t now = time(0);
    timfin = localtime(&now);
    int tt=timfin->tm_min + gettime();
    int ts=timfin->tm_sec;

    do{
        system("CLS");
        cout<<endl<<endl<<"\t\tT H A N K Y O U   F O R   O R D E R I N G   F R O M   U S"<<endl<<endl<<endl<<endl;
        time_t now = time(0);
        char* dt = ctime(&now);
        timout = localtime(&now);
        cout<<"Current Time is :"<<"\t"<<dt<<endl;
        cout<<"Expected Time is : "<<"\t"<<z<<endl;
        //cout.flush();
        cout<<endl<<endl<<"TOTAL\t\t"<<total+(total*17/100)<<endl;
        Sleep(10);

    }while(!(timout->tm_min==tt && timout->tm_sec==ts));

    cout<<endl<<endl<<endl<<"\t\tR E A C H   T H E   C O U N T E R   T O   R E C I E V E   Y O U R   O R D E R\n\n\t\t\t\t\tT H A N K  Y O U !"<<endl;
  }
}
