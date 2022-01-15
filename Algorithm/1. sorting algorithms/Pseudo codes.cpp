//divide and conquer
Algorithm divide
input: expression
output: None

divide(expression 앞부분)
divide(expression 뒷부분)

//bubble sort
void bubble_sort(int arr[], int len){
	for ( i = 1 to len){
		for ( j = 0 to len-i-1){
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1])
		}
	}
}

//insertion sort
void insertion_sort(int arr[], int n){
	for ( i = 0 to arr.length ){
		key = arr[i]
		j = i-1

		while ( j>=0 and arr[j]>key ){
			arr[j+1] = arr[j]
			 j = j-1
		}
	}
}

//quick sort
int partition(int arr[], int left, int right){
	key = arr[right]
	i = left

	for ( j = left to right-1 ){
		if (arr[j] <= key)
			swap(arr[i++], arr[j])
	}
	swap(arr[i], arr[right])

	return i //pivot의 위치 리턴
}

void quick_sort(int arr[], int left, int right){
	if ( left < right ){
		pivot = partition(arr, left, right)
		quick_sort(arr, left, pivot-1)
		quick_sort(arr, pivot+1, right)
	}
}

//merge sort
void merge(int arr[], int left, int mid, int right){
	정렬되어 있는 두 배열 arr[left:mid+1], arr[mid+1:right+1]을 정렬하며 병합
	정렬된 arr[left:right+1]을 만든다.
}

void merge_sort(int arr[], int left, int right){
	if (left < right){
		mid = (left+right)/2; // mid값으로 균등 분할 - divide
        merge_sort(arr, left, mid); // 앞쪽 부분 arr정렬 - conquer
        merge_sort(arr, mid+1, right); // 뒤쪽 부분 arr정렬 - conquer
        merge(arr, left, mid, right); // 정렬된 2개의 부분 배열을 합병 - combine
	}
}
