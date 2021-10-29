#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;
 void move (string name, string x, string y, string z) {
  cout<<endl<<"What move do you want "<<name<<" to use?\n1."<<x<<"\n2."<<y<<"\n3."<<z<<endl;
  }
  void unevo (string name, string x, string y) {
  cout<<endl<<"What move do you want "<<name<<" to use?\n1."<<x<<"\n2."<<y<<endl;
  }
  void contin(char x){
    cout<<endl<<"Press enter to continue"<<endl;
    cin.ignore(1);
    cin.get(x);
  }
  void inputc(int x){
    while(x!=1&&x!=2&&x!=3&&x!=4){
      cout<<endl<<"invalid Input!\n read directions and enter your choice"<<endl;
      cin>>x;

    }
    
  }
  
 int main() {
string name;
 int age;
 string height;
 int userhealth;
 string petname;
 bool treat;
 bool evolve;
 bool evolve2;
 string petage;
 string move3;
 int pethealth=200;
 int petchoice;
 string path;
 string petcat="Cat";
 string petcat2="Tiger";
 string petdog="Dog";
 string petdog2="Wolf";
 string petfish="Fish";
 string petfish2="Shark";
 string petbird="Bird";
 string petbird2="Falcon";
 string chosenpet;
 userhealth = pethealth;
 int enemyhealth=100;
 int fight;
 int moves;
 int crithit;
 int petdamage;
 int raccondamage=30;
 int enemydamage=50;
 int scratchdamage=50;
 int chargedamage=80;
 int bitedamage=50;
 int move3damage=100;
 int fishslap=50;
 int swoopdamage=50;
 char cntnu;
 string move1;
 string move2;
 int choice;
 int time;
 int testhealth=150;

cout<<"Hello adventurer welcome to the world of Codemon your goal is to find your brother who went out on an adventure of his own exactly one year ago and never came back.\n_______________________________________________________________________________________________________________________\nPress enter to continue"<<endl;
cin.get(cntnu);
cout<<"What is your name?"<<endl;
cin>>name;
cout<<endl<<"How old are you?"<<endl;
cin>>age;
if(age<18){
  cout<<endl<<"arent you a little young to be going on an adventure? well anyways "<<endl;
}
  else if(age>30){
    cout<<endl<<"arent you a little old to be going on an adventure? well anyways "<<endl;
  }
cout<<endl<<"How tall are you?"<<endl;
cin>>height;
cout<<endl<<"\n_______________________________________________________________________________________________________________________\nPlease press a number to chose a pet \n1.Dog\n MOVESET=\n bark-0 damage\n bite-50 damage \n2.Cat\nMOVESET=\n meow-0 damage\n scratch-50 damage \n3.fish\nMOVESET=\n swim in circle-0 damage\n fish slap-50 damage \n4.Bird\nMOVESET=\n fly in circle-0 damage\n swoop-50 damage"<<endl;
 cin>>petchoice;
 inputc(petchoice);
 if (petchoice==1){
   cout<<endl<<endl<<"Ahh a mans best friend I see a wise choice ";
   chosenpet=petdog;
   move1="bark";
   move2="bite";
   move3="charge";
 }
  else if(petchoice==2){
    cout<<endl<<"Ahh a cat I see the close relatives of the kings of the jungle."<<endl;
    chosenpet=petcat;
    move1="meow";
    move2="scratch";
  }
  else if(petchoice==3){
    cout<<endl<<"A weird choice but nonetheless a wise one lets hope your adventure leads you to the ocean"<<endl;
    chosenpet=petfish;
    move1="swim in a circle";
    move2="fish slap";
  }
  else if(petchoice==4){
    cout<<endl<<"The most nimble creatures in the animal kingdom, wise choice."<<endl;
    chosenpet=petbird;
    move1="fly in a cicle";
    move2=" swoop ";
  }
  cout<<endl<<"What name will you give your pet?"<<endl;
  cin>>petname;
 cout<<endl<<endl<<"Alright "<<name<<" you will now embark on your journey to find your beloved brother at the tender age of "<<age<<" standing at "<<height<<" tall with your partner "<<petname<<" the "<<chosenpet<<".\n press enter to continue."<<endl;
 cin.ignore(1);
 cin.get(cntnu);
cout<<endl<<endl<<"OH NO "<<name<<" LOOK THERES A RABID RACOON AHEAD OF YOU!!!"<<endl;
cout<<endl<<"1. Press 1 to fight \n2. Press 2 to run"<<endl;
cin>>fight;
inputc(fight);
if(fight==1){
  cout<<endl<<"Oh your a brave one. Prepare yourself"<<endl;
  evolve=true;
  if(chosenpet==petdog){
  cout<<"What attack do you want "<<petname<<" to use. \n press \n 1. for bark \n 2. for bite."<<endl;
  cin>>moves;
    if(moves==1){
      cout<<endl<<petname<<" barked at the raccoon which did nothing.... really why would you chose bark?\n oh no the raccon is attacking because of your stupid decision\n"<<endl;
      pethealth=pethealth-raccondamage;
    cout<<petname<<" Only has "<<pethealth<<" health left!"<<endl;
    }
    else if(moves==2){
      cout<<endl<<petname<<" bit the raccon which is kinda nasty BUT IT DID DAMAGE!"<<endl;
      enemyhealth=enemyhealth-bitedamage;
      cout<<endl<<petname<<" did "<<bitedamage<<" damage. "<<endl;
    }
  }
  else if(chosenpet==petcat){
    cout<<"What attack do you want "<<petname<<" to use. \n press \n 1. for meow \n 2. for scratch."<<endl;
  cin>>moves;
  inputc(moves);
    if(moves==1){
      cout<<endl<<petname<<" meowed at the raccon which did nothing...honeslty what did you expect. \n Oh no the raccon is attacking becuase of your stupid decision.\n"<<petname<<" lost "<<raccondamage<<" health!"<<endl;
      pethealth=pethealth-raccondamage;
    cout<<petname<<" Only has "<<pethealth<<" health left!"<<endl;

  }
  else if (moves==2){
    cout<<endl<<petname<<" stratched the raccon which did "<<scratchdamage<<" damage!"<<endl;
      enemyhealth=enemyhealth-scratchdamage;
      cout<<endl;
 }
}
else if (chosenpet==petfish){
  cout<<"What attack do you want "<<petname<<" to use. \n press \n 1. for swim in a circle \n 2. for fish slap."<<endl;
  cin>>moves;
  if(moves==1){
    cout<<endl<<petname<<"swam in a circle.... what do you think happend.\n Oh no because you made such a dumb decision the raccon attacked your fish. "<<petname<<" lost "<<raccondamage<<" health!"<<endl;
    pethealth=pethealth-raccondamage;
    cout<<endl<<petname<<" Only has "<<pethealth<<" health left!"<<endl;
  }
  else if (moves==2){
    cout<<endl<<petname<<" used "<<move2<<" which did "<<scratchdamage<<" damage!"<<endl;
    enemyhealth=enemyhealth-scratchdamage;
    cout<<endl;
  }
}
else if (chosenpet==petbird){
cout<<"What attack do you want "<<petname<<" to use. \n press \n 1. for fly in a circle \n 2. for swoop."<<endl;
cin>>moves;
inputc(moves);
if(moves==1){
  pethealth=pethealth-raccondamage;
  cout<<endl<<petname<<"just flew in a circle.... which did nothing at all. honestly what did you expect\n oh no look the raccon is attacking.\n"<<petname<<" was hit.\n"<<petname<<" lost "<<raccondamage<<" health now their health is at "<<pethealth<<endl<<" !";
}
else if(moves==2){
  enemyhealth=enemyhealth-swoopdamage;
  cout<<endl<<petname<<" swooped down on the raccon and did "<<swoopdamage<<" damage.\n the raccon now has "<<enemyhealth<<" health left!"<<endl;
}
}
cout<<"The raccon is still alive finish it off!\nIt has "<<enemyhealth<<" health left."<<endl<<"What attack do you want "<<petname<<" to use. \n press \n 1. for "<<move1<<" \n 2. for "<<move2<<"."<<endl;
cin>>moves;
inputc(moves);
if(moves==2){
  cout<<endl<<petname<<" used "<<move2<<" \n"<<move2<<" did "<<scratchdamage<<" damage.";
  enemyhealth=enemyhealth-scratchdamage;
  cout<<"The raccon has "<<enemyhealth<<" health left."<<endl;
  cout<<"Press enter to continue";
  cin.ignore(1);
  cin.get(cntnu);
  if(enemyhealth==0){
    cout<<endl<<" you defeated the raccon! Good job he dropped a treat. \n";
   if(pethealth<100){
    cout<<petname<<" ate the treat and his health rose to 100%"<<endl;
    pethealth=100;
    treat=false;
   }
   else if(pethealth==100){
     cout<<endl<<petname<<"s health is at max so you save the treat, it might come in handy later."<<endl;
     treat=true;

   }

  }
  else if(enemyhealth>0){
    cout<<endl<<"The raccon ran away because you ddidnt defeat it fast enough."<<endl;
  }

}

else if(moves==1){
  cout<<endl<<petname<<" used "<<move1<<" \n"<<move1<<" did no damage. \nThe raccon attacked and did "<<raccondamage<<" damage. "<<endl;
  pethealth=pethealth-raccondamage;
cout<<endl<<petname<<" only has "<<pethealth<<" health left."<<endl;
cout<<endl<<"The raccon ran away because you ddidnt defeat it fast enough."<<endl;
}
cout<<endl<<"press enter to continue"<<endl;
cin.ignore(1);
cin.get(cntnu);
cout<<endl<<"Because of the battle "<<petname<<" is evolving!"<<endl<<petname<<" has evolved from a "<<chosenpet<<" to a ";
if(chosenpet==petdog){
chosenpet=petdog2;
move3="fang rush";
}
else if(chosenpet==petcat){
  chosenpet=petcat2;
  move3="spinning claw";
}
else if(chosenpet==petfish){
  chosenpet=petfish2;
  move3="water ball";
}
else if(chosenpet==petbird){
  chosenpet=petbird2;
  move3="wind sycthe";
}
cout<<chosenpet<<"!"<<endl;
contin(cntnu);
cout<<petname<<" also learned a new move! \nThey learned "<<move3<<" and it does 100 damage!"<<endl; 
cout<<endl<<"Press enter to continue."<<endl;
cin.ignore(1);
cin.get(cntnu);
cout<<"Look there is a boulder ahead of you try out "<<move3<<" on the boulder and see what kind of damage it does"<<endl;
move(petname,move1,move2,move3);
cin>>moves;
while (moves!=3){
  cout<<endl<<"Cmon you already know what those moves do choose the new move."<<endl;
move(petname,move1,move2,move3);
  cin>>moves;
}
if(chosenpet==petdog2){
cout<<endl<<petname<<" used "<<move3<<" they charge at the boulder so fast you can barely track it and use their fangs to crush the boulder completely destroying it!"<<endl;
}
else if(chosenpet==petcat2){
cout<<endl<<petname<<" used "<<move3<<" they jumped into the air and began to spin so fast you can barely track them and used all of that force to slice clean through the boulder!"<<endl;
}
else if(chosenpet==petfish2){
  cout<<endl<<petname<<" used "<<move3<<" they shot out a ball of water in the shape of a spear moving so fast you can barely track it hitting the boulder turning it into dust"<<endl;
}
else if(chosenpet==petbird2){
  cout<<endl<<petname<<" used "<<move3<<" they flew into the air and flapped their wings so fast you can barely track them, the wind stung your eyes and the boulder was hit with a blast of wind slicing it in half"<<endl;
}
}
  else if(fight==2){
  cout<<endl<<endl<<"*cough* coward *cough* *cough* \n Oh you ran....from a raccon. Wise choice I mean your only "<<age<<" years old I understand where your coming from. but I really feel like you woud have gotten something worth your while..... oh well too late. "<<endl; 
  treat=false;  
  evolve=false;
 }
 cout<<endl<<"press enter to continue"<<endl;
 cin.ignore(1);
 cin.get(cntnu);
 
 cout<<endl<<endl<<"You check your phone and see the last message your brother sent you talking about how he is preparing to go on an expidition into a cave.\nYou remeber all the memories you have with your brother and resolve yourself to keep moving until you find him"<<endl;
 contin(cntnu);
 cout<<endl<<"As you continue on your journey you come across a path that splits into two.\nDown one path you see a mountain in the distance and the other path leads to a forest with trees so tall they touch the clouds"<<endl<<"which will you choose?\n1. A mountain path\n2. A jungle with trees that reach the sky."<<endl;
cin>>choice;
while (choice!=1&&choice!=2){
  cout<<endl<<"only 1 or 2 please\n"<<"As you continue on your journey you come across a path that splits into two.\n Down one path you see a mountain in the distance and the other path leads to a jungle with trees so tall they touch the clouds"<<endl<<"which will you choose?\n1. A pitch black cave\n2. A jungle with trees that reach the sky."<<endl;
cin>>choice;
}
if (choice==1){
  path="Mountain";
  cout<<endl<<"You head down the path towards the mountain. "<<endl;
  contin(cntnu);
cout<<endl<<"As you head towards the mountain the air begins to get cold and you start to see your breath."<<endl;
contin(cntnu);
cout<<endl<<"You feel the floor begin to vibrate and a roar echoes throught the mountain range, you look behind you to see a Polar Bear charging at you!\nTheres no where to run you have to fight!"<<endl;
contin(cntnu);
if(evolve==true){
  move(petname,move1,move2,move3);
  cin>>choice;
  inputc(choice);
}
else if(evolve==false){
  unevo(petname,move1,move2);
  cin>>choice;
  inputc(choice);
}
if(choice==1){
  cout<<endl<<petname<<" used "<<move1<<" which did no damage.";
  contin(cntnu);
  cout<<endl<<"The polar bear is attacking!\n It did 50  damage"<<endl;
  pethealth=pethealth-enemydamage;
  cout<<endl<<petname<<" only has "<<pethealth<<" health left!";
}
else if (choice==2){
 cout<<endl<<petname<<" used "<<move2<<" which did "<<scratchdamage<<" damage!"<<endl;
 testhealth=testhealth-scratchdamage;
 contin(cntnu);
 cout<<" The polar bear only has "<<testhealth<<" health left!\n Finish it off!"<<endl ;
}
else if (choice==3){
  cout<<endl<<petname<<" used "<<move3<<" which did "<<move3damage<<" damage!"<<endl;
 testhealth=testhealth-move3damage;
 contin(cntnu);
 cout<<" The polar bear only has "<<testhealth<<" health left!\n Finish it off!"<<endl ;
}
contin(cntnu);
if(evolve==true){
  move(petname,move1,move2,move3);
  cin>>choice;
  inputc(choice);
}
else if(evolve==false){
  unevo(petname,move1,move2);
  cin>>choice;
  inputc(choice);
}
if(choice==1){
  cout<<endl<<petname<<" used "<<move1<<" which did no damage.";
  contin(cntnu);
  cout<<endl<<"The polar bear is attacking!\n It did 50  damage"<<endl;
  pethealth=pethealth-enemydamage;
  cout<<endl<<petname<<" only has "<<pethealth<<" health left!";
}
else if (choice==2){
 cout<<endl<<petname<<" used "<<move2<<" which did "<<scratchdamage<<" damage!"<<endl;
 testhealth=testhealth-scratchdamage;
 contin(cntnu);
 cout<<endl<<" The polar bear has "<<testhealth<<" health left!"<<endl ;
}
else if (choice==3){
  cout<<endl<<petname<<" used "<<move3<<" which did "<<move3damage<<" damage!"<<endl;
 testhealth=testhealth-move3damage;
 contin(cntnu);
 if(enemyhealth<0){
   enemyhealth=0;
 }
 
 cout<<endl<<" The Polar bear has "<<testhealth<<" health left!"<<endl ;
 contin(cntnu);

}
if(enemyhealth<1){
   cout<<endl<<"You deafeated the polar bear!"<<endl;
   contin(cntnu);
   cout<<"The polar bear dropped a potion that says HEALTH UP on it.\nYou feed the potion to "<<petname<<" and his health increases to 300!"<<endl;
   pethealth=300;
 }
 else if(enemyhealth>0){
   cout<<endl<<"The polar bear ran away because you didnt defeat it fast enough!"<<endl;
 }
}
 else if(choice==2){
  path="jungle";
cout<<endl<<"You head down the path to the jungle. "<<endl;
contin(cntnu);

cout<<endl<<"As you enter the jungle you begin to hear ruslting in the bushes around you and the sounds of birds and chirping of other small animals."<<endl;
contin(cntnu);
cout<<endl<<"You hear a scream and a deep drumming sound so loud you feel it in your chest, you look behind you and see a Gorilla charging at you! \nTheres no where to run you have to fight!"<<endl;
contin(cntnu);
if(evolve==true){
  move(petname,move1,move2,move3);
  cin>>choice;
  inputc(choice);
}
else if(evolve==false){
  unevo(petname,move1,move2);
  cin>>choice;
  inputc(choice);
}
if(choice==1){
  cout<<endl<<petname<<" used "<<move1<<" which did no damage.";
  contin(cntnu);
  cout<<endl<<"The gorilla is attacking!\n It did 50  damage"<<endl;
  pethealth=pethealth-enemydamage;
  cout<<endl<<petname<<" only has "<<pethealth<<" health left!"<<endl;
}
else if (choice==2){
 cout<<endl<<petname<<" used "<<move2<<" which did "<<scratchdamage<<" damage!"<<endl;
 testhealth=testhealth-scratchdamage;
 contin(cntnu);
 cout<<" The gorilla only has "<<testhealth<<" health left!\n Finish it off!"<<endl ;
}
else if (choice==3){
  cout<<endl<<petname<<" used "<<move3<<" which did "<<move3damage<<" damage!"<<endl;
 testhealth=testhealth-move3damage;
 contin(cntnu);
 cout<<" The gorilla only has "<<testhealth<<" health left!\n Finish it off!"<<endl ;
}
if(evolve==true){
  move(petname,move1,move2,move3);
  cin>>choice;
  inputc(choice);
}
else if(evolve==false){
  unevo(petname,move1,move2);
  cin>>choice;
  inputc(choice);
}
  if(choice==1){
  cout<<endl<<petname<<" used "<<move1<<" which did no damage.";
  contin(cntnu);
  cout<<endl<<"The gorilla is attacking!\n It did 50  damage"<<endl;
  pethealth=pethealth-enemydamage;
  cout<<endl<<petname<<" only has "<<pethealth<<" health left!"<<endl;
}
else if (choice==2){
 cout<<endl<<petname<<" used "<<move2<<" which did "<<scratchdamage<<" damage!"<<endl;
 testhealth=testhealth-scratchdamage;
 if(enemyhealth<0){
   enemyhealth=0;
 }
 contin(cntnu);
 cout<<" The gorilla has "<<testhealth<<" health left!"<<endl ;
}
else if (choice==3){
  cout<<endl<<petname<<" used "<<move3<<" which did "<<move3damage<<" damage!"<<endl;
 testhealth=testhealth-move3damage;
  if(enemyhealth<0){
   enemyhealth=0;
 }
 
 cout<<endl<<" The gorilla has "<<testhealth<<" health left!"<<endl ;
 contin(cntnu);
 }
 if(enemyhealth<1){
   cout<<endl<<"You deafeated the gorilla!"<<endl;
   contin(cntnu);
   cout<<"The gorilla dropped a potion that says HEALTH UP on it.\nYou feed the potion to "<<petname<<" and his health increases to 300!"<<endl;
   pethealth=300;
 }
 else if(enemyhealth>0){
   cout<<endl<<"The gorilla ran away because you didnt defeat it fast enough!"<<endl;
 }

  }
  contin(cntnu);
cout<<"\nYou continue down the "<<path<<" path until you come across a cave"<<endl;
contin(cntnu);
cout<<endl<<"remembering the message your brother last sent, you enter the cave prepared for the worst."<<endl;
contin(cntnu);
 cout<<endl<<"As you continue walking you step on something and hear a crunching sound"<<endl;
 contin(cntnu);
 cout<<endl<<"You look down and see your brothers watch on the floor, the one that he never took off since it was givin to him by your late father."<<endl;
 contin(cntnu);
 cout<<endl<<"You resolve yourself to continue going no matter what horrifying things might be up ahead"<<endl;
 contin(cntnu);
 cout<<endl<<"You hear a gut wrenching scream and run towards it recognizing your brothers voice\n";
 contin(cntnu);
 cout<<"\nAs you run towards the sound you see a cavern with light flowing out of it, you enter too see your brother chained up on the wall and a man holding a metal bat stained with your brothers blood\n";
 contin(cntnu);
 cout<<"\n the man turns around and his face looks very familiar then you hear his voice as he says \" Its been a while hasn't it "<<name<<"\"\nthen you realize....";
 contin(cntnu);
 cout<<"\nTHAT MAN IS YOUR FATHER!\nYou ask him why and he says that he only married your mother because of the treasure hidden by her grandfather and after so many years she never told him so he moved on to the next in line in the family to recieve the secret\n";
 contin(cntnu);

cout<<"\n you think to yourself \"right now he is defenseless and I can easily order "<<petname<<" to kill him....but he is still my father....but he never really loved us he was in it for just the treasure\"\n you resolve yourself to make a choice \n";
contin(cntnu);
cout<<"Choose an option\n1.Kill your father and save your brother\n2.Order "<<petname<<" to keep him busy while you free your brother\n";
cin>>choice;
if(choice!=1&&choice!=2){
  cout<<"\ninvalid input read directions and try again.";
  cin>>choice;

}
if(choice==1){
  cout<<"You tell "<<petname<<" to use "<<move3<<" on your father instantly killing him.\n";
  contin(cntnu);
  cout<<"You will never be the same but your decsion was for the best....the man you knew died the day your father faked his death and the body before you is not something you can call a father\n";
}
else if(choice==2){
  cout<<"\n You tell your father not to move or "<<petname<<" will instantly kill him\n";
  contin(cntnu);
  cout<<"\n He steps back and trips on the metal bat he dropped when you first walked in hitting his head on a sharp rock.\n you see a pool of blood begin to form and check his pulse....hes dead but it was for the best....the man you knew died the day your father faked his death and the body before you is not something you can call a father \n";
  
}
contin(cntnu);
cout<<"\nYou free your brother and leave the cave \n";
contin(cntnu);
cout<<"\nYour brother says that he blacked out from the pain and ask you to tell him what happened\nchoose an option\n1.Tell him the truth\n2.Say your father ran\n";
cin>>choice;
switch(choice)
{
  case 1: cout<<"\nYou tell him the truth and he says that you did nothing wrong and thanks you for saving his life\n";
  break;
  case 2: cout<<"\n You lie and he thanks you for saving his life with a relieved look on his face...you cant tell him the truth knowing what it would do to him\n";
  break;
  default: cout<<"\nYou cant make a decision and tell him you dont remeber it was all a blur\n";
}
cout<<"Your brother, "<<petname<<" and you return home and your journey comes to an end.\n\nYOU WIN";
 }
