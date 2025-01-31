import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class App 1 {
    private JFrame frame;
    private JLabel headline;
    private JTable table;
    private DefaultTableModel model;

    public App 1() {
        frame = new JFrame("To do list");
        headline = new JLabel("To-do List", SwingConstants.CENTER);
        headline.setFont(new Font("Arial", Font.BOLD, 18));

        model = new DefaultTableModel(new String[]{"Serial", "Task", "Work Description", "Time/Date", "Action"}, 0) {
            @Override
            public boolean isCellEditable(int row, int column) {
                return column == 4; // Only the "Action" column is editable (for buttons).
            }
        };
        table = new JTable(model);

        JButton addButton = new JButton("Add Task");

        // Add Task Button Listener
        addButton.addActionListener(e -> addTask());

        // Layout setup
        JPanel buttonPanel = new JPanel();
        buttonPanel.add(addButton);

        frame.setLayout(new BorderLayout());
        frame.add(headline, BorderLayout.NORTH);
        frame.add(new JScrollPane(table), BorderLayout.CENTER);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        frame.setSize(800, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    // Method to add a new task
    private void addTask() {
        JTextField taskField = new JTextField();
        JTextField descField = new JTextField();
        JTextField timeField = new JTextField();

        JPanel panel = new JPanel(new GridLayout(3, 2));
        panel.add(new JLabel("Task:"));
        panel.add(taskField);
        panel.add(new JLabel("Work Description:"));
        panel.add(descField);
        panel.add(new JLabel("Time/Date:"));
        panel.add(timeField);

        int result = JOptionPane.showConfirmDialog(frame, panel, "Add New Task", JOptionPane.OK_CANCEL_OPTION);
        if (result == JOptionPane.OK_OPTION) {
            String task = taskField.getText().trim();
            String description = descField.getText().trim();
            String time = timeField.getText().trim();

            if (!task.isEmpty() && !description.isEmpty() && !time.isEmpty()) {
                int serial = model.getRowCount() + 1; // Auto-generate serial number
                JButton removeButton = new JButton("Remove");
                removeButton.addActionListener(e -> removeTask(removeButton));
                model.addRow(new Object[]{serial, task, description, time, removeButton});
            } else {
                JOptionPane.showMessageDialog(frame, "All fields must be filled.", "Error", JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    // Method to remove a specific task
    private void removeTask(JButton button) {
        for (int i = 0; i < table.getRowCount(); i++) {
            if (table.getValueAt(i, 4) == button) {
                model.removeRow(i);
                updateSerialNumbers(); // Update serial numbers after removal
                break;
            }
        }
    }

    // Method to update serial numbers
    private void updateSerialNumbers() {
        for (int i = 0; i < model.getRowCount(); i++) {
            model.setValueAt(i + 1, i, 0); // Update the serial column
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(App::new);
    }
}

