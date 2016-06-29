using System;
namespace C____sizeof
{
    class Program
    {
        static void Main(string[] args)
        {
            double d = 3784.992;
            int i = 99;
            float f = 444.4747f;
            bool b = true;
            i = (int)d;
            Console.WriteLine(i.ToString());
            Console.WriteLine(f.ToString());
            //Console.WriteLine(i.ToInt32());
            Console.ReadLine();
        }
    }
}
