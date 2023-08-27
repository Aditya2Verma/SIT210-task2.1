//name aditya
//roll no 2210994754

int unit = 200;
int Three_unit = 600;
int button = 0;

volatile bool btnpressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(2,INPUT);

  attachInterrupt(digitalPinToInterrupt(2),pressed,RISING);
}

void DOT() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit);
}

void DASH() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(Three_unit);
}

void BREAK() {
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}


void A() {
  DOT();
  BREAK();
  DASH();
}



void D() {
  DASH();
  BREAK();
  DOT();
  BREAK();
  DOT();
}



void I() {
  DOT();
  BREAK();
  DOT();
}



void T() {
  DASH();
}


void Y() {
  DASH();
  BREAK();
  DOT();
  BREAK();
  DASH();
  BREAK();
  DASH();
}



void name_fuction()
{
  char name[] = "ADITYA";

  for (int i = 0; name[i] != '\0'; i++) {
    char current = name[i];

    switch (current) {
      case 'A':
        A();
        break;
     
      case 'D':
        D();
        break;

      case 'I':
        I();
        break;
      
      case 'T':
        T();
        break;
      
      case 'Y':
        Y();
        break;
      
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  button =  digitalRead(2);
  if( button == 1)
  {
    name_fuction();
    digitalWrite(LED_BUILTIN,LOW);  
  }

  delay(4000);
}


void pressed()
{
  
  NVIC_SystemReset();

}