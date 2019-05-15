# 動画のメモ

- Git の使い方が不十分なので以下参考
https://qiita.com/To_BB/items/5f846d2a892ea497511f

# 1回目 はじめてのCSSを書いてみよう 
CSS では、「どこに」「どんなスタイルを」当てるかを設定していく

「どこに」の部分を「セレクタ」、「どのようなスタイルを」の部分を「プロパティ」と呼ぶ
# 2回目 デベロッパーツールを使ってみよう
Chrome ディベロッパーツール
Command + Option + i 

Elements パネルの左側には、ブラウザが解釈した HTML 、
右側には CSS で設定されたスタイルを確認することができる
# 3回目 色の表現方法を学ぼう
ちなみに CSS では同じセレクタに対して、同じプロパティを複数設定したら、後から書いたほうが優先されます。

  color: rgb(0, 255, 0)
rgbを忘れない
  color: #000000
１６進数でも指定可能
# 4回目 CSSのBoxモデルを確認してみよう
font-family: Verdana, sans-sans-serif;
今回は Verdana というフォントを使ってね、それがなかったら sans-serif を使ってね

header 要素の中身には 784 px x 187 px の領域が確保されていて、その外に padding 、その外に border 、その外に margin という領域がある
このような設計は CSS の Box Model と呼ばれていて、これらのプロパティを操作していくことで要素の見た目を変えることができる。
# 5回目 marginで外側の余白を設定しよう
Command + Shift + D で複製できる
margin-top 、margin-bottom 、 margin-right 、 margin-left に対して全部0pxとする場合 margin: 0px;と指定できる
0 px に関しては、実は単位が省略できるので、margin: 0; のようにも書くことができる
# 6回目 リストのスタイリングをしてみよう
ul に対して list-style-type というプロパティが設定されていて、そこで操作できるので none としてあげると黒丸が消える

ul に対して padding-left: 0;とすると
左側の余白が消える

リストの項目に対して設定したいので li に対して設定
display プロパティですが要素の配置に関わるもので、左に詰めていくような配置にしたい場合は inline-block として

間が少し詰まりすぎているので padding で操作
上下と左右が同じ値の場合は短く書くことができて、 padding: 4px 8px;とかける

# 7回目aタグのプロパティを操作しよう
リンクに対して設定された下線がついているものは、
a 要素に対して text-decoration プロパティを操作
none とすることで下線が消える

CSS では要素によって設定が引き継がれるプロパティと、そうではないプロパティがあるので注意
もし強制的に親要素の設定を引き継ぎたい場合は、 inherit というキーワードを使ってあげる
color: inherit;

擬似クラスは、ある要素が特定の状態にあることを表現するためのセレクタで、コロン（:） と キーワードを使う
a:hover とすると、 a 要素にマウスカーソルが乗ったとき、という状態を意味する

右揃えにするには、親要素に対して text-align というプロパティを使う
text-align: right;

header に対して上下左右に padding を付けたい場合には padding: 10px; と指定

# 8回目 セレクタの適用範囲を限定しよう
半角空白で区切ると、 header 内のすべての要素、という意味
header ul {
  margin: 0;
  list-style-type: none;
  padding-left: 0;
}

不等号記号で区切ると、 この要素の直下にある a 要素、という意味
header li > a {
  text-decoration: none;
  color: inherit;
}
