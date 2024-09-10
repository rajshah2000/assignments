import { CREATE, DELETE, UPDATE } from "./action";

const initialState = {
  data: [],
  editUser: {},
};

const reducers = (state = initialState, action) => {
  switch (action.type) {
    case CREATE:
      return {
        ...state,
        data: [...state.data, action.payload],
      };
    case UPDATE:
      console.log('UPDATE action:', action);
      return {
        ...state,
        data: state.data.map((i) => {
          if (i && i.id === action.payload.id) {
            return action.payload; // Correctly return the updated object
          }
          return i;
        }),
      };
    case DELETE:
      return {
        ...state,
        data: state.data.filter((i) => i && i.id !== action.payload),
      };
    default:
      return state;
  }
};

export default reducers;
