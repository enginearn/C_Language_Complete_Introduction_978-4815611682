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
