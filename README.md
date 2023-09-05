# C language

## Char

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|'文字'|int|1byteの文字|
|u'文字'|char16_t|16bitsの文字。通常はUTF-16。C11以降|
|U'文字'|char32_t|32bitsの文字。通常はUTF-32。C11以降|
|L'文字'|wchar_t|ワイド文字。環境によりUTF-16やUTF-32。C95以降|
|'文字…'|int|多文字定数。値は処理系定義|
|u8'文字'|char_8|UTF-8を扱える？C23以降|

## Character Literal

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|"文字列"|char配列|1byteの文字|
|u8"文字列"|char配列|8bitsの文字。UTF-8。C11以降|
|u"文字列"|char16_tの配列|16bitsの文字。通常はUTF-16。C11以降|
|U"文字列"|char32_tの配列|32bitsの文字。通常はUTF-32。C11以降|
|L"文字列"|wchar_tの配列|ワイド文字C95以降|

## Integer Literal

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|123|int|10進数|
|0123|int|8進数|
|0x123|int|16進数|
|0b1010|int|2進数。C23以降|
|123u|unsigned int|unsigned int|
|123l|long|long|
|123ul|unsigned long|unsigned long|
|123ll|long long|long long|
|123uL|unsigned long|unsigned long|
|123ull|unsigned long long|unsigned long long|

## Floating Literal

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|123.0|double|double|
|123.0f|float|float|
|123.0l|long double|long double|

## String Literal

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|"文字列"|char配列|1byteの文字|
|u8"文字列"|char配列|8bitsの文字。UTF-8。C11以降|
|u"文字列"|char16_tの配列|16bitsの文字。通常はUTF-16。C11以降|
|U"文字列"|char32_tの配列|32bitsの文字。通常はUTF-32。C11以降|
|L"文字列"|wchar_tの配列|ワイド文字C95以降|

## Boolean Literal

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|true|_Bool|true|
|false|_Bool|false|

## Pointer Literal

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|NULL|void *|NULL|

## allocatable

| 記法 | 型 | 内容 |
| :---: | --- | --- |
|malloc|void *|メモリを確保する|
|calloc|void *|メモリを確保して0で初期化する|
|realloc|void *|確保したメモリのバイト数を変更する|
|aligned_alloc|void *|アライメントを指定してメモリを確保する|
