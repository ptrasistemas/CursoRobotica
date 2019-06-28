const int Trigger = 13;
const int Echo = 12;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(Trigger,OUTPUT); //pin de salida
  pinMode(Echo,INPUT); //pin de entrada
  digitalWrite(Trigger,LOW); //Inicializamos el pin de salida a 0
  

}

void loop() {
  // put your main code here, to run repeatedly:

  long d; //distancia
  long t; //tiempo

  digitalWrite(Trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger,LOW);

  t = pulseIn(Echo,HIGH); //obtenemos el tiempo
  d = t/59; // distancia en centímetros

  Serial.print ("Distancia: ");
  Serial.print (d);
  Serial.print ("cms");
  Serial.println ();

  delay(100);
  


  
  
  

}
