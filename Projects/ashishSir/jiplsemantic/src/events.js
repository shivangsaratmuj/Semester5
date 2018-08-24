import React from 'react';
import { Card, Grid, Image } from 'semantic-ui-react';
import List from './EventList.js';


const text = {
    color: 'black',
    width: '75%',
}

const items = [
    {
        header:'Events',
        description:'',
        image:'http://i66.tinypic.com/34sngpy.jpg'
    },
    {
        header:"Gallery",
        description:'',
        image:'http://i67.tinypic.com/2hmenp4.png'
    },
];

// function handleClick(e) {
// 		e.preventDefault();
//     	console.log('The link was clicked.');
// 	}

export default class Events extends React.Component {
	constructor(props){
		super(props);
		this.state = {
			showComponent: false,
		};
		this.handleClick = this.handleClick.bind(this);
		this.callList = this.callList.bind(this);
	}

	callList = () => {
		if(!this.state.showComponent) return '';

		return(
			<List />
			)
	}

	handleClick(e) {
		e.preventDefault();
    	console.log('The link was clicked.');
    	this.setState({
      		showComponent: true,
    	});
	}

	render(){
		return(
			<div>
                <Grid.Row>
                    <Grid.Column mobile={16} tablet={16} computer={16}>
                        <Card.Group>
	                            <Card style={text} className='ui centered card' onClick = {this.handleClick} >
	                                <Image src={items[0].image} />
	                                <Card.Header>{items[0].header}</Card.Header>
	                                <Card.Description>{items[0].description}</Card.Description>
	                            </Card>
	                            {this.callList()}
                        </Card.Group>
                    </Grid.Column>
                </Grid.Row><br />
                <Grid.Row>
                    <Grid.Column mobile={16} tablet={16} computer={16}>
                        <Card.Group>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[1].image} />
                                <Card.Header>{items[1].header}</Card.Header>
                                <Card.Description>{items[1].description}</Card.Description>
                            </Card>
                        </Card.Group>
                    </Grid.Column>
                </Grid.Row>
            </div>
		);
	}
}