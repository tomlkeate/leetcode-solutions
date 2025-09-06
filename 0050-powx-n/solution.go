func myPow(x float64, n int) float64 {
    return fastPowIterative(x, n)
}

func fastPow(x float64, n int) float64 {
    if n == 0 {
        return 1
    }
    if n < 0 {
        return fastPow(1 / x, -n)
    }
    if n%2 == 0 {
        return fastPow(x * x, n / 2)
    } else {
        return x * fastPow( x * x, (n - 1) / 2)
    }
}

func fastPowIterative(x float64, n int) float64 {
    if n < 0 {
        x = 1 / x
        n = -n
    }

    result := 1.0

    for n > 0 {
        if n % 2 != 0 {
            result *= x
        }
        x *= x
        n /= 2
    }
    return result
}
