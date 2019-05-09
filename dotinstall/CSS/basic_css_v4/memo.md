# 動画のメモ

- Git の使い方が不十分なので以下参考
https://qiita.com/To_BB/items/5f846d2a892ea497511f

# 1回目
CSS では、「どこに」「どんなスタイルを」当てるかを設定していく

「どこに」の部分を「セレクタ」、「どのようなスタイルを」の部分を「プロパティ」と呼ぶ
# 2回目
Chrome ディベロッパーツール
Command + Option + i 

Elements パネルの左側には、ブラウザが解釈した HTML 、
右側には CSS で設定されたスタイルを確認することができる
# 3回目
ちなみに CSS では同じセレクタに対して、同じプロパティを複数設定したら、後から書いたほうが優先されます。

  color: rgb(0, 255, 0)
rgbを忘れない
  color: #000000
１６進数でも指定可能
# 4回目
font-family: Verdana, sans-sans-serif;
今回は Verdana というフォントを使ってね、それがなかったら sans-serif を使ってね

header 要素の中身には 784 px x 187 px の領域が確保されていて、その外に padding 、その外に border 、その外に margin という領域がある
このような設計は CSS の Box Model と呼ばれていて、これらのプロパティを操作していくことで要素の見た目を変えることができる。
# 5回目
Command + Shift + D で複製できる
margin-top 、margin-bottom 、 margin-right 、 margin-left に対して全部0pxとする場合 margin: 0px;と指定できる
0 px に関しては、実は単位が省略できるので、margin: 0; のようにも書くことができる
# 6回目
ul に対して list-style-type というプロパティが設定されていて、そこで操作できるので none としてあげると黒丸が消える

ul に対して padding-left: 0;とすると
左側の余白が消える

リストの項目に対して設定したいので li に対して設定
display プロパティですが要素の配置に関わるもので、左に詰めていくような配置にしたい場合は inline-block として

間が少し詰まりすぎているので padding で操作
上下と左右が同じ値の場合は短く書くことができて、 padding: 4px 8px;とかける
