require 'benchmark'

array = []

File.foreach("data.txt") do |line|
  array << line.chomp.to_i
end

result = Benchmark.realtime do
  # puts array.bsearch { |x| x >= 99999999 }
  array.bsearch { |x| x >= 99999999 }
end

puts "処理時間 #{result}s"
