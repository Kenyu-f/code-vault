fn main(){
    let book_slices:&[&String] = &[&"IT".to_string(),&"Harry potter".to_string(),&"ZEN".to_string()];
    println!("{:?}",book_slices);
    let mut stone_cold: String = String::from("Hell, ");
    println!("Stone Cold says {}", stone_cold);
    stone_cold.push_str("yeah");
}

// let mut: Rustでは変数は標準で「変更不可（immutable）」ですが、mut（mutable）をつけることで後から値を変更できる変数として宣言します。

// stone_cold: String: 変数 stone_cold の型がヒープ領域（メモリ）に確保される可変長文字列型（String）であることを明示しています。

// String::from("Hell, "): 文字列リテラル "Hell, " から String オブジェクトを生成し、stone_cold に代入しています。
