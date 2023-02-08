# ICSI313 C++ орчин бүрдүүлэх заавар

## Macos бол

1. 

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```
2.
`brew install gcc`
`brew install make`
`brew install gdb`
`brew install valgrind`

## Ubuntu бол

### Clone хийж авахдаа terminal дээрээс

`sudo apt install git`

`git clone https://github.com/b4ljk/ICSI313.git`

`sudo apt install build-essential`

### Githubruu өөрийн тестээ нэмэхдээ

1. Тухайн clone хийсэн folder дотор байна
2. Тест файлаа нэмнэ
3. 
```
git pull origin main &&
git add . &&
git commit -m "test" &&
git push origin main
```

### ubuntu дээр compile хийхдээ

`g++ -o main main.cpp && ./main`
