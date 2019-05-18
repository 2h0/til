#動画のメモ

# #01 ウェブサイトを制作していこう
nothing

# #02 ヘッダーのマークアップをしていこう
縦横比を維持したままなるべく大きく表示
background-size: cover;

# #03 ボタンのスタイルを整えよう
角を丸める
border-radius: 5px;

# #04 要素の位置を調整していこう
Cmd + Ctrl + 矢印で選択行を移動
margin 位置
padding 余白

# #05 画像を絶対配置してみよう
fontawesome を利用して free のアイコンを使う
※導入用のスクリプトを Get Started から拾う

# #06 共通のスタイルを切り出しておこう
nothing

# #07 疑似要素でサブタイトルを作ろう
タグの中にdata属性を追加して CSS で after 擬似要素として利用する
例:
.features h1::after {}

# #08 スタイルを再利用できるようにしよう
nothing

# #09 特徴紹介セクションを作ろう
nothing

# #10 要素を左右に振り分けていこう
:nth-of-type()
->括弧内に"odd", "even" と偶数奇数で分ける
要素の振り分け

# #11 特徴紹介セクションを完成させよう
余白の設定
-:not(:last-child)
最後の要素じゃない時に〜
-floatの解除
overflow: hidden;

# #12 利用者の声を紹介してみよう
nothing

# #13 Flexboxを使って要素を配置しよう
Cmd + Ctrl + 矢印でまとめて移動
display: flex; で flexbox を利用
justify-content: space-between; で均等に並べる。

# #14 利用者の声セクションを完成させよう
nothing

# #15 最後のセクションを作っていこう
nothing

# #16 ウェブサイトを完成させよう
コピーライトの出し方
<p>&copy; dotinstall.com</p>
