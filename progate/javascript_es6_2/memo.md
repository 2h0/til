# 繰り返し処理
1から100までの数字を出力する場合を考えてみましょう。  
このような場合には「繰り返し処理」というものを用いると便利です。

繰り返し処理を行うためにはwhile文というものを用います。
whileとは「～の間」という意味の英語です。
while文は「条件式がtrueの間、{ }内の処理を繰り返す」ことができます。 {}の後にセミコロンは不要です。  

まず条件式の判定が行われ、trueの時のみ{}の中で処理が1度実行されます。その後、再び条件式がtrueかどうかチェックされ、trueであればもう一度処理が実行されます。  

while文を用いる場合には、条件式の部分がいつかはfalseになり、繰り返し処理が終わる必要があることに注意してください。
いつまでも条件がtrueのままで、永遠に繰り返し処理が続いてしまいます。（これを無限ループと呼びます。）  

繰り返し処理を行う方法として、while文以外にもfor文というものがあります。できることはwhile文と同じですが、while文に比べてシンプルに書くことができるのが特徴です。  

「number += 1」は「number ++」のように省略して書くことができます。また、引き算の場合にも、「number -= 1」を「number --」と省略することができます。
while文やfor文では、この省略した書き方を使ってコードを短くすることができますので、覚えておきましょう。  

if (number % 3 == 0)
if (number % 3 === 0)
