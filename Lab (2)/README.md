# شرح ازمایش اول :
## روشن و خاموش کردن $${\color{Red}LED \space BUILTIN}$$ با استفاده از $${\color{Blue}PUSH \space BUTTON}$$ بدون استفاده از مقاومت داخلی ($${\color{Yellow}PULL \space UP}$$)

### هدف آزمایش : 
هدف از انجام این آزمایش مبنی بر این است که تابع `PUll UP` را طوری بر مدار پیاده سازی کنیم که با فشار دادن $${\color{Blue}PUSH \space BUTTON}$$ بتواینم $${\color{Red}LED \space BUILTIN}$$ خاموش و روشن کنیم.

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
![توضیح تصویر](https://github.com/Mamamdgh83/microProcessor/blob/main/Lab%20(2)/code1.jpg)

# توضیحات کلی کد :
* **تنظیم حالت پین :** در ابتدا پایه 8 به عنوان `ورودی` یا `In Pin` در نظر گرفته شده و پین 2 به عنوان `خروجی` یا  `Out Put` در تابع `setup`، پین $${\color{Red}LED \space PIN}$$ به عنوان خروجی پیش فرض قابل تغییر تنظیم می‌شود تا بتوانیم به آن مقدار  از طریق $${\color{Blue}PUSH \space BUTTON}$$ و آن را روشن یا خاموش کنیم.
* همچنین متغییر`Val`به عنوان مقدار Low و یا High بودن $${\color{Red}LED \space BUILTIN}$$ تعریف میشود.
* **حلقه اصلی :** تابع `loop` به صورت مداوم تکرار می‌شود. در هر تکرار، $${\color{Red}LED \space BUILTIN}$$ با فشار داده شدن $${\color{Blue}PUSH \space BUTTON}$$ به متغییر `Val` فرمان `PUll UP` و همچنین Low و  High را از طریق دستور شرطی `IF`  میدهد.
* 
**شماتیک مدار :**

### نتیجه گیری:
در این آزمایش ما توانستیم با موفقیت $${\color{Red}LED \space BUILTIN}$$ را با $${\color{Blue}PUSH \space BUTTON}$$ زن روشن و خاموش یا `PUll UP` کنیم.
