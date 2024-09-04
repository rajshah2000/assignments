import React from 'react'

 const ListView = () => {
    const arr=  [
        'Use Array.Map',
        'Not a for loop ',
        'Give each item A unique key',  
        'Avoid using array index as a key'
    ];
  return (
    <div className='dd'>
        <h1 className='head'>The "React Way" To render a list</h1>
        <ul>
            {
                arr.map((i)=>{
                    return <li className='customCSS'>{i}</li>
                })
            }
        </ul>
        {/* <h1 className='bg-primary text-warning'>Hello</h1>
        <button className='btn btn-primary'>Click</button> */}
    </div>
  )
}
export default ListView
