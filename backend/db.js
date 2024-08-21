const mongoose=require("mongoose");

//creating a database
const connectToMongo=()=>{
    mongoose.connect("mongodb://127.0.0.1:27017/notes").then(()=>{
        console.log("connection successful");
    }).catch((err)=>{
        console.log(err);
    })
}

module.exports=connectToMongo;