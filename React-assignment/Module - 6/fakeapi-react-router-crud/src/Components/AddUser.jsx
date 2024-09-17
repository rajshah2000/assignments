import { useState } from 'react';
import { Container, TextField, Button, Typography } from '@mui/material';
import { useNavigate } from 'react-router-dom';
import axios from 'axios';
import Swal from 'sweetalert2';

function AddUser() {
  let navigate = useNavigate();
  const [user, setUser] = useState({
    name: '',
    email: ''
  });

  const { name, email } = user;

  const onInputChange = (e) => {
    setUser({ ...user, [e.target.name]: e.target.value });
  };

  const onSubmit = async (e) => {
    e.preventDefault();

    try {
      const response = await axios.get('http://localhost:3000/users');
      const users = response.data;
      const maxId = users.reduce((max, user) => Math.max(max, parseInt(user.id)), 0);

     
      const newUser = {
        id: (maxId + 1).toString(),
        name,
        email
      };

      await axios.post('http://localhost:3000/users', newUser);
      Swal.fire({
        title: 'User Added!',
        text: 'The new user has been successfully added.',
        icon: 'success',
        confirmButtonText: 'Got it!'
      }).then(() => {
        navigate('/');
      });
    } catch (error) {
      console.error("Error adding user:", error);
      Swal.fire({
        title: 'Error!',
        text: 'There was an issue adding the user.',
        icon: 'error',
        confirmButtonText: 'Try Again'
      });
    }
  };

  return (
    <Container style={{ fontFamily: 'Poppins' }}>
      <Typography variant="h4" gutterBottom>
        Add User
      </Typography>
      <form onSubmit={onSubmit}>
        <TextField
          label="Name"
          name="name"
          value={name}
          onChange={onInputChange}
          fullWidth
          margin="normal"
          InputLabelProps={{ style: { fontFamily: 'Poppins' } }}
          InputProps={{ style: { fontFamily: 'Poppins' } }}
          required
        />
        <TextField
          label="Email"
          name="email"
          value={email}
          onChange={onInputChange}
          fullWidth
          margin="normal"
          InputLabelProps={{ style: { fontFamily: 'Poppins' } }}
          InputProps={{ style: { fontFamily: 'Poppins' } }}
          required
          type="email"
        />
        <Button
          variant="contained"
          color="primary"
          type="submit"
          style={{ fontFamily: 'Poppins' }}
        >
          Add User
        </Button>
        &nbsp;
        <Button
          variant="contained"
          color='secondary'
          type='button'
          style={{ fontFamily: 'Poppins' }}
          onClick={() => navigate(-1)}
        >
          Cancel
        </Button>
      </form>      
    </Container>
  );
}

export default AddUser;
