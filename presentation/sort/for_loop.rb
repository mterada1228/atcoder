require 'benchmark'

array = []

File.foreach("data.txt") do |line|
  array << line.chomp
end

result = Benchmark.realtime do
  len = array.length
  len.times do |i| 
    (len - 1 - i).times do |j|
      if array[j] > array[j + 1]
        array[j], array[j + 1] = array[j + 1], array[j]
      end
    end
  end
end

puts "処理時間 #{result}s"