import React ,{useState} from 'react';
import 'bootstrap/dist/css/bootstrap.min.css';

 const TodoList = () => {
  const [todos, setTodos] = useState([]);
  const [task, setTask] = useState('');
  const [editId, setEditId] = useState(null);
  const [editTask, setEditTask] = useState('');

  const addTodo = () => {
    if (task.trim() === '') return;
    const newTodo = { id: Date.now(), task, completed: false };
    setTodos([...todos, newTodo]);
    setTask('');
  };

  const updateTodo = () => {
    if (editTask.trim() === '') return;
    setTodos(todos.map(todo =>
      todo.id === editId ? { ...todo, task: editTask } : todo
    ));
    setEditId(null);
    setEditTask('');
  };

  const toggleCompletion = id => {
    setTodos(todos.map(todo =>
      todo.id === id ? { ...todo, completed: !todo.completed } : todo
    ));
  };

  const deleteTodo = id => {
    setTodos(todos.filter(todo => todo.id !== id));
  };
  return (
    <div className="container">
    <h2>Todo List</h2>
    <ul className="list-group mb-3">
      {todos.map(todo => (
        <li key={todo.id} className="list-group-item d-flex justify-content-between align-items-center">
          <span
            onClick={() => toggleCompletion(todo.id)}
            style={{ textDecoration: todo.completed ? 'line-through' : 'none', cursor: 'pointer' }}
          >
            {todo.task}
          </span>
          <div>
            <button className="btn btn-warning btn-sm me-2" onClick={() => {
              setEditId(todo.id);
              setEditTask(todo.task);
            }}>
              Edit
            </button>
            <button className="btn btn-danger btn-sm" onClick={() => deleteTodo(todo.id)}>
              Delete
            </button>
          </div>
        </li>
      ))}
    </ul>
    <div className="input-group mb-3">
      {editId ? (
        <>
          <input
            type="text"
            className="form-control"
            value={editTask}
            onChange={e => setEditTask(e.target.value)}
            placeholder="Edit Task"
          />
          <button className="btn btn-secondary" onClick={updateTodo}>Update</button>
          <button className="btn btn-secondary" onClick={() => {
            setEditId(null);
            setEditTask('');
          }}>Cancel</button>
        </>
      ) : (
        <>
          <input
            type="text"
            className="form-control"
            value={task}
            onChange={e => setTask(e.target.value)}
            placeholder="New Task"
          />
          <button className="btn btn-primary" onClick={addTodo}>Add</button>
        </>
      )}
    </div>
  </div>
);
};

  

export default TodoList
