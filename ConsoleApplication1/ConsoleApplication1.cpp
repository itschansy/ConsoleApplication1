// std::vector için binarySearchFirst fonksiyonu
template<typename T>
int binarySearchFirst(std::vector<T> vec, T target) {
    int index = binarySearch(vec, target);
    if (index == -1) return -1; // Hedef bulunamadıysa -1 döndür.

    // İlk eşleşmeyi bulmak için geriye gidin.
    while (index > 0 && vec[index - 1] == target) {
        --index;
    }
    return index;
}

// std::array için binarySearchFirst fonksiyonu
template<typename T, std::size_t N>
int binarySearchFirst(std::array<T, N> arr, T target) {
    int index = binarySearch(arr, target);
    if (index == -1) return -1; // Hedef bulunamadıysa -1 döndür.

    // İlk eşleşmeyi bulmak için geriye gidin.
    while (index > 0 && arr[index - 1] == target) {
        --index;
    }
    return index;
}
