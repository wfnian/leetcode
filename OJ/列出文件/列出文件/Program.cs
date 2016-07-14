using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace 列出文件
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("This program lists all the files in the directory:");

            System.IO.DirectoryInfo dir = new System.IO.DirectoryInfo(@"C:\");

            foreach (System.IO.FileInfo file in dir.GetFiles("*.*"))
            {
                Console.WriteLine("{0}, {1}", file.Name, file.Length);
            }
            Console.ReadLine();
        }

    }
}
