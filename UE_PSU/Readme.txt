- 언리얼5
-- 게임엔진들은 영화촬영에 비유 가능.
==> 세트장 : 월드
==> 배우 : 액터

- 언리얼은 상속구조와 컴포넌트 패턴이 핵심 철학이다.
-- 언리얼의 모든 오브젝트들은 UObject를 상속받아 만들어진다.
__ 앞에 U가 붙으면, UObject를 상속받았다는 컨벤션.
-- Actor만 제외. 그리고 Actor를 상속받는 자식들만 앞에 A가 붙는다.(Transform 때문)
__ F가 붙으면 UObject를 상속받은 객체가 아니다.


UPROPERTY( ? )
- 컴포넌트 창에 보이고, 수정가능 여부를 정하는 명령어.

ConstructorHelpers
- 생성자에서 언리얼에디터에 존재
  (프로젝트 파일에 저장되어있는 정보들을 읽어올 수 있게 도와준다.)

//과제
ConstructHelper::FindObject, FindClass
- 용도?

Local과 Local이 안 붙은 수학 함수들의 차이
-

언리얼의 Cast
- ?

언리얼 객체의 수명 주기

Delegate
--
Delegate를 쓰는 이유
 => 방법 비교

  방법 1. 위 처럼 델레게이트 사용
  방법 2. 클래스 객체로 직접 함수 호출 
auto myAnimI = GetMesh()->GetAnimInstance();
Cast<UMyAnimInstance>(myAnimI)->DelegateTest2(50, 30);
	단점 : 클래스간의 결합도가 높아짐 
	=> 연결된 클래스 중 하나라도 없어지면 터짐