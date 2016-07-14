using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Listbox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listBox1.Items.Add("清华大学");
            listBox1.Items.Add("北京大学");
            listBox1.Items.Add("浙江大学");
            listBox1.Items.Add("南京大学");
            listBox1.Items.Add("武汉大学");
            listBox1.Items.Add("中国科技大学");
            listBox1.Items.Add("中国人民科技大学");
            listBox1.Items.Add("复旦大学");
            enbutton();
        }

        private void enbutton()
        {
            throw new NotImplementedException();
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
