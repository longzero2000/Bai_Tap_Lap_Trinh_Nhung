int LDR = A5;
int LED = 8;
void setup () {
pinMode(LDR, INPUT);
pinMode(LED, OUTPUT);
Serial.begin (9600);
}
void loop ()
{
int lightLevel = analogRead(LDR);
Serial.println(lightLevel); // Hiển thị giá trị trong màn hình nối tiếp
if (lightLevel > 600) // Nếu giá trị đo được từ LDR lớn hơn hoặc bằng 600
{
digitalWrite (LED, HIGH); // Bật đèn LED
}
else {
digitalWrite (LED, LOW); // Tắt đèn LED
}
}
