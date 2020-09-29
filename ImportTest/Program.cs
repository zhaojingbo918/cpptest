using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ImportTest
{
    class Program
    {
        static void Main(string[] args)
        {
           var buf = new byte[300];
            getHelloWorld(buf);
            Console.WriteLine(System.Text.Encoding.ASCII.GetString(buf));

            Console.ReadLine();
        }

        [DllImport("ExportTest2.dll")]
        public static extern void getHelloWorld(byte[] buf);
    }
}
