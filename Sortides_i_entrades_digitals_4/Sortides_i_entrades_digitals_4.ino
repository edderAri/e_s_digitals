/****************************************************************
**                                                             **
**                           TÍTOL: Cruilla semafors           **      
**                                                             **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 23/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************

const int semaforAR = 7;         
const int semaforAT = 8;          
const int semaforAV = 9;          
const int semaforBR = 10;         
const int semaforBT = 11;         
const int semaforBV = 12;        
int pausa = 1000;             

//********** Setup ****************************************************************
void setup()
{
  pinMode(semaforAR, OUTPUT);    
  pinMode(semaforAT, OUTPUT);     
  pinMode(semaforAV, OUTPUT);     
  pinMode(semaforBR, OUTPUT);     
  pinMode(semaforBT, OUTPUT);     
  pinMode(semaforBV, OUTPUT);     
  
  digitalWrite(semaforAR, HIGH);   
  digitalWrite(semaforAT, LOW);    
  digitalWrite(semaforAV, LOW);   
  digitalWrite(semaforBR, HIGH);   
  digitalWrite(semaforBT, LOW);    
  digitalWrite(semaforBV, LOW);     // semàfor A i B en vermell
  
  delay(pausa);                     
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(semaforBR, LOW);     
  digitalWrite(semaforBV, HIGH);    // semàfor B en verd
  
  delay(4*pausa);   
  
  digitalWrite(semaforBV, LOW);     
  digitalWrite(semaforBT, HIGH);    // semàfor B en groc
  
  delay(pausa);                     
  
  digitalWrite(semaforBT, LOW);     
  digitalWrite(semaforBR, HIGH);    // semàfor B en vermell
   
  delay(pausa);                    
  
  digitalWrite(semaforAR, LOW);   
  digitalWrite(semaforAV, HIGH);    // semàfor A en verd
  
  delay(4*pausa);                   
  
  digitalWrite(semaforAV, LOW);    
  digitalWrite(semaforAT, HIGH);    // semàfor A en groc
  
  delay(pausa);                     
  
  digitalWrite(semaforAT, LOW);     
  digitalWrite(semaforAR, HIGH);    //  semàfor A en vermell
  
   delay(pausa);                    
}

//************************* FUNCIONS ****************************
