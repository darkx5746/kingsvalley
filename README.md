# 왕가의 계곡 1(King's Valley 1) 
MSX 게임 왕가의 계곡 1(킹스밸리) C 재구현 프로젝트입니다.  

## 지원 플랫폼
* MSX
* WIN32
* 리눅스
* 안드로이드(WIP)
* MS-DOS(WIP)
* YUZA-OS(WIP)

# 나만의 왕가의 계곡 만들어 보기
본 프로젝트는 커스터마이징을 하지 않는 한 프로그래머가 아니더라도   
자신만의 왕가의 계곡 롬팩을 제작하는 것이 가능합니다.   

# 빌드
각 플랫폼별 빌드방법은 액션탭에서 더 자세히 확인할 수 있습니다.  
아래 내용으로 빌드에 어려움을 겪는다면 참조하시기 바랍니다.

## WIN32
비쥬얼 스튜디오 2022 또는 그 상위버전으로 프로젝트를 빌드할 수 있습니다.   
우선 SDL 라이브러리를 편하게 적용하기 위해 vcpkg를 먼저 설치해야 합니다.  

### vcpkg 설치 및 환경구축
예전에는 일일이 관련 라이브러리를 다운받고 빌드해야 했지만   
vcpkg가 등장한 이유로 써드파티 라이브러리를 손쉽게 프로젝트에 적용할 수 있습니다.    
깃 클라이언트 또는 깃 클라이언트 데스크탑을 활용해서 vcpkg를 다운받습니다.

```
git clone https://github.com/microsoft/vcpkg
```

그런다음 콘솔 프로그램을 실행하고 vcpkg 폴더로 이동한 뒤, 다음 명령을 입력합니다.

```
bootstrap-vcpkg.bat
```

이제 vcpkg가 설치되었습니다. 이제 프로젝트를 빌드하기 위한 라이브러리를 설치합니다.

```
vcpkg install sdl2
vcpkg install sdl2-image
vcpkg install sdl2-mixer
vcpkg install libmikmod
vcpkg install libflac
vcpkg install smpeg2
vcpkg install libvorbis
vcpkg install tiff
```

그런 다음 비쥬얼 스튜디오에서 vcpkg 시스템을 활용하기 위해 다음 명령을 입력합니다.

```
vcpkg integrate install
```

vcpkg를 비활성화하고 싶다면 아래 명령을 입력합니다.

```
vcpkg intergrate remove
```

### 프로젝트 빌드
kingsvalley.sln 솔루션을 실행한 다음 빌드합니다.

## MSX
WIP

## 리눅스
WSL2, 우분투 20.04 LTS에서 테스트하였습니다.

### 환경설정
```
sudo apt upgrade
sudo apt install libsdl2-dev libsdl2-2.0-0 -y;
sudo apt install libjpeg-dev libwebp-dev libtiff5-dev libsdl2-image-dev libsdl2-image-2.0-0 -y;
sudo apt install libmikmod-dev libfishsound1-dev libsmpeg-dev liboggz2-dev libflac-dev libfluidsynth-dev libsdl2-mixer-dev libsdl2-mixer-2.0-0 -y;
sudo apt-get install libglew-dev
```

### 빌드
game/linux 폴더로 이동한 다음 아래 명령을 수행합니다.
```
make
```

## 감사의 말씀
ubox MSX library Present.

