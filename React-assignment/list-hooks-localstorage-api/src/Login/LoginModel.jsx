import React, {useState} from 'react'
import './Model.css';

 const LoginModel = ({onClose, onSwitch}) => {
  const [username, setUsername] = useState('');
  const [password, setPassword] = useState('');

  const handleLogin = () => {
    // Simple validation
    if (username === 'user' && password === 'password') {
      alert('Login Successful');
      onClose();
    } else {
      alert('Invalid username or password');
    }
  };
  return (
    <div className='Model'> 
        <div className='model-content'>
          <span className='close' onClick={onclose}>&times;</span>
          <h2>Login</h2>
          <input type="text" placeholder='Username' value={username} onChange={(e)=>setUsername (e.target.value)} 
          />
          <input type="password" placeholder='password' value={password} onChange={(e)=>setPassword (e.target.value)} 
          />
          <button onClick={handleLogin}>Login</button>
          <p onClick={onSwitch}>Dont hve acc? Register</p>

        </div>
    </div>
  );
};
export default  LoginModel
