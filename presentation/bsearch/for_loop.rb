require 'benchmark'

array = []

File.foreach("data.txt") do |line|
  array << line.chomp.to_i
end

result = Benchmark.realtime do
  array.each_with_index do |v, i|
    if (v >= 99999999)
      puts i
      break
    end
  end
end

puts "処理時間 #{result}s"
