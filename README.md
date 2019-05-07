# A fast but dumb tokenizer. Do not use it for production!

## Build

In a console with project's root folder set as the working directory

mkdir b && b
cmake ..
make

## Use the tool
There are two commands:
tok command, tokenize a string passed as a parameter:
  ./ltcc tok "Hom nay ban an gi"
std command, count the token from a text file:
  cat input_file | ./ltcc std

## Quality
The library provides high speed tokenization, such as low tech dumb stuff usually have more chances to run faster, but do not mean a lot.

In a search engine, low quality tokenizer are not important for search ranking quality if nobody uses it. Until sombody uses it, it's not important. -> Sound crazy )) - Do not use such a thing for production.

## Future Plans
Introduce bindings for high level languages, like Go, Python and Java. But anyway dont use it for production.