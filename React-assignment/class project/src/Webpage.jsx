
import React, { useEffect, useState } from 'react'
import Container from 'react-bootstrap/Container';
import Nav from 'react-bootstrap/Nav';
import Navbar from 'react-bootstrap/Navbar';
import NavDropdown from 'react-bootstrap/NavDropdown';
import './navbar.css'
import 'bootstrap/dist/css/bootstrap.min.css';
import Card from 'react-bootstrap/Card';
import Button from 'react-bootstrap/Button';



const Webpage = () => {
  const [data,setData]=useState([])
  useEffect(()=>{
    fetch('https://fakestoreapi.com/products')
            .then(res=>res.json())
            .then(json=>{
              setData(json)
            })
  })
  return (
    <div>
      <div className='Navbar'>
        <Navbar expand="lg" className="bg-body-tertiary">
          <Container>
            <Navbar.Brand href="#home"><img src="../images/nest.png" alt="" /></Navbar.Brand>
            <Navbar.Collapse id="basic-navbar-nav">

            </Navbar.Collapse>

            <NavDropdown title="Select Language" id="basic-nav-dropdown">
              <NavDropdown.Item href="#action/3.1">Chinese</NavDropdown.Item>
              <NavDropdown.Item href="#action/3.2">English</NavDropdown.Item>
              <NavDropdown.Item href="#action/3.3">Malay</NavDropdown.Item>


            </NavDropdown>
            <Nav className="me-auto">
              {/* <Nav.Link href="#home"></Nav.Link> */}
              <Nav.Link href="#link">Cart</Nav.Link>
              <Nav.Link href="#link">Search</Nav.Link>

            </Nav>
          </Container>
        </Navbar>
      </div>
      <Container>
        <div className='mainpic'>
          <img src="./images/main pic.jpg" alt="" />
        </div>

      </Container>
      <br />
      <Container>
        <div>

          <h1>Nest Mart & Grocery</h1>
          <h2>Everyday Fresh & Clean with Our Products</h2>

        </div>
      </Container>
      <br />

      {/* fresh product */}
      <Container>
        <div className='pictures'>
          <Card className="bg-dark text-white">
            <Card.Img src="./images/onion.png" alt="Card image" />
            <Card.ImgOverlay>
              <Card.Title>Everyday Fresh & Clean with Our Products</Card.Title>
            </Card.ImgOverlay>
          </Card>
        </div>


        <div className='pictures'>
          <Card className="bg-dark text-white">
            <Card.Img src="./images/shake.png" alt="Card image" />
            <Card.ImgOverlay>
              <Card.Title>Make your Breakfast Healthy and Easy</Card.Title>


            </Card.ImgOverlay>
          </Card>
        </div>

        <div className='pictures'>
          <Card className="bg-dark text-white">
            <Card.Img src="./images/vegetables.png" alt="Card image" />
            <Card.ImgOverlay>
              <Card.Title>The best Organic Products Online</Card.Title>


            </Card.ImgOverlay>
          </Card>
        </div>
      </Container>
      <br />
      <Container>
        <div className='but'>
          <Button variant="primary">Show all</Button>{' '}
          <Button variant="secondary">Electronics</Button>{' '}
          <Button variant="secondary">jewellery</Button>{' '}
          <Button variant="secondary">mens clothing</Button>{' '}
          <Button variant="secondary">womens clothing</Button>{' '}


        </div>
      </Container>
      <br />
      <Container>
        <div>
          <h3>Popular Products</h3>
        </div>
      </Container>
      <br />

      {/* Produts */}

      <Container>
        

        {
          data && data.map((i)=>{
          return(
            <div className='api'>
            
              <Card style={{ width: '17rem',height:'380px',margin:'10px 2px' }}>
                <Card.Img variant="top" src={i.image} style={{height:'190px'}} />
                <Card.Body>
                  <Card.Title>{i.title}</Card.Title>
                  <Card.Text>{i.price}</Card.Text>
                </Card.Body>
              </Card>
            </div>
          
          )
          })
        }
      </Container>
</div>

  )
}
export default Webpage
