# شرح ازمایش اول :
## روشن و خاموش کردن $${\color{Red}LED \space BUILTIN}$$ با استفاده از $${\color{Blue}PUSH \space BUTTON}$$ بدون استفاده از مقاومت داخلی ($${\color{Yellow}PULL \space UP}$$)

### هدف آزمایش : 
هدف از انجام این آزمایش مبنی بر این است که تابع `PUll UP` را با بدون اسفتاده از مقاومت داخلی طوری بر مدار پیاده سازی کنیم که با فشار دادن $${\color{Blue}PUSH \space BUTTON}$$ بتواینم $${\color{Red}LED \space BUILTIN}$$ خاموش و روشن کنیم.

 ### وسایل مورد نیاز آزمایش : 
* برد آردوینو $${\color{lightblue}UNO \space}$$
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینوIDE 
* $${\color{Red}LED \space BUILTIN}$$ یک عدد
* $${\color{Blue}PUSH \space BUTTON}$$ یک عدد
* مقداری سیم جامپر
* مقاومت 10k اهم و 220 اهم
* 
* ### شرح آزمایش :

در این آزمایش، سعی داریم $${\color{Red}LED \space BUILTIN}$$ روی برد آردیونو را با $${\color{Blue}PUSH \space BUTTON}$$ طریق برنامه نوشته شده IDE  و `PUll UP` کنیم.

**کد پروژه :**
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/Code1.jpg)

# توضیحات کلی کد :
* **تنظیم حالت پین :** در ابتدا پایه 8 به عنوان `ورودی` یا `In Pin` در نظر گرفته شده و پین 2 به عنوان `خروجی` یا  `Out Put` در تابع `setup`، پین $${\color{Red}LED \space PIN}$$ به عنوان خروجی پیش فرض قابل تغییر تنظیم می‌شود تا بتوانیم به آن مقدار  از طریق $${\color{Blue}PUSH \space BUTTON}$$ و آن را روشن یا خاموش کنیم.
* همچنین متغییر`Val`به عنوان مقدار Low و یا High بودن $${\color{Red}LED \space BUILTIN}$$ تعریف میشود.
* **حلقه اصلی :** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار، $${\color{Red}LED \space BUILTIN}$$ با فشار داده شدن $${\color{Blue}PUSH \space BUTTON}$$ به متغییر `Val` فرمان `PUll UP` و همچنین Low و  High را از طریق دستور شرطی `IF`  میدهد.
* 
**شماتیک مدار :**
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/ax1.jpg)
* **توضیح شماتیک :**
* مقاومت 10k اهم به $${\color{Blue}PUSH \space BUTTON}$$ و مقاومت 220 اهم به $${\color{Red}LED \space BUILTIN}$$ و همچنین 5V برق و GND زمین را $${\color{Blue}PUSH \space BUTTON}$$ و خروجی ان را به پین 8 و پین 2 را به $${\color{Red}LED \space BUILTIN}$$  و طرف دیگر آن را به GND متصل می کنیم.
### نتیجه گیری :
در این آزمایش ما توانستیم با موفقیت $${\color{Red}LED \space BUILTIN}$$ را با $${\color{Blue}PUSH \space BUTTON}$$ زن روشن و خاموش یا `PUll UP` کنیم.


# شرح آزمایش دوم :
## روشن و خاموش کردن $${\color{Red}LED \space BUILTIN}$$ با استفاده از $${\color{Blue}PUSH \space BUTTON}$$ با استفاده از مقاومت داخلی (PULL UP).

### هدف آزمایش : 
هدف از انجام این آزمایش مبنی بر این است که تابع `PUll UP` را با استفاده از مقاومت داخلی طوری بر مدار پیاده سازی کنیم که با فشار دادن $${\color{Blue}PUSH \space BUTTON}$$ بتواینم $${\color{Red}LED \space BUILTIN}$$ خاموش و روشن کنیم.

 ### وسایل مورد نیاز آزمایش : 
* برد آردوینو $${\color{lightblue}UNO \space}$$
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینوIDE 
* $${\color{Red}LED \space BUILTIN}$$ یک عدد
* $${\color{Blue}PUSH \space BUTTON}$$ یک عدد
* مقداری سیم جامپر
* مقاومت 220 اهم
* 
* ### شرح آزمایش :

در این آزمایش، سعی داریم $${\color{Red}LED \space BUILTIN}$$ روی برد آردیونو را با $${\color{Blue}PUSH \space BUTTON}$$ طریق برنامه نوشته شده IDE  و با مقاومت داخلی خورد برد آردینو `PUll UP` کنیم.

**کد پروژه :**
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/Code%202.jpg)


# توضیحات کلی کد :
* **تنظیم حالت پین :** در ابتدا پایه 4 به عنوان `ورودی` یا `In Pin` در نظر گرفته شده و پین 2 به عنوان `خروجی` یا  `Out Put` در تابع `setup`، پین $${\color{Red}LED \space PIN}$$ به عنوان خروجی پیش فرض قابل تغییر تنظیم می‌شود (`PUll UP`) تا بتوانیم به آن مقدار  از طریق $${\color{Blue}PUSH \space BUTTON}$$ و آن را روشن یا خاموش کنیم.
* همچنین متغییر`Val`به عنوان مقدار Low و یا High بودن $${\color{Red}LED \space BUILTIN}$$ تعریف میشود.(`In Pin`)
* **حلقه اصلی :** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار، $${\color{Red}LED \space BUILTIN}$$ با فشار داده شدن $${\color{Blue}PUSH \space BUTTON}$$ به متغییر `Val` فرمان `PUll UP` و همچنین Low و  High را از طریق دستور شرطی `IF` نسبت به `In Pin` میدهد.

**شماتیک مدار :**
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/ax2.jpg)
* **توضیح شماتیک :**
* مقاومت 10k اهم  که در آزمایش قبلی استفاده کردیم ، در این آزمایش نیاز نیست استفاده کنیم اما پین 4 و GND به $${\color{Blue}PUSH \space BUTTON}$$ و مقاومت 220 اهم به $${\color{Red}LED \space BUILTIN}$$ به GND زمین و خروجی ان را به پین 2 $${\color{Red}LED \space BUILTIN}$$ متصل می کنیم.
### نتیجه گیری :
در این آزمایش ما توانستیم با مقاومت داخلی خود برد آردوینو $${\color{lightblue}UNO \space}$$ با موفقیت $${\color{Red}LED \space BUILTIN}$$ را با $${\color{Blue}PUSH \space BUTTON}$$ زن روشن و خاموش یا `PUll UP` کنیم.
* تفاوت این ازمایش نسبت به ازمایش قبلی این است که از عدم نیاز خود به مقاومت 10k اهم و تغییرات جزعی در کد برنامه و عدم استفاده از سیم جامپر کمتر استفاده کردیم.

 
# شرح آزمایش سوم :
## طراحی و اجرا روشن و خاموش کردن 3 عدد LED به عنوان چراغ راهنمایی رانندگی با استفاده از توابع تاخیر (DELAY).

### هدف آزمایش :
هدف از انجام این آزمایش این است که بتوانیم شبه پروژه و شبه کد از یک سیستم چراغ راهنمایی رانندگی در تقاطع ها با استفاده از برد آردوینو $${\color{lightblue}UNO \space}$$ پیاده سازی کنیم.

 ### وسایل مورد نیاز آزمایش : 
* برد آردوینو $${\color{lightblue}UNO \space}$$
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینوIDE 
* 3 عدد $${\color{Red}LED \space BUILTIN}$$

* مقداری سیم جامپر
* 3عدد مقاومت 220 اهم
*

### شرح آزمایش :

در این آزمایش، سعی داریم با 3 عدد $${\color{Red}LED \space BUILTIN}$$ روی برد آردوینو $${\color{lightblue}UNO \space}$$  یک چراغ راهنمایی رانندگی و از طریق برنامه نوشته شده IDE پیاده سازی و با 3 مقاومت و تابع `Delay` اجرا کنیم.


**کد پروژه :**

![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/Code%203.jpg)


# توضیحات کلی کد :
* **تنظیم حالت پین :** در ابتدا پایه 3 و 4 و 5 به ترتیب برای چراغ های $${\color{Green}Green \space }$$ و $${\color{Yellow}Yellow \space }$$ و $${\color{Red}RED \space }$$ به عنوان خروجی تعریف میشوند.
* همچنین تابع `Setup` برای `Out Put` رنگ چراغ ها تعریف میشوند.
* **حلقه اصلی :** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار اول چراغ $${\color{Green}Green \space }$$  روشن (High) و با تاخیر 70 به مقدار (Low) و پس از آن چراغ $${\color{Yellow}Yellow \space }$$ با همین روال و پس از آن دوباره چراغ $${\color{Red}RED \space }$$ روشن و پس از آن به روال از اول شروع میگردد.
