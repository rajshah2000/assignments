import React from 'react'
import ReactDOM from 'react-dom/client'
import App from './App.jsx'
import './index.css'
import BootstrapComponent from './BootstrapComponent.jsx'
import 'bootstrap/dist/css/bootstrap.min.css';
import Count from './Count.jsx'


ReactDOM.createRoot(document.getElementById('root')).render(
  <React.StrictMode>
    
    {/* <App />  */}
    {/* <BootstrapComponent/> */}
    <Count/>
    
  </React.StrictMode>,
)
