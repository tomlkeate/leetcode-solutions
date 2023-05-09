bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    for (int flower = 0; flower < flowerbedSize; flower++) {
        if (n == 0) return true;
        bool is_flower = (flowerbed[flower] == 0);
        if (flower >= 1) is_flower &= flowerbed[flower - 1] == 0;
        if (flower + 1 < flowerbedSize) is_flower &= (flowerbed[flower + 1] == 0);
        if (is_flower) {
            flowerbed[flower] = 1;
            n--;
        }
    }
    return (n <= 0);
}
