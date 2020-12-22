int ml = A0;  //Motor DC dihubungkan ke pin analog A0 Arduino
int h = 255;  //5 Volt
int l = 0;    //0 Volt
String motion;

void setup() {
  Serial.begin(9600);
  pinMode(ml, OUTPUT);
}

void loop(){
  Serial.println("Silahkan ketik 'p' untuk memutar, 's' untuk berhenti ");
  while(Serial.available()==0){  }  //Selama tidak ada data yang datang dari serial port (modul bluetooth receiver), maka eksekusi loop (tidak dilanjutkan ke perintah selanjutnya)
  motion = Serial.readString();     //Membaca data dari modul bluetooth receiver
  if(motion = "p"){
    analogWrite(ml,l);
  }
  if(motion = "s"){
    analogWrite(ml,h);
  }
}
