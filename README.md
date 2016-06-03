곰연시
=========

## Sensor
### 기울기센서
* 10오옴 저항을 썼을 때 괜찮았음
* 노란색 쪽이 (+)에 연결되는 쪽이다.
* (+) - 센서  - 저항 - (센싱) -  (-)

## Dependancy Installation

### [platformio](http://docs.platformio.org/)


### React-Native

```
brew install watchman
brew install flow
```

#### NVM
* install NVM and create NVM's working directory if it doesn't exist:
    ```
    brew install nvm
    mkdir ~/.nvm
    ```

* Add the following to ~/.zshrc or your desired shell configuration file:
    ```
    export NVM_DIR="$HOME/.nvm"
    . "$(brew --prefix nvm)/nvm.sh"
    ```

* alias
    ```
    nvm alias default node
    ```


#### react-native-cli
```
npm install -g react-navive-cli
```

## 시작하기

### PlatformIo
* init
    ```
    platformio init
    ```

### React-Native

[참고링크](https://realm.io/kr/news/react-native/)
```
react-native init [프로젝트명]
```
