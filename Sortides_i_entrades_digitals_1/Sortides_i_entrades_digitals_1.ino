/****************************************************************
**                                                             **
**                      TÍTOL: Sortides i entrades digitals    **      
**                                                             **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 23/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************


//************************* SETUP *******************************

void setup() {               // configura el final de salida
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa
 digitalWrite(5, HIGH);
 digitalWrite(6, HIGH);
 digitalWrite(7, HIGH);
 digitalWrite(8, HIGH);
 digitalWrite(9, HIGH);
 digitalWrite(10, HIGH);
 digitalWrite(11, HIGH);
 digitalWrite(12, HIGH);

 delay(500);

 digitalWrite(5, LOW); 
 digitalWrite(6, LOW); 
 digitalWrite(7, LOW); 
 digitalWrite(7, LOW); 
 digitalWrite(8, LOW); 
 digitalWrite(9, LOW); 
 digitalWrite(10, LOW); 
 digitalWrite(11, LOW); 
 digitalWrite(12, LOW); 

 delay(500);

}

//************************* FUNCIONS ****************************
