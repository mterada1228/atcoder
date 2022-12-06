require 'benchmark'

a = 463836510
b = 692647128

result = Benchmark.realtime do
  # puts a.gcd(b)
  a.gcd(b)
end

puts "処理時間 #{result}s"
