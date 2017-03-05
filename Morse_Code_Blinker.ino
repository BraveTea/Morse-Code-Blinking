/* in international morse code the following lengths are used. 
 *  1. The length of a dot is one unit
 *  2. The length of a dash is three units
 *  3. The space between parts of the same letter is one unit
 *  4. The space between letters is three units
 *  5. The space between words is seven units
 *  
 *  as of yet my code doesn't take this into account fully, 
 *  but I have been setting it up so I can change it easily 
 *  to conform to regulations.
 */


const int obLed = 13;
const int shrt = 333;
const int lng = 999;
const int lngst = 1665;


void setup()
{
  pinMode(obLed, OUTPUT);
}

void loop()
{
  b();
  a();
  c();
  h();
  space();
  r();
  u();
  l();
  e();
  s();
  space();
}

void obLedOn()
{
  digitalWrite(obLed, HIGH);
}

void obLedOff()
{
  digitalWrite(obLed, LOW);
}

void dot()
{
  obLedOn();
  delay(shrt);
  obLedOff();
  delay(shrt);
}

void dash()
{
  obLedOn();
  delay(lng);
  obLedOff();
  delay(shrt);
}

void LE() //LE = LetterEnd
{
  delay(lng);
}

void space() //space = space between words
{
  delay(lngst);
}

void a()
{
  dot();
  dash();
  LE();
}

void b()
{
  dash();
  for (int i = 0; i < 3; i++)
  dot();
  LE();
}

void c()
{
  dash();
  dot();
  dash();
  dot();  
  LE();
}

void d()
{
  dash();
  for (int i = 0; i < 2; i++) //I know this is overkill here, but it is good practise
  dot();
  LE();
}

void e()
{
  dot();
  LE();
}

void f()
{
  dot();
  dot();
  dash();
  dot();
  LE();
}

void g()
{
  dash();
  dash();
  dot();
  LE();
}

void h()
{
  for (int i = 0; i < 4; i++)
  dot();
  LE();
}

void i()
{
  dot();
  dot();
  LE();
}

void j()
{
  dot();
  for (int i = 0; i < 3; i++)
  dash();
  LE();
}

void k()
{
  dash();
  dot();
  dash();
  LE();
}

void l()
{
  dot();
  dash();
  dot();
  dot();
  LE();
}

void m()
{
  dash();
  dash();
  LE();
}

void n()
{
  dash();
  dot();
  LE();
}

void o()
{
  for (int i = 0; i < 3; i++)
  dash();
  LE();
}

void p()
{
  dot();
  dash();
  dash();
  dot();
  LE();
}

void q()
{
  dash();
  dash();
  dot();
  dash();
  LE();
}

void r()
{
  dot();
  dash();
  dot();
  LE();
}

void s() //left this one in as a reminder of where it came from
{         //it went from 11 lines of code to 5 :-D
  int i; 
  for (i = 0; i < 3; i++)
  {
    obLedOn();
    delay(shrt);
    obLedOff();
    delay(shrt);
  }
  LE();
}

void t()
{
  dash();
  LE();
}

void u()
{
  dot();
  dot();
  dash();
  LE();
}

void v()
{
  for (int i = 0; i < 3; i++)
  dot();
  dash();
  LE();
}

void w()
{
  dot();
  dash();
  dash();
  LE();
}

void x()
{
  dash();
  dot();
  dot();
  dash();
  LE();
}

void y()
{
  dash();
  dot();
  dash();
  dash();
  LE();
}

void z()
{
  dash();
  dash();
  dot();
  dot();
  LE();
}


void one()
{
  dot();
  for (int i = 0; i < 4; i++)
  dash();
  LE();
}

void two()
{
  for (int i = 0; i < 2; i++)
  dot();
  for (int i = 0; i < 3; i++)
  dash();
  LE();
}

void three()
{
  for (int i = 0; i < 3; i++)
  dot();
  for (int i = 0; i < 2; i++)
  dash();
  LE();
}

void four()
{
  for (int i = 0; i < 4; i++)
  dot();
  for (int i = 0; i < 1; i++)
  dash();
  LE();
}

void five()
{
  for (int i = 0; i < 5; i++)
  dot();
  LE();
}

void six()
{
  for (int i = 0; i < 1; i++) //reason = copy/paste
  dash();
  for (int i = 0; i < 4; i++)
  dot();
  LE();
}

void seven()
{
  for (int i = 0; i < 2; i++)
  dash();
  for (int i = 0; i < 3; i++)
  dot();
}

void eight()
{
  for (int i = 0; i < 3; i++)
  dash();
  for (int i = 0; i < 2; i++)
  dot();
  LE();
}

void nine()
{
  for (int i = 0; i < 4; i++)
  dash();
  for (int i = 0; i < 1; i++)
  dot();
  LE();
}

void nought()
{
  for (int i = 0; i < 5; i++)
  dash();
  LE();
}

