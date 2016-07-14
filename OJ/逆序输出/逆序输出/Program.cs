using System;
namespace mmm
{
    class Program
    {
        static void Main(string[] args)
        {
            int a;
            a = Convert.ToInt32(Console.ReadLine());
            if (a % 4 == 0&&a%100!=0||a%400==0)
            {
                Console.WriteLine("L");
            }
            else
            {
                Console.WriteLine("N");
            }
        }
    }
}
