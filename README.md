# Sayısal Tahmin Oyunu

Bu proje, kullanıcıların 1-100 arasındaki bir sayıyı tahmin etmeye çalıştığı basit bir sayı tahmin oyunudur. Oyun, kullanıcının girdisini alır ve rastgele seçilen bir sayıyı tahmin etmesini sağlar. Kullanıcı sayıyı doğru tahmin edene kadar geri bildirim verir.

## Nasıl Çalışır?

1. Program başladığında, 1 ile 100 arasında rastgele bir sayı seçilir.
2. Kullanıcıdan bu sayıyı tahmin etmesi istenir.
3. Kullanıcı her tahmin yaptığında, program sayının büyük veya küçük olduğunu belirterek kullanıcıyı yönlendirir.
4. Kullanıcı doğru sayıyı tahmin ettiğinde, kaç denemede doğru tahmini yaptığını belirten bir mesaj görüntülenir.

## Kullanım

1. Projeyi bilgisayarınıza kopyalayın veya indirin.
2. `g++` kullanarak projeyi derleyin:
    ```bash
    g++ -o guess_number_game guess_number_game.cpp
    ```
3. Programı çalıştırın:
    ```bash
    ./guess_number_game
    ```
4. Program size 1-100 arasında bir sayı tahmin etmenizi isteyecektir.
5. Sayıyı doğru tahmin edene kadar tahminler yapmaya devam edin.

## Gereksinimler

- C++ Derleyici (g++ veya benzeri)
- Terminal veya komut satırı arayüzü

## Lisans

Bu proje Genel Kamu Lisansı v3.0 altında lisanslanmıştır. Daha fazla bilgi için `LICENSE` dosyasını inceleyin.

