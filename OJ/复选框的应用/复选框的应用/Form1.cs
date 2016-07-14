using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 复选框的应用
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (checkBox1.Checked && checkBox2.Checked && !checkBox3.Checked && !checkBox4.Checked)
                 MessageBox.Show("       正确！","信息提示", MessageBoxButtons.OK); 
              //  MessageBox.Show("      qq抱歉！");
            else MessageBox.Show("      抱歉！");
        }

        private void checkBox3_CheckedChanged(object sender, EventArgs e)
        {

        }
    }
}
