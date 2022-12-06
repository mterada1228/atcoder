# 配列の合計を計算する

## inject を利用した場合
puts [2, 3, 4, 5].inject { |result, item| result + item }

## for ループを利用した場合
sum = 0
[2, 3, 4, 5].each do |v|
  sum += v
end

puts sum
