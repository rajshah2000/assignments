import React, { useState } from 'react'

 const Count = () => {
    const [count, setCount ]= useState(0)
    const remove=()=>{
        setCount(count-1)
    }
    const reset =()=>{
        setCount(0)
    }
  return (
    <div className='bb'>
        <h3 >React web: {count}</h3>
        <button onClick={()=>setCount(count+1)} className='aa'>Increment</button>
        <button onClick={remove} className='cc'>Decrement</button>
        <button onClick={reset} className='dd'>reset</button>
    </div>
  )
}
export default Count
