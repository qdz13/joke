# ジョークプログラム

## 概要
C言語のジョークプログラムです。

奇妙なコードなので動作しないように見えますが、コンパイルでき、"joke"という文字列が出力されます。

## コンパイル方法
```sh
git clone https://github.com/qdz13/joke.git
cd joke
gcc joke.c -o joke -trigraphs -Wno-trigraphs
```

## 仕組み
仕組みを説明します。

まず、配列名と添字は交換可能である[^1]という事実に基づき、`text[8]`から`text[11]`を`8[text]`や`11[text]`に交換しています。

次に、ブラケットをトライグラフ[^2]を用いた表記法に変更します。ただし、GCCではデフォルトでトライグラフが無効化されているため、オプション `-trigraphs` をつけてコンパイルできるようにします。なおREADMEでは、警告を抑止するため、オプション `-Wno-trigraphs` も同時に設定しています。

[^1]: [www.c-faq.com](https://www.c-faq.com/aryptr/joke.html) 参照
[^2]: [ウィキペディア](https://ja.wikipedia.org/wiki/%E3%83%88%E3%83%A9%E3%82%A4%E3%82%B0%E3%83%A9%E3%83%95) 参照
