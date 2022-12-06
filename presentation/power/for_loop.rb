require 'benchmark'

result = Benchmark.realtime do
  ans = 1
  (100000000).times do
    ans = ans * 3 % 1000000007
  end

  puts ans
end

puts "処理時間 #{result}s"
