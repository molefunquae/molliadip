QVBoxLayout *layout = new QVBoxLayout(this);
QLabel *label = new QLabel("Hello, World!", this);
layout->addWidget(label);
scrollArea->setLayout(layout);
