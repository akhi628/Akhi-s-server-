import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class TrueListApp {
    private JFrame frame;
    private JTable table;
    private DefaultTableModel model;

    public TrueListApp() {
        frame = new JFrame("True List");
        model = new DefaultTableModel(new String[]{"Task"}, 0);
        table = new JTable(model);
        JButton addButton = new JButton("Add Task");

        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addTask();
            }
        });

        frame.setLayout(new BorderLayout());
        frame.add(new JScrollPane(table), BorderLayout.CENTER);
        frame.add(addButton, BorderLayout.SOUTH);
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    private void addTask() {
        String task = JOptionPane.showInputDialog("Enter a new task:");
        if (task != null && !task.trim().isEmpty()) {
            model.addRow(new Object[]{task});
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new TrueListApp());
    }
}