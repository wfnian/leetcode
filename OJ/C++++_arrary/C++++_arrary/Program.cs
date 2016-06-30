using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace C_____arrary
{
    class Program
    {
        static void Main(string[] args)
        {
            //int[] arra;
            int[] arra = new int[5];
            int i;
            for( i = 0; i < 5; i++)
            {
               arra[i]= Convert.ToInt32(Console.ReadLine());
            }
            for( i = 0;i < 5; i++)
            {
                Console.WriteLine("{0} \t", arra[i]);
            }
        }
    }
}
