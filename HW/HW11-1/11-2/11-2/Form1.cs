using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _11_2
{
    public partial class Form1 : Form
    {
        private int[] ans = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };//正確答案
        private String[] gnum = new string[10];//猜的答案數字
        private int tmp, r;
        private Random ran = new Random();
        public Form1()
        {
            InitializeComponent();
            button1.Click += new System.EventHandler(button1_Click);//按下button1觸發button1_Click
            button2.Click += new System.EventHandler(button2_Click);//按下button1觸發button2_Click
            button3.Click += new System.EventHandler(button3_Click);//按下button1觸發button3_Click

            label1.Text = "1A2B猜數字遊戲";
            label2.Text = "";
            label3.Text = "";
            button1.Text = "確定";
            button2.Text = "看答案";
            button3.Text = "重新開始";
            textBox1.MaxLength = 4;
            for (int i = 0; i < 10; i++)
            {
                ans[i] = i;
            }
            for (int i = 0; i < 10; i++)
            {
                r = ran.Next(0, 10);
                tmp = ans[r];
                ans[r] = ans[9 - i];
                ans[9 - i] = tmp;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string num = "";
            int a = 0, b = 0;
            if (textBox1.TextLength != 4)
            {
                MessageBox.Show("請輸入4個不一樣的數字");
            }
            else
            {
                for (int j = 1; j <= 4; j++)
                {
                    gnum[j] = textBox1.Text.Substring(j - 1, 1);
                    num += gnum[j];
                }
            }
            if ((gnum[1] == gnum[2] || gnum[1] == gnum[3] ||
                gnum[1] == gnum[4] || gnum[2] == gnum[3] ||
                gnum[2] == gnum[4] || gnum[3] == gnum[4]))
            {
                MessageBox.Show("不能輸入重複的數字哦");
            }
            else
            {
                for (int k = 1; k <= 4; k++)
                {
                    for (int l = 1; l <= 4; l++)
                    {
                        if (gnum[k] == ans[l].ToString())
                        {
                            if (k == l)
                            {
                                a++;
                            }
                            else if (k != l)
                            {
                                b++;
                            }
                        }
                    }
                }
            textBox2.Text += num + "-----" + a.ToString() + "A" + b.ToString() + "B" + "\r\n";
            label3.Text = "第" + (textBox2.Lines.Length - 1) + "猜";
            textBox1.Focus();
            textBox1.SelectAll();
            }
            if (a == 4 && b == 0)
            {
                MessageBox.Show("恭喜你猜對了");
                button1.Enabled = false;
            }
            

        }

        private void button2_Click(object sender, EventArgs e)
        {
            label2.Text = "";
            for (int i = 1; i <= 4; i++)
            {
                label2.Text += ans[i];
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            label2.Text = "";
            label3.Text = "";
            textBox1.Text = "";
            textBox2.Text = "";
            button1.Enabled = true;
            for (int i = 0; i < 10; i++)
            {
                r = ran.Next(0, 10 - i);
                tmp = ans[r];
                ans[r] = ans[9 - i];
                ans[9 - i] = tmp;
            }
            for (int j = 1; j <= 4; j++)
            {
                gnum[j] = "";
            }
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }
    }
}
