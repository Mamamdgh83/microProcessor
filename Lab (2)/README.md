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
* 3عدد مقاومت 220 اهم
* برد آردوینو $${\color{lightblue}UNO \space}$$
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینوIDE 
* $${\color{Red}LED \space BUILTIN}$$ سه عدد
* مقداری سیم جامپر

### شرح آزمایش :

در این آزمایش، سعی داریم با 3 عدد $${\color{Red}LED \space BUILTIN}$$ روی برد آردوینو $${\color{lightblue}UNO \space}$$  یک چراغ راهنمایی رانندگی و از طریق برنامه نوشته شده IDE پیاده سازی و با 3 مقاومت و تابع `Delay` اجرا کنیم.


**کد پروژه :**

![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/Code%203.jpg)


# توضیحات کلی کد :
* **تنظیم حالت پین :** در ابتدا پایه 3 و 4 و 5 به ترتیب برای چراغ های $${\color{Green}Green \space }$$ و $${\color{Yellow}Yellow \space }$$ و $${\color{Red}RED \space }$$ به عنوان خروجی تعریف میشوند.
* همچنین تابع `Setup` برای `Out Put` رنگ چراغ ها تعریف میشوند.
* **حلقه اصلی :** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار اول چراغ $${\color{Green}Green \space }$$  روشن (High) و با تاخیر 70 به مقدار (Low) و پس از آن چراغ $${\color{Yellow}Yellow \space }$$ با همین روال و پس از آن دوباره چراغ $${\color{Red}RED \space }$$ روشن و پس از آن به روال از اول شروع میگردد.
 
**شماتیک مدار:**
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/ax3.jpg)

* **توضیح شماتیک :**
* برای هر کدام از $${\color{Red}LED \space BUILTIN}$$ ها یک مقاومت 220 اهم وصل کرده و یک سر ان را به `Gnd` متصل کرده و پین 3 برای $${\color{Green}Green \space }$$ و پین 4 برای $${\color{Yellow}Yellow \space }$$ و پین 5 برای $${\color{Red}RED \space }$$ به LED ها متصل میکنیم.
### نتیجه گیری :
در این آزمایش ما توانستیم با 3 عدد مقاومت 220 اهم و یک برد آردوینو $${\color{lightblue}UNO \space}$$ و 3 عدد LED یک مینی پروژه از چراغ راهنمایی ($${\color{Green}Green \space }$$ و $${\color{Yellow}Yellow \space }$$ و $${\color{Red}RED \space }$$ )در تقاطع ها پیاده سازی کنیم.

# شرح آزمایش چهارم :
## طراحی و اجرا تابلو روان با استفاده از ماتریس ها و چند عدد $${\color{Red}LED \space BUILTIN}$$ و $${\color{Blue}PUSH \space BUTTON}$$ برای پیاده سازی حالت های متفاوت روشن و خاموش شدن LED ها
### هدف آزمایش :
هدف از انجام این آژمایش این است که بتوانیم با استفاده از ماتریس ها و حلقه های `For` و دستور شرطی `IF` یک رقض نور ساده $${\color{Red}Dancing \space Light}$$ و یک تابلو روان $${\color{Blue}Smooth \space Board}$$ پیاده سازی واجرا نمود.
### وسایل مورد نیاز آزمایش : 
* برد آردوینو $${\color{lightblue}UNO \space}$$
* کابل USB برای برنامه‌ریزی و ارتباط با کامپیوتر
* نرم‌افزار آردوینوIDE 
* $${\color{Red}LED \space BUILTIN}$$ چهار عدد
* $${\color{Blue}PUSH \space BUTTON}$$ دو عدد
* مقداری سیم جامپر
* 2 عدد مقاومت 10k اهم و 4 عدد 220 اهم

 ### شرح آزمایش : 
 در این آزمایش با فشار دادن یکی از $${\color{Blue}PUSH \space BUTTON}$$ ها باید $${\color{Red}LED \space BUILTIN}$$ ها با الگو خاصی که از قبل براشون تعریف کردیم ، روشن و خاموش شوند که به طور کلی از افکت خاصی پیروی میکنند.

 **کد پروژه:**
(عکس اول)
 ![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/Code4.1.jpg)
(عکس دوم)
 ![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/Code4.2.jpg)
 
# توضیحات کلی کد :
### **۱. تعریف پین‌ها**
در تابع `setup`، ورودی و خروجی‌های مدار و در قبل از آن `Define`ها برای A0 و A1 تعریف میشوند.

### **۲. تعریف آرایه‌های الگو**
دو آرایه `dancingLight1` و `dancingLight2`، ترتیب روشن و خاموش شدن LEDها را مشخص می‌کنند.

### **۳. خواندن دکمه‌ها و اجرای الگوها**
در تابع `loop`, وضعیت $${\color{Blue}PUSH \space BUTTON}$$ ها بررسی شده و در صورت فشرده شدن، الگوی مربوطه اجرا می‌شود.

### **۴. تأخیر برای نمایش بهتر افکت‌ها**
با استفاده از `Delay`، تغییرات در روشنایی $${\color{Red}LED \space BUILTIN}$$ ها قابل مشاهده‌تر می‌شوند.

* **کامپوننت `#define`:** این کامپوننت به ما کمک میکند تا ورودی های برد آردوینو $${\color{lightblue}UNO \space}$$ که در اینجا A0 و A1 هستند تعریف کنیم.
* **تعریف پین ها:** در تابع `setup` با دستور `pinmode` ورودی و خروجی های برد را تعریف کردیم.
* آرایه های الگو که در اینجا  dancingLight1  و  dancingLight2  هستند الگو روشن شدن $${\color{Red}LED \space }$$ ها هستند که آنها را در تابع `Loop` تفریف کردیم.

**شماتیک مدار :**
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/ax4.jpg)

### نتیجه گیری:
در این آزمایش با استفاده از توابع for تو در تو و آرایه های الگو توانستیم چهار $${\color{Red}LED \space }$$ را با ۲ الگوی متفاوت به نمایش بگذاریم.
