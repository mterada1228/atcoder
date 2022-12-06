def pow(x, n)
  return x if n == 1

  return x * pow(x, n - 1) if (n % 2 == 1)

  x = pow(x, n / 2) * pow(x, n / 2)
  return x
end

puts pow(3, 9)
