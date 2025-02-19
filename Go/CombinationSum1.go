package main

import "fmt"

func GetArrayFromInput(count int, prompt string) []int {
	if count == 0 {
		return []int{}
	}

	fmt.Print(prompt)

	v := make([]int, count)
	for i := 0; i < count; i++ {
		fmt.Scan(&v[i])
	}

	return v
}

func GetCombination(A []int, val, index int, v []int, result *[][]int) {
	if val == 0 {
		c := make([]int, len(v))
		copy(c, v)
		*result = append(*result, c)
		return
	}

	if index == len(A) || val < 0 {
		return
	}

	for i := index; i < len(A); i++ {
		v = append(v, A[i])
		GetCombination(A, val-A[i], i, v, result)
		v = v[:len(v)-1]
	}
}

func CombinationSum(A []int, val int) [][]int {
	var result [][]int
	var r []int

	GetCombination(A, val, 0, r, &result)

	return result
}

func main() {
	for {
		fmt.Print("Number of elements: ")
		var count int
		fmt.Scan(&count)
		if count == 0 {
			break
		}

		vec := GetArrayFromInput(count, "Please enter the array: ")

		fmt.Print("Please enter the sum: ")
		var val int
		fmt.Scan(&val)

		result := CombinationSum(vec, val)

		fmt.Println("The combinations that have a sum of ", val, ": ", result)
	}
}
