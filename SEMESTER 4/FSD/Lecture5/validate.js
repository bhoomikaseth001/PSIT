function printError(elemId,hintMsg) {
    document.getElementById(elemId).innerHTML = hintMsg;
}

function validateForm() {
    let name = document.contactForm.name.value;
    let email = document.contactForm.email.value;
    let moblile = document.contactForm.mobile.value;
    let country = document.contactForm.country.value;
    let gender = document.contactForm.gender.value;
    let hobbies = [];
    let checkboxes = document.getElementsByName("hobbies[]");
    for (let i = 0; i < checkboxes.length; i++) {
        if (checkboxes[i].checked) {
            hobbies.push(checkboxes[i].value);
        }
    }   
    }
    