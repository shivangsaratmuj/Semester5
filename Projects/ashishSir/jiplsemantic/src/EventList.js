import React from 'react';
import { Card, Grid, Image, Button, Modal, Header, Input } from 'semantic-ui-react';

const text = {
    color: 'black'
}

const items = [
    {
        header:'Syed Mujahed Ali',
		description:'Founder & President',
		meta: 'B.Tech (E&CE, 4th Year)',
        image:'http://i63.tinypic.com/2dt7o7b.jpg'
    },{
        header:"Utkarsh Shrivastava",
		description:'Founder & Vice-President',
		meta: 'B.Tech (E&CE, 4th Year)',
        image:'http://i63.tinypic.com/2n1sxg7.jpg'
    },{
        header:'Avinash Lamba',
		description:'Co-Founder & General Secretary',
		meta: 'B.Com (Hons.) (3rd  Year)',
        image:'http://i66.tinypic.com/21dkaiq.jpg'
    },{
        header:"Kunal Anand",
		description:'Marketing & Outreach Head',
		meta: 'B.Tech (IT, 3rd Year)',
        image:'http://i66.tinypic.com/wu5h01.jpg'
    },{
        header:"Akash Kalra",
		description:'Treasurer & Content Head',
		meta: 'B.Tech (E&CE, 3rd  Year)',
        image:'http://i68.tinypic.com/ax08lf.jpg'
    },{
        header:'Ginni Gupta',
		description:'Head, PR',
		meta: 'B.Tech (E&CE, 3rd  Year)',
        image:'http://i63.tinypic.com/bfnf6e.jpg'
    },{
        header:'Shivang Sarat',
		description:'Head of IT',
		meta: 'B.Tech (CSE, 3rd  Year)',
        image:'http://i66.tinypic.com/4uw37s.jpg'
    },
  ];

export default class List extends React.Component {
	render(){
		return(
			<div>
                <Grid.Row>
                    <Grid.Column mobile={16} tablet={16} computer={16}>
                        <Card.Group>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[0].image} />
                                <Card.Header>{items[0].header}</Card.Header>
                                <Card.Description>{items[0].description}</Card.Description>
                                <Card.Meta>{items[0].meta}</Card.Meta>
                                <Modal trigger={<Button primary>Register</Button>} centered={false}>
    								<Modal.Header>Select a Photo</Modal.Header>
    								<Modal.Content image>
	      								<Image wrapped size='medium' src={items[0].image} />
	      								<Modal.Description>
	        								<Header>{items[0].header}</Header>
	        								<p>We've found the following gravatar image associated with your e-mail address.</p>
	        								<p>Is it okay to use this photo?</p>
	        								<form action = '/testEvent1' method = 'POST'>
	        									<Header>First Name</Header>
	      										<Input focus fluid placeholder='First Name' />
	      									</form><br />
	      									<Button primary>Submit</Button>
	      								</Modal.Description>	      						
    								</Modal.Content>
  								</Modal>
                            </Card>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[1].image} />
                                <Card.Header>{items[1].header}</Card.Header>
                                <Card.Description>{items[1].description}</Card.Description>
                                <Card.Meta>{items[1].meta}</Card.Meta>
                            </Card>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[2].image} />
                                <Card.Header>{items[2].header}</Card.Header>
                                <Card.Description>{items[2].description}</Card.Description>
                                <Card.Meta>{items[2].meta}</Card.Meta>
                            </Card>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[3].image} />
                                <Card.Header>{items[3].header}</Card.Header>
                                <Card.Description>{items[3].description}</Card.Description>
                                <Card.Meta>{items[3].meta}</Card.Meta>
                            </Card>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[4].image} />
                                <Card.Header>{items[4].header}</Card.Header>
                                <Card.Description>{items[4].description}</Card.Description>
                                <Card.Meta>{items[4].meta}</Card.Meta>
                            </Card>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[5].image} />
                                <Card.Header>{items[5].header}</Card.Header>
                                <Card.Description>{items[5].description}</Card.Description>
                                <Card.Meta>{items[5].meta}</Card.Meta>
                            </Card>
                            <Card style={text} className='ui centered card'>
                                <Image src={items[6].image} />
                                <Card.Header>{items[6].header}</Card.Header>
                                <Card.Description>{items[6].description}</Card.Description>
                                <Card.Meta>{items[6].meta}</Card.Meta>
                            </Card>
                        </Card.Group>
                    </Grid.Column>
                </Grid.Row>
            </div>
			)
	}
}