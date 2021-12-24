using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HW_11_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
        private static void GuessNum()
        {
            Random rdm = new Random();
            int a, b, c, d;
            for (; ; )
            {
                a = rdm.Next(0, 10);
                b = rdm.Next(0, 10);
                c = rdm.Next(0, 10);
                d = rdm.Next(0, 10);
                if (a != b && a != c && a != d && b != c && b != d && c != d)
                    break;
            }

        }
    }

}
