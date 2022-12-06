require 'benchmark'

a = 463836510
b = 692647128

result = Benchmark.realtime do
  ans = 0
  (1...[a, b].max).each do |d|
    ans = d if (a % d == 0 && b % d == 0)
  end

  # puts ans
end

puts "処理時間 #{result}s"
