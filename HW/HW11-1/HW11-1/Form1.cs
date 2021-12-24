using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HW11_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }



        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            


        }

        private void button2_Click(object sender, EventArgs e)
        {
            Random random = new Random();
            int cNum = random.Next(1, 4);
            switch (cNum)
            {
                case 1:
                    MessageBox.Show("電腦出石頭,平手");
                    break;
                case 2:
                    MessageBox.Show("電腦出布,你輸了");
                    break;
                case 3:
                    MessageBox.Show("電腦出剪刀,你贏了");
                    break;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Random random = new Random();
            int cNum = random.Next(1, 4);
            switch (cNum)
            {
                case 1:
                    MessageBox.Show("電腦出布,平手");
                    break;
                case 2:
                    MessageBox.Show("電腦出剪刀,你輸了");
                    break;
                case 3:
                    MessageBox.Show("電腦出石頭,你贏了");
                    break;
            }
        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            Random random = new Random();
            int cNum = random.Next(1, 4);
            switch (cNum)
            {
                case 1:
                    MessageBox.Show("電腦出剪刀,平手");
                    break;
                case 2:
                    MessageBox.Show("電腦出石頭,你輸了");
                    break;
                case 3:
                    MessageBox.Show("電腦出布,你贏了");
                    break;
            }
        }
    }
}
