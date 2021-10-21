function changeColor(object)
{
  if( object.className == "a" )
  {
    object.className = "b";
  }
  else
  {
    object.className = "a";
  }
}

function toggle()
{
    object = document.getElementById("testme")
 if( object.className == "visible" )
  {
    object.className = "invisible";
  }
  else
  {
    object.className = "visible";
  }
}
