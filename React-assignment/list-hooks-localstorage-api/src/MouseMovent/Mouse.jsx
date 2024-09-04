import React ,{useState, useEffect} from 'react'
import './MouseMovment.css';

 const Mouse = () => {
    const [position, setPosition] = useState({ x: 0, y: 0 });

    useEffect(() => {
        const handleMouseMove = (event) => {
          setPosition({
            x: event.clientX,
            y: event.clientY,
          });
        };
    
        window.addEventListener('mousemove', handleMouseMove);
    
        // Cleanup the event listener on component unmount
        return () => {
          window.removeEventListener('mousemove', handleMouseMove);
        };
      }, []);
    
  return (
    <div className="container">
      <div
        className="box"
        style={{ left: `${position.x}px`, top: `${position.y}px` }}
      ></div>
    </div>
    
  )
}
export default Mouse
