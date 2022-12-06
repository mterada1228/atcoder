require 'benchmark'

array = []

File.foreach("data.txt") do |line|
  array << line.chomp
end

result = Benchmark.realtime do
  array.sort
end

puts "処理時間 #{result}s"