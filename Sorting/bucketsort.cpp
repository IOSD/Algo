// C++ program to sort a vector using bucket sort

#include <iostream>
#include <algorithm>
#include <vector>

/**
 * Function to sort a float array using bucket sort
 * @param vec The vector to sort
 */
void bucketSort(std::vector<float>& vec)
{
  const std::size_t size = vec.size();
  std::vector<std::vector<float>> buckets(size);

  // Move array elements to different buckets
  for (const auto val : vec)
  {
    std::size_t bucket_index = static_cast<size_t>(size * val);
    buckets.at(bucket_index).push_back(val);
  }

  // Sort the individual buckets
  for (auto bucket : buckets)
  {
    std::sort(bucket.begin(), bucket.end());
  }

  // Set the sorted values in the original vector
  std::size_t index = 0;
  for (const auto& bucket : buckets)
  {
    for (const auto value : bucket)
    {
      vec.at(index++) = value;
    }
  }
}

/**
 * Test program for the bucketSort function
 */
int main()
{
  std::vector<float> data = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };

  bucketSort(data);

  std::cout << "Sorted vector is:\n";
  for (auto value : data)
  {
    std::cout << value << ' ';
  }

  return 0;
}
