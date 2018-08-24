import React from 'react';
import { Menu, Dropdown } from 'semantic-ui-react';
import {
    BrowserRouter as Router,
    Route,
    Link,
    // NavLink
} from 'react-router-dom';

import HomePage from './Home.js';
import Events from './events.js';
import List from './EventList.js';
// import ContactUs from './ContactUs.js';
// import Members from './Members.js';
// import Vision from './Vision.js';
// import Events from './Events.js';
// import Muj from './Muj.js';

const style = {
    padding: '10px',
    paddingTop: '0px'
}

const dropmenu = {
    backgroundColor: '#e89b9b',
}
const droptext = {
    color: 'white',
    fontFamily: 'georgia',
    fontSize: '25px',
}

// const img = {
//     marginLeft: '20px',
//     paddingTop: '5px',
//     paddingBottom: '5px',
// }
const color = {
    backgroundColor: '#e89b9b',
    fontFamily: 'georgia',
    fontSize: '25px',
    padding: '5px',
}
const text = {
    color: 'white',
}

export default class Nav extends React.Component {
    render() {
        return (
            <div>
                {/* <div style={img}>
                    <img src='https://s15.postimg.cc/j5j56k1hj/Qurekalogowhite.png' alt='Logo' width='80px' height='autp' />
                </div> */}
                <Router>
                    <div style={style}>  
                        <Menu style={color} stackable secondary fluid >
                            {/* <Menu.Item>
                                <img src='https://s15.postimg.cc/j5j56k1hj/Qurekalogowhite.png' />
                            </Menu.Item> */}
                            <Link to="/"><p className="item" style={text}>Home</p></Link>
                                <Menu vertical style = {dropmenu}>
                                    <Dropdown item text='Events' style={droptext}>
                                        <Dropdown.Menu>
                                            <Dropdown.Item><Link to="/Events"><p className="item">Event List</p></Link></Dropdown.Item>
                                            <Dropdown.Item><Link to="/Gallery"><p className="item">Gallery</p></Link></Dropdown.Item>
                                        </Dropdown.Menu>
                                    </Dropdown>
                                </Menu>
                                <Menu vertical style = {dropmenu}>
                                    <Dropdown item text='Festivals' style={droptext}>
                                        <Dropdown.Menu>
                                            <Dropdown.Item><Link to="/Events"><p className="item">Festival List</p></Link></Dropdown.Item>
                                            <Dropdown.Item><Link to="/Gallery"><p className="item">Gallery</p></Link></Dropdown.Item>
                                        </Dropdown.Menu>
                                    </Dropdown>
                                </Menu>
                        </Menu>
                        
                        <Route exact path="/" component={HomePage} />
                        <Route exact path="/Events" component={List} />
                        <Route exact path="/Gallery" component={Events} />
                    </div>
                </Router><br /><br /><br /><br /><br />
            </div>
        );
    }
}