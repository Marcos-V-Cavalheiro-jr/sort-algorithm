# new(tamanho do vetor) { |i| i coloca o i na posição i  }
#a = Array.new(10) { |a| a + 1 }          (gera crescente)
#a = Array.new(10) { |a| 10 - a }     (gera decrescente)
#a = Array.new(10) { |a| a }.shuffle  (gera random)

#a = Array.new(10) { |a| a }.shuffle  (gera random c/ uma posição especifica recebendo o valor x)
#

# { |i| print i}
# a.each { |i| p i}

lim = 10

a = Array.new(lim) { |a| a }.shuffle
pos = rand 0..lim
a[pos] = 100_000_000_000
a.each { |i| p i}