 # <가상 시나리오>

안녕하세요, 저는 매니저입니다. 

저희의 프로젝트의 목적은 고객의 퍼스널 컬러에 맞는 화장품을 추천해주는 것입니다.


* 먼저, 기초적인 기능들에 대해서 설명해드리겠습니다. 

## 0. MainMenu
![image](https://user-images.githubusercontent.com/61863242/81915072-11776500-960d-11ea-9799-df8e4fe28bc2.png)
  * 맨 먼저 프로젝트를 실행하면 다음과 같이 메인 메뉴가 생성됩니다. 
  * 현재 product.txt 파일이 존재하지 않기 때문에 파일이 없다고 뜹니다. 
    
## 1. 조회
![image](https://user-images.githubusercontent.com/61863242/81917187-d4f93880-960f-11ea-85bb-6f99fa34baae.png)
  * 아직 등록된 화장품이 없어서 조회가 되지 않는 모습입니다. 
  
## 2. 추가

  * 화장품을 추가하는 기능입니다. 
  * 원하는 화장품을 추가해보도록 하겠습니다. 
  
  ![image](https://user-images.githubusercontent.com/61863242/81917470-302b2b00-9610-11ea-9883-ed73b7ee50b3.png)
  ![image](https://user-images.githubusercontent.com/61863242/81917616-62d52380-9610-11ea-907d-3828c282cdcc.png)
  
  * 제품의 이름, 무게, 가격, 별점은 물론 Personal Color와 제품의 색상, 그리고 이벤트 유무까지 저장할 수 있습니다. 
  * Personal Color는 보시는 바와 같이 5가지 중에서 고를 수 있으며, 제품의 색상은 가장 대표적인 18가지 색상으로 구현했습니다. 
  * 이벤트 유무에서 1번을 선택하면 이벤트 하는 제품으로 등록이 됩니다. 
  
  ### 조회
  ![image](https://user-images.githubusercontent.com/61863242/81917913-c4958d80-9610-11ea-82b5-901b3848dd3f.png)
  * 다시 한 번 조회를 했을 때의 모습입니다. 
  * 저장한 제품의 목록을 보여줍니다. 
  
  ### 추가 후 조회
  ![image](https://user-images.githubusercontent.com/61863242/81918678-c449c200-9611-11ea-9e8b-556d7659833c.png)

  * 몇가지 제품들을 더 추가한 후 조회한 모습입니다. 
  * 앗, 오타가 생겼습니다. 
  
 
## 3. 수정
   * 오타를 수정해보겠습니다. 
   ![image](https://user-images.githubusercontent.com/61863242/81918874-0a9f2100-9612-11ea-90c4-8ec15f0340e9.png)
   ![image](https://user-images.githubusercontent.com/61863242/81919009-38846580-9612-11ea-91c9-4d63b45e8927.png)
   
   ### 조회  
![image](https://user-images.githubusercontent.com/61863242/81919122-61a4f600-9612-11ea-9970-d713da70f483.png)

   * 깔끔하게 수정된 것을 볼 수 있습니다. 

## 4. 삭제
   * 다음은 삭제 기능에 대한 설명입니다. 
   * 1번인 아이쉐도우 제품을 삭제해 보겠습니다.
<img width="503" alt="스크린샷 2020-05-14 오후 7 36 13" src="https://user-images.githubusercontent.com/61505435/81925711-d4ff3580-961b-11ea-85ac-ec959c32caba.png">
  
  ### 삭제 후 조회
<img width="488" alt="스크린샷 2020-05-14 오후 7 43 17" src="https://user-images.githubusercontent.com/61505435/81925211-2a871280-961b-11ea-9276-42c32be5a208.png">

   * 1번이 삭제되고, 2번 3번이 나오는 것을 볼 수 있습니다.

## 5. 파일저장

   * 이제 이 내용을 파일에 저장해 보겠습니다.
   * 저장을 한 후 프로그램을 종료를 하여 txt파일을 열어 보겠습니다.
<img width="348" alt="스크린샷 2020-05-14 오후 7 52 10" src="https://user-images.githubusercontent.com/61505435/81926107-72f30000-961c-11ea-8856-7aa9b76a98ae.png">

   * cat product.txt를 하여 확인한 내용입니다. 
<img width="416" alt="스크린샷 2020-05-14 오후 7 53 53" src="https://user-images.githubusercontent.com/61505435/81926250-a59cf880-961c-11ea-8c3c-342b20ba5d6e.png">

   * 다시 프로그램을 실행 하여서 조회하면 다음과 같습니다. 
<img width="538" alt="스크린샷 2020-05-14 오후 7 56 21" src="https://user-images.githubusercontent.com/61505435/81926509-0298ae80-961d-11ea-994a-3dcdf3560501.png">


   ## 6. 이름검색
   
   * 다음은 이름 검색에 대한 기능입니다. 
   * '카라'를 찾아보겠습니다. 
<img width="563" alt="스크린샷 2020-05-14 오후 8 00 28" src="https://user-images.githubusercontent.com/61505435/81926831-8fdc0300-961d-11ea-9807-3b6eb4608b56.png">

  * 2번인 더 쇼킹 카라 제품이 나오는 것을 알 수 있습니다.
  
* 다음으로는 여러 기타 기능을 살펴보려고 합니다.

   ## 7. 이벤트 제품 조회
   
   * 이벤트하는 제품은 1로 나타나있습니다. 
   * 우선 여러제품을 나타내기 위해 제품 하나를 더 추가합니다. 
<img width="555" alt="스크린샷 2020-05-14 오후 8 09 39" src="https://user-images.githubusercontent.com/61505435/81927581-d847f080-961e-11ea-857e-70f1bfa4c362.png">

   * 이제 이벤트제품을 조회해 보겠습니다.
<img width="496" alt="스크린샷 2020-05-14 오후 8 10 22" src="https://user-images.githubusercontent.com/61505435/81927639-f281ce80-961e-11ea-879f-72de999240b1.png">


  ## 8. Color로 제품찾기

   * 이제 제품의 색으로 제품을 찾아보겠습니다.
   * 저는 beige색을 원하므로 beige색을 찾아보겠습니다.

<img width="540" alt="스크린샷 2020-05-14 오후 8 13 26" src="https://user-images.githubusercontent.com/61505435/81927895-602dfa80-961f-11ea-9d08-61e8076c1a75.png">
   * 이렇게 해당 제품이 나오는 것을 볼 수 있습니다.


  ## 9. personalColor로 제품찾기

   * 이제 저에게 맞는 personal color로 제품을 찾아보고싶네요. 
   * 저에게 맞는 제품을 찾아 볼까요?

<img width="585" alt="스크린샷 2020-05-14 오후 8 16 38" src="https://user-images.githubusercontent.com/61505435/81928178-d3377100-961f-11ea-8223-705ddc6b9f7e.png">

   * 봄웜을 입력하니 저에게 맞는 화장품을 추천해준것을 볼 수 있습니다.



