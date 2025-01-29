#! /bin/bash

if ! [[ -x my-grep ]]; then
    echo "my-grep executable does not exist"
    exit 1
fi

../tester/run-tests.sh $*



