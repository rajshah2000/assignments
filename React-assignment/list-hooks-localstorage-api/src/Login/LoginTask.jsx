import React, {useState} from 'react'
import LoginModel from './LoginModel'
import RegistrationModel from './RegistrationModel'

 const LoginTask = () => {
    const [isLoginOpen, setIsLoginOpen] = useState(false);
    const [isRegisterOpen, setIsRegisterOpen] = useState(false);
  
    const openLoginModel = () => {
      setIsLoginOpen(true);
      setIsRegisterOpen(false);
    };
  
    const openRegisterModel = () => {
      setIsLoginOpen(false);
      setIsRegisterOpen(true);
    };
  
    const closeModels = () => {
      setIsLoginOpen(false);
      setIsRegisterOpen(false);
    };
  
  return (
    <div className="App">
      <button onClick={openLoginModel}>Login</button>
      <button onClick={openRegisterModel}>Register</button>

      {isLoginOpen && <LoginModel onClose={closeModels} onSwitch={openRegisterModel} />}
      {isRegisterOpen && <RegistrationModel onClose={closeModels} onSwitch={openLoginModel} />}
    </div>
    
  )
}
export default LoginTask
