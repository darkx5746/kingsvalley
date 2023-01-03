## 깃허브만으로 킹스밸리 롬파일 제작해 보기
킹스밸리 프로젝트는 소스코드 수정없이도   
자신만의 킹스밸리 롬파일을 제작하는 것이 가능합니다.   
아래의 절차를 따라 자신만의 MSX용 킹스밸리 롬파일 제작에   
도전해 보세요.   

* 킹스밸리 프로젝트를 포크한 다음 포크한 프로젝트로 이동합니다. 포크한 프로젝트는 이제 본인 소유의 프로젝트입니다.   
* 깃허브 데스크탑 클라이언트를 다운받아 실행한 다음 킹스밸리 프로젝트를 다운받습니다.   
* 프로젝트의 game/data 로 이동한 다음 map1.json 파일을 Tiled로 실행한 뒤 맵을 수정합니다.   
* 수정을 한 다음 커밋을 하면 깃허브에서 프로젝트를 자동 빌드합니다. 5분정도 기다립니다.   
* 액션탭을 누른다음 All Workflow에서 MSX 항목을 선택합니다. 그런다음 실행된 workflow runs의 최신항목을 선택합니다.
* Artifacts 항목에서 king.rom 파일을 다운받습니다.
* MSX 에뮬레이터로 롬파일을 실행하고 맵 수정사항이 반영되었는지 확인합니다.

현재 깃허브에는 샘플로 map2.json까지 등록되어 있습니다.   
새로운 맵을 추가하고 싶다면 map3.json을 만든다음   
커밋하면 됩니다.