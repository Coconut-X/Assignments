//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	vector<int> height{ 1,8,6,2,5,4,8,3,7 };
//	int min = INT_MAX, max = -1, area = 0;
//
//	for (int i = 0; i < height.size(); i++)
//	{
//		for (int j = 0; j < height.size(); j++)
//		{
//			if (i == j) continue;
//			area = (j - i) * (min = (height[i] < height[j]) ? height[i] : height[j]);
//			if (area > max) max = area;
//		}
//	}
//	cout << max;
//
//	return max;
//}