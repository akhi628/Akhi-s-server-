import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;

public class App {
    private JFrame frame;
    private JLabel headline;
    private JTable table;
    private DefaultTableModel model;

    public App() {
        frame = new JFrame("True list Application");
        headline = new JLabel("To do list", SwingConstants.CENTER);
        headline.setFont(new Font("Arial", Font.BOLD, 18));

        model = new DefaultTableModel(new String[]{"Serial", "Task", "Work Description", "Time/Date"}, 0);
        table = new JTable(model);

        JButton addButton = new JButton("Add Task");
        JButton removeButton = new JButton("Remove Task");

        // Add Task Button Listener
        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addTask();
            }
        });

        // Remove Task Button Listener
        removeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                removeTask();
            }
        });

        // Layout setup
        JPanel buttonPanel = new JPanel();
        buttonPanel.add(addButton);
        buttonPanel.add(removeButton);

        frame.setLayout(new BorderLayout());
        frame.add(headline, BorderLayout.NORTH);
        frame.add(new JScrollPane(table), BorderLayout.CENTER);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        frame.setSize(700, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    // Method to add a new task
    private void addTask() {
        JTextField serialField = new JTextField();
        JTextField taskField = new JTextField();
        JTextField descField = new JTextField();
        JTextField timeField = new JTextField();

        JPanel panel = new JPanel(new GridLayout(4, 2));
        panel.add(new JLabel("Serial:"));
        panel.add(serialField);
        panel.add(new JLabel("Task:"));
        panel.add(taskField);
        panel.add(new JLabel("Work Description:"));
        panel.add(descField);
        panel.add(new JLabel("Time/Date:"));
        panel.add(timeField);

        int result = JOptionPane.showConfirmDialog(frame, panel, "Add New Task", JOptionPane.OK_CANCEL_OPTION);
        if (result == JOptionPane.OK_OPTION) {
            String serial = serialField.getText().trim();
            String task = taskField.getText().trim();
            String description = descField.getText().trim();
            String time = timeField.getText().trim();

            if (!serial.isEmpty() && !task.isEmpty() && !description.isEmpty() && !time.isEmpty()) {
                model.addRow(new Object[]{serial, task, description, time});
            } else {
                JOptionPane.showMessageDialog(frame, "All fields must be filled.", "Error", JOptionPane.ERROR_MESSAGE);
            }
        }
    }

    // Method to remove a selected task
    private void removeTask() {
        int selectedRow = table.getSelectedRow();
        if (selectedRow >= 0) {
            model.removeRow(selectedRow);
        } else {
            JOptionPane.showMessageDialog(frame, "Please select a task to remove.", "Error", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(App::new);
    }}