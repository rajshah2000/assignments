import React, {useState} from 'react'
import './Model.css';

 const RegistrationModel = ({ onClose, onSwitch }) => {
    const [username, setUsername] = useState('');
    const [password, setPassword] = useState('');
    const [confirmPassword, setConfirmPassword] = useState('');
  
    const handleRegister = () => {
      if (password !== confirmPassword) {
        alert('Passwords do not match');
      } else {
        alert('Registration Successful');
        onClose();
      }
    };
  return (
    <div className="model">
      <div className="model-content">
        <span className="close" onClick={onClose}>&times;</span>
        <h2>Register</h2>
        <input
          type="text"
          placeholder="Username"
          value={username}
          onChange={(e) => setUsername(e.target.value)}
        />
        <input
          type="password"
          placeholder="Password"
          value={password}
          onChange={(e) => setPassword(e.target.value)}
        />
        <input
          type="password"
          placeholder="Confirm Password"
          value={confirmPassword}
          onChange={(e) => setConfirmPassword(e.target.value)}
        />
        <button onClick={handleRegister}>Register</button>
        <p onClick={onSwitch}>Already have an account? Login</p>
      </div>
    </div>
  )
}
export default RegistrationModel