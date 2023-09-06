using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsControlLibrary1
{
    public partial class CS_TestForm1 : Form
    {
        public CS_TestForm1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            var tag = this.Tag;
            if (tag != null)
            {
                MessageBox.Show($"{tag.GetType().FullName}\r\n{ tag.ToString()}");
            }
        }
    }
}
