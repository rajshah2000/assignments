import React, { useState } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { create, deleteData, update } from './../redux/action';

const ReduxComponent = () => {
    const data = useSelector((state) => state.data);
    const dispatch = useDispatch();
    const [userData, setUserData] = useState({
        id: "",
        name: "",
        age: ""
    });
    const [isCreating, setIsCreating] = useState(false); // State to manage form visibility
    const [isEditing, setIsEditing] = useState(false); // State to manage edit mode

    const handleChange = (e) => {
        const { name, value } = e.target;
        setUserData({
            ...userData,
            [name]: value
        });
    };

    const saveData = (e) => {
        e.preventDefault();
        let len = data.length;
        const newUserData = { ...userData, id: len + 1 };
        dispatch(create(newUserData));
        setUserData({
            id: '',
            name: '',
            age: ''
        });
        setIsCreating(false); // Hide the form after creating new data
    };

    const editData = (item) => {
        setUserData(item);
        setIsCreating(true); // Show the form when editing data
        setIsEditing(true); // Set edit mode
    };

    const updateData = (e) => {
        e.preventDefault();
        if (userData.id) {
            dispatch(update(userData.id, userData));
            setUserData({
                id: '',
                name: '',
                age: ''
            });
            setIsCreating(false); // Hide the form after updating data
            setIsEditing(false); // Reset edit mode
        } else {
            console.error("User ID is undefined.");
        }
    };

    const handleDelete = (id) => {
        dispatch(deleteData(id));
    };

    const handleCreateClick = () => {
        setIsCreating(true); // Show the form when "Create" button is clicked
        setUserData({ id: '', name: '', age: '' }); // Reset form fields
        setIsEditing(false); // Ensure we are not in edit mode
    };

    return (
        <div>
            <h3>USER CRUD EXAMPLE</h3>
            <button className="btn btn-info" onClick={handleCreateClick}>Create New User</button>
            {isCreating && (
                <div style={{ marginTop: '20px' }}>
                    <form action="#" method='post' onSubmit={isEditing ? updateData : saveData}>
                        NAME: <input type="text" name="name" value={userData.name} onChange={handleChange} />
                        AGE: <input type="number" name="age" value={userData.age} onChange={handleChange} />
                        <input type="submit" value={isEditing ? "Update Data" : "Save Data"} />
                    </form>
                </div>
            )}
            <br /><br />
            <table className='table table-dark'>
                <thead>
                    <tr>
                        <th>ID</th>
                        <th>NAME</th>
                        <th>AGE</th>
                        <th>EDIT</th>
                        <th>DELETE</th>
                    </tr>
                </thead>
                <tbody>
                    {
                        data && data.map((i) => i && (
                            <tr key={i.id}>
                                <td>{i.id}</td>
                                <td >{i.name}</td>
                                <td>{i.age}</td>
                                <td >
                                    <button className='btn btn-primary' onClick={() => editData(i)}>Edit</button>
                                </td>
                                <td>
                                    <button className='btn btn-danger' onClick={() => handleDelete(i.id)}>Delete</button>
                                </td>
                            </tr>
                        ))
                    }
                </tbody>  
            </table>
        </div>
    );
}

export default ReduxComponent;
