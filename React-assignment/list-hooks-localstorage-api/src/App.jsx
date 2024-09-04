import { useState } from 'react'
// import reactLogo from './assets/react.svg'
// import viteLogo from '/vite.svg'
import './App.css'
import TodoList from './TodoList'
import ListView from './ListView'
import LoginTask from './Login/LoginTask'
import Mouse from './MouseMovent/Mouse'

function App() {
  const [count, setCount] = useState(0)

  return (
  <div className='App'>
       {/* <TodoList/> */}
       {/* <ListView/> */}
       {/* <LoginTask/> */}
       <Mouse/>
       
  </div>
  )
}

export default App
