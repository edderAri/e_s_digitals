/****************************************************************
**                                                             **
**                           TÍTOL: Cubo 3x3x3                 **
**                                                             **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 23/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int led1 = 10;
int led2 = 9;
int led3 = 8;
int led4 = 7;
int led5 = 6;
int led6 = 5;
int led7 = 4;
int led8 = 3;
int led9 = 2;
int pis1 = 11;
int pis2 = 12;
int pis3 = 13;
int pausa = 200;

//************************* SETUP *******************************

void setup()                // configura el final de salida
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(pis1, OUTPUT);
  pinMode(pis2, OUTPUT);
  pinMode(pis3, OUTPUT);

}



//************************** LOOP *******************************

void loop()               // inicia el bucle del programa
{


  // pis 1 (encendre i apagar els leds del 1 al 9)
  
  digitalWrite (led1, HIGH);
  digitalWrite (pis1, HIGH);

  delay(pausa);

  digitalWrite (led1, LOW);
  digitalWrite (pis1, LOW);

  delay(pausa);

  digitalWrite (led2, HIGH);
  digitalWrite (pis1, HIGH);
 
  delay(pausa);
 
  digitalWrite (led2, LOW);
  digitalWrite (pis1, LOW);
  
  delay(pausa);

  digitalWrite (led3, HIGH);
  digitalWrite (pis1, HIGH);
 
  delay(pausa);
 
  digitalWrite (led3, LOW);
  digitalWrite (pis1, LOW);
 
  delay(pausa);

  digitalWrite (led4, HIGH);
  digitalWrite (pis1, HIGH);
  
  delay(pausa);
 
  digitalWrite (led4, LOW);
  digitalWrite (pis1, LOW);
 
  delay(pausa);

  digitalWrite (led5, HIGH);
  digitalWrite (pis1, HIGH);
 
  delay(pausa);
 
  digitalWrite (led5, LOW);
  digitalWrite (pis1, LOW);
  
  delay(pausa);

  digitalWrite (led6, HIGH);
  digitalWrite (pis1, HIGH);
  
  delay(pausa);
  
  digitalWrite (led6, LOW);
  digitalWrite (pis1, LOW);
  
  delay(pausa);

  digitalWrite (led7, HIGH);
  digitalWrite (pis1, HIGH);
 
  delay(pausa);
  
  digitalWrite (led7, LOW);
  digitalWrite (pis1, LOW);
 
  delay(pausa);

  digitalWrite (led8, HIGH);
  digitalWrite (pis1, HIGH);
  
  delay(pausa);
  
  digitalWrite (led8, LOW);
  digitalWrite (pis1, LOW);
  
  delay(pausa);

  digitalWrite (led9, HIGH);
  digitalWrite (pis1, HIGH);
 
  delay(pausa);
  
  digitalWrite (led9, LOW);
  digitalWrite (pis1, LOW);
 
  delay(pausa);



  // pis 2 (encendre i apagar els leds del 1 al 9)
  
  digitalWrite (led1, HIGH);
  digitalWrite (pis2, HIGH);
 
  delay(pausa);
 
  digitalWrite (led1, LOW);
  
  digitalWrite (pis2, LOW);
 
  delay(pausa);

  digitalWrite (led2, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
  
  digitalWrite (led2, LOW);
  digitalWrite (pis2, LOW);
  
  delay(pausa);

  digitalWrite (led3, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
  
  digitalWrite (led3, LOW);
  digitalWrite (pis2, LOW);
 
  delay(pausa);

  digitalWrite (led4, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
 
  digitalWrite (led4, LOW);
  digitalWrite (pis2, LOW);
  
  delay(pausa);

  digitalWrite (led5, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
  
  digitalWrite (led5, LOW);
  digitalWrite (pis2, LOW);
  
  delay(pausa);

  digitalWrite (led6, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
  
  digitalWrite (led6, LOW);
  digitalWrite (pis2, LOW);
 
  delay(pausa);

 
  digitalWrite (led7, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
  
  digitalWrite (led7, LOW);
  digitalWrite (pis2, LOW);
  
  delay(pausa);

  digitalWrite (led8, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
 
  digitalWrite (led8, LOW);
  digitalWrite (pis2, LOW);
  
  delay(pausa);

  digitalWrite (led9, HIGH);
  digitalWrite (pis2, HIGH);
  
  delay(pausa);
  
  digitalWrite (led9, LOW);
  digitalWrite (pis2, LOW);
 
  delay(pausa);



  // pis3 (encendre i apagar els leds del 1 al 9)

  digitalWrite (led1, HIGH);
  digitalWrite (pis3, HIGH);
 
  delay(pausa);
 
  digitalWrite (led1, LOW);
  digitalWrite (pis3, LOW);
  
  delay(pausa);

  digitalWrite (led2, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
 
  digitalWrite (led2, LOW);
  digitalWrite (pis3, LOW);
  
  delay(pausa);

  digitalWrite (led3, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
  
  digitalWrite (led3, LOW);
  digitalWrite (pis3, LOW);
 
  delay(pausa);

  digitalWrite (led4, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
  
  digitalWrite (led4, LOW);
  digitalWrite (pis3, LOW);
 
  delay(pausa);

  digitalWrite (led5, HIGH);
  digitalWrite (pis3, HIGH);
 
  delay(pausa);
  
  digitalWrite (led5, LOW);
  digitalWrite (pis3, LOW);
 
  delay(pausa);

  digitalWrite (led6, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
 
  digitalWrite (led6, LOW);
  digitalWrite (pis3, LOW);
  
  delay(pausa);

  digitalWrite (led7, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
  
  digitalWrite (led7, LOW);
  digitalWrite (pis3, LOW);
  
  delay(pausa);

  digitalWrite (led8, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
  
  digitalWrite (led8, LOW);
  digitalWrite (pis3, LOW);
  
  delay(pausa);

  digitalWrite (led9, HIGH);
  digitalWrite (pis3, HIGH);
  
  delay(pausa);
 
  digitalWrite (led9, LOW);
  digitalWrite (pis3, LOW);
  
  delay(pausa);

}


//************************* FUNCIONS ****************************
