
void setup() {
  pinMode(LED_BUILTIN OUTPUT); //  تنظیم پین LED_BUILTIN به عنوان خروجی
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // روشن کردن LED
  delay(1000);                      // مکث به مدت 1 ثانیه
  digitalWrite(LED_BUILTIN, LOW);   // خاموش کردن LED
  delay(1000);                      // مکث به مدت 1 ثانیه
}
