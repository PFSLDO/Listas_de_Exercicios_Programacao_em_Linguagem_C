#define VPL_MOODLE
#include <stdio.h>
#include <string.h>

int main() {
  char name[30];
  char event[12];
  int state = 0;

  printf("\nBem vindx ao Pandemix!\nA desenvolvedora não se responsabiliza por eventuais coincidências com a realidade e a vergonha nacional passada por figuras públicas aqui mostradas\nInsira seu nome:\n");
  fgets(name, sizeof(name), stdin);
  name[strlen(name)-1] = '\0';

  while (1) {
    switch (state) {

      case 0:
        printf("\nVocê é um viajante do futuro e sua máquina do tempo estragou no meio de uma missão. Você foi parar no Brasil no ano 2020. Um vírus se espalhou pelo mundo e paralelamente à pandemia,que tomou conta em março desse ano, as mídias de massa tentam amenizar o número esmagador de casos brasileiros, diminuindo-os à apenas uma gripezinha. O que deseja fazer logo após acordar? Digite:\nMASK, para colocar uma máscara;\nNEWS, para assistir o pronunciamento do presidente sobre o vírus;\nMARKET, para ir ao mercado estocar comida.\n");

        fgets(event, sizeof(event), stdin);
        event[strlen(event)-1] = '\0';
        printf("%s", event);

        if (strcmp (event, "MASK") == 0) {
          state = 3;
          break;
        }

        if (strcmp (event, "NEWS") == 0) {
          state = 1;
          break;
        }

        if (strcmp (event, "MARKET") == 0) {
          state = 2;
          break;
        }
      break;

      case 1:
        printf("\nVocê foi infectado pelo pior vírus da atualidade: a fake news! Infelizmente agora você não poderá ajudar a combater o movimento anti ciência no país. Esperava mais de você...\n");
        return 0;
      break;

      case 2:
        printf("\nHoje estamos aqui reunidos por causa da ignorância e falta de senso coletivo de %s, que além de estocar mantimentos desnecessariamente em sua casa, contribuiu para o aumento do preço de produtos de higiene pessoal em um momento tão delicado. Sua morte nos deixa muito triste, mas também serve como lição: não saiam de casa sem máscara.\n", name);
        return 0;
      break;

      case 3:
        printf("\nParabéns! Você fez a escolha mais sensata. A maior parte dos novos casos de infecção estão surgindo por causa da resistência populacional ao uso da máscara. Chegou a hora de escolher seu lado na história. Digite: HOSPITAL, para trabalhar como médicx vontárix em hospitais público; REVOLUTION, para iniciar uma revolução no Palácio do Planalto.\n");

        event[0] = '\0';
        fgets(event, sizeof(event), stdin);
        event[strlen(event)-1] = '\0';
        
        if (strcmp (event, "HOSPITAL") == 0) {
          state = 4;
          break;
        }

        if (strcmp (event, "REVOLUTION") == 0) {
          state = 8;
          break;
        }
      break;

      case 4:
        printf("\nParabéns, %s! Você foi promovido para o setor administrativo dos hospitais. Sua família está muito feliz porque seu contato com os pacientes diminuí, mas com promoção, vem muita responsabilidade! Tente não perder a cabeça. Digite:\nPUBLIC, para priorizar as verbas aos hospitais públicos;\nPRIVATE, para privatizar as verbas aos hospitais privados\n", name);

        event[0] = '\0';
        fgets(event, sizeof(event), stdin);
        event[strlen(event)-1] = '\0';
        
        if (strcmp (event, "PUBLIC") == 0) {
          state = 5;
          break;
        }

        if (strcmp (event, "PRIVATE") == 0) {
          state = 6;
          break;
        }
      break;

      case 5:
        printf("\nO Brasil tem quase 52 milhões de pessoas na pobreza e 13 milhões na extrema pobreza. A vida de muitas destas famílias foram salvas por você. Mas cuidado que nem tudo são flores: o Ministro da Saúde, general de divisão do Exército Brasileiro, está de olho em você. Digite:\nCONTINUE, para permanecer com as verbas destinadas aos hospitais públicos;\nPRIVATE, para mudar sua decisão anterior.\n");

        event[0] = '\0';
        fgets(event, sizeof(event), stdin);
        event[strlen(event)-1] = '\0';
        
        if (strcmp (event, "CONTINUE") == 0) {
          state = 7;
          break;
        }

        if (strcmp (event, "PRIVATE") == 0) {
          state = 6;
          break;
        }
      break;

      case 6:
        printf("\nO Governo Brasileiro gostou da sua tomada de decisão e seu nome foi colocadona fila de próximos ministros da saúde, quando o atual renunciar ao cargo! Enquanto isso, não temos mais trabalho para você, não confiamos mais nas suas escolhas!\n");
        return 0;
      break;

      case 7:
        printf("\nSeu corpo foi encontrado no Rio Tietê na noite do Natal. Viver no Brasil tem dessas\n");
        return 0;
      break;

      case 8:
        printf("\nVocê chegou em Brasília. Existem duas vertentes de movimento se formando na frente do palácio. Digite:\nBALACLAVA, para vestir a máscara e se juntar aos anarquistas;\nPEACE, para se juntar ao movimento pacifista.\n");

        event[0] = '\0';
        fgets(event, sizeof(event), stdin);
        event[strlen(event)-1] = '\0';
        
        if (strcmp (event, "BALACLAVA") == 0) {
          state = 10;
          break;
        }

        if (strcmp (event, "PEACE") == 0) {
          state = 9;
          break;
        }
      break;

      case 9:
        printf("\nVocê morreu apanhando pela polícia. Na próxima, reaja antes deles.\n");
        return 0;
      break;

      case 10:
        printf("\nA polícia te prendeu enquanto preparava seu primeiro molotov. Digite:\nFAMILY, para ligar para sua família e se libertar da cadeia;\nJAIL, para permanecer na cadeia\n");

        event[0] = '\0';
        fgets(event, sizeof(event), stdin);
        event[strlen(event)-1] = '\0';
        
        if (strcmp (event, "FAMILY") == 0) {
          state = 11;
          break;
        }

        if (strcmp (event, "JAIL") == 0) {
          state = 12;
          break;
        }
      break;

      case 11:
        printf("\nSua família é bolsominion e morreu de desgosto. Você perdeu o jogo por ser deserdadx da família\n");
        return 0;
      break;

      case 12:
        printf("\nNo seu primeiro ano na cadeia, você deu início à uma ONG de incentivo aos estudos na prisão. A ONU ficou orgulhosa e te concedeu o cargo de gerente de recursos humanos. Parabéns, viajante do tempo! Você conseguiu se adequar ao período histórico sem perder seu sendo humanitário. Bom retorno.\n");
        return 0;
      break;

      default:
        printf("\nDigite uma opção válida\n");
      break;
    }
  }
  return 0;
}