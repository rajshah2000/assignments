export const CREATE = "CREATE";
export const DISPLAY = "DISPLAY";
export const UPDATE = "UPDATE";
export const DELETE = "DELETE";
export const EDIT = "EDIT";

export const create = (data) => {
  return {
    type: CREATE,
    payload: data
  };
};

export const display = () => {
  return {
    type: DISPLAY
  };
};

export const deleteData = (id) => {
  return {
    type: DELETE,
    payload: id
  };
};

export const update = (id, data) => {
  return {
    type: UPDATE,
    payload: (id, data)
  };
};
