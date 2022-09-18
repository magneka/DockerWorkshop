package main

import (
	"fmt"
	"net/http"
)

func handle(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Hello all UC consultants, we are good to GO!\n")
}

func main() {
	portNumber := "9000"
	http.HandleFunc("/", handle)
	fmt.Println("Server listening on port ", portNumber)
	http.ListenAndServe(":"+portNumber, nil)
}
