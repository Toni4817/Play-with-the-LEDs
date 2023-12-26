//LIEN CIRCUIT : https://www.tinkercad.com/things/cZHpxAV7ZMU-smooth-migelo/editel?tenant=circuits

#define vert 8
#define rouge 9
#define jaune 10
#define vert2 7
#define bleu 6
#define jaune2 5

void setup() {
  pinMode(vert, OUTPUT);
  pinMode(rouge, OUTPUT);
  pinMode(jaune, OUTPUT);
   pinMode(vert2, OUTPUT);
  pinMode(bleu, OUTPUT);
  pinMode(jaune2, OUTPUT);
}

void loop() {
  digitalWrite(jaune2, 0); //leds en rond 
  digitalWrite(vert, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 1);
  delay(150); //bas
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(vert2, 0);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 1);
  delay(150);

  digitalWrite(jaune2, 0);//leds en rond2
  digitalWrite(vert, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 1);
  delay(150); //bas
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(vert2, 0);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 1);
  delay(150);

  digitalWrite(jaune2, 0); //leds en rond3
  digitalWrite(vert, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 1);
  delay(150); //bas
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(vert2, 0);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 1);
  delay(150);

  digitalWrite(jaune2, 0); //leds en rond inverse
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(jaune, 0);
  digitalWrite(rouge, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(vert, 1);
  delay(150); //bas
  digitalWrite(vert, 0);
  digitalWrite(jaune2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 1);
  delay(150);

  digitalWrite(vert2, 0); //leds en rond inverse 2
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(jaune, 0);
  digitalWrite(rouge, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(vert, 1);
  delay(150); //bas
  digitalWrite(vert, 0);
  digitalWrite(jaune2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 1);
  delay(150);

  digitalWrite(vert2, 0); //leds en rond inverse 3
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(jaune, 0);
  digitalWrite(rouge, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(vert, 1);
  delay(150); //bas
  digitalWrite(vert, 0);
  digitalWrite(jaune2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 1);
  delay(150);

  digitalWrite(vert, 1);//clignoter les leds
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  digitalWrite(vert2, 1);
  digitalWrite(bleu, 1);
  digitalWrite(jaune2, 1);
  delay(100);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 0);
  delay(100);

  digitalWrite(vert, 1);//clignoter les leds2
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  digitalWrite(vert2, 1);
  digitalWrite(bleu, 1);
  digitalWrite(jaune2, 1);
  delay(100);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 0);
  delay(150);

  digitalWrite(vert, 1);//leds droite gauche
  digitalWrite(jaune2, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(jaune2, 0);
  digitalWrite(rouge, 1);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(bleu, 0);
  digitalWrite(jaune, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 0);
  delay(150);

  digitalWrite(jaune, 1);//leds gauche droite
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(vert2, 0);
  digitalWrite(jaune, 0);
  digitalWrite(rouge, 1);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 1);
  digitalWrite(vert, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(vert, 0);
  delay(150);
  
  digitalWrite(vert, 1);//leds droite gauche2
  digitalWrite(jaune2, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(jaune2, 0);
  digitalWrite(rouge, 1);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(bleu, 0);
  digitalWrite(jaune, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune, 0);
  digitalWrite(vert2, 0);
  delay(150);

  digitalWrite(jaune, 1);//leds gauche droite2
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(vert2, 0);
  digitalWrite(jaune, 0);
  digitalWrite(rouge, 1);
  digitalWrite(bleu, 1);
  delay(150);
  digitalWrite(rouge, 0);
  digitalWrite(bleu, 0);
  digitalWrite(jaune2, 1);
  digitalWrite(vert, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(vert, 0);
  delay(150);

  digitalWrite(vert, 1); //leds haut bas
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  digitalWrite(jaune2, 1);
  digitalWrite(bleu, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 0);
  delay(150);

  digitalWrite(vert, 1); //leds haut bas2
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  digitalWrite(jaune2, 1);
  digitalWrite(bleu, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 0);
  delay(150);

  digitalWrite(vert, 1); //leds haut bas3
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  digitalWrite(jaune2, 1);
  digitalWrite(bleu, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 0);
  delay(150);

  digitalWrite(jaune2, 1); //leds bas haut 
  digitalWrite(bleu, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 0);
  digitalWrite(vert, 1);
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  delay(150);

  digitalWrite(jaune2, 1); //leds bas haut2
  digitalWrite(bleu, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 0);
  digitalWrite(vert, 1);
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  delay(150);

  digitalWrite(jaune2, 1); //leds bas haut3
  digitalWrite(bleu, 1);
  digitalWrite(vert2, 1);
  delay(150);
  digitalWrite(jaune2, 0);
  digitalWrite(bleu, 0);
  digitalWrite(vert2, 0);
  digitalWrite(vert, 1);
  digitalWrite(rouge, 1);
  digitalWrite(jaune, 1);
  delay(150);
  digitalWrite(vert, 0);
  digitalWrite(rouge, 0);
  digitalWrite(jaune, 0);
  delay(150);

  delay(500);
}