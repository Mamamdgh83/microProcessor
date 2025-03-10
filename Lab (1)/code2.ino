int inPin = 7;                     // PUSH BUTTON متصل به پایه هفتم
int val = 0;                       // متغیر برای ذخیره مقدار خوانده شده
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);    // تنظیم پین LED_BUILTIN به عنوان خروجی
  pinMode(inPin, INPUT);           // تنظیم پین inPin به عنوان ورودی
}

void loop() {
  val = digitalRead(inPin);        // خواندن پین ورودی
  digitalWrite(LED_BUILTIN, val);  // تنظیم LED بر اساس مقدار PUSH BUTTON
}
