require 'benchmark'

result = Benchmark.realtime do
  p 3.pow(100000000, 1000000007)
end

puts "処理時間 #{result}s"
