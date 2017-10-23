    /*

     * C++ Program to Print Pascal's Triangle

     */

     

    #include<iostream.h>   //including header file

    using namespace std;   // using this to avoid writing "std" repeatedly

     

    int main()

    {

        int rows;

        cout << "Enter the number of rows : ";

        cin >> rows;

        cout << endl;

     

        for (int i = 0; i < rows; i++)

        {

            int val = 1;

            for (int j = 1; j < (rows - i); j++)        // loop to print spaces

            {

                cout << "   ";

            }

            for (int k = 0; k <= i; k++)     // loop to intialise numbers from pascal's series in "var".

            {

                cout << "      " << val;

                val = val * (i - k) / (k + 1);

            }

            cout << endl << endl;

        }

        cout << endl;

        return 0;

    }
    /* INPUT - 5  */
    /*   OUTPUT
    
                  1
 
               1      1
 
            1      2      1
 
         1      3      3      1
 
      1      4      6      4      1
      
     
     
     */
