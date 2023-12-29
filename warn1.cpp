size_t len;
char cstr[] = "signed char string";
unsigned char ucstr[] = "unsigned char string";

len = strlen(cstr);
len = strlen(scstr); /* warns when char is unsigned*/
len = strlen(ucstr); /* warns when char is signed*/

/* compiling at high warning levels in compliance with "MSC00-C 
compile cleanly at high warning levels" causes warnings to be issued when 

Converting from unsigned char[] to const char * when char is signed
Converting from signed char[] tp const char * when char ois defined to be unsigned*/

