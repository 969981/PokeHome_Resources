/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0010d010; name: FUN_.text__0010d010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0010d010(undefined8 *param_1,long *param_2,char *param_3,char *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char acStack_61 [9];
  long local_58;
  char *local_38;
  
  if (param_2[3] == 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = 0;
    param_1[1] = 0xcbf29ce484222645;
    param_1[2] = 0x70f683;
    param_1[3] = 0;
  }
  else {
    lVar8 = *param_2;
    if (lVar8 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar8 + 0x68);
    }
    sVar3 = strlen(param_3);
    sVar4 = strlen(param_4);
    pcVar6 = acStack_61 + (1 - (lVar7 + sVar3 + sVar4 + 0x10 & 0xfffffffffffffff0));
    puVar1 = _DAT_0089f5d0;
    if (lVar8 != 0) {
      puVar1 = (undefined8 *)(lVar8 + 0x60);
    }
    local_38 = pcVar6;
    strcpy(pcVar6,(char *)*puVar1);
    if (pcVar6[lVar7 + -1] == '/') {
      pcVar6[lVar7 + -1] = '\0';
      cVar2 = *param_3;
    }
    else {
      pcVar5 = strrchr(pcVar6,0x2f);
      if (pcVar5 == (char *)0x0) {
        *pcVar6 = '\0';
        cVar2 = *param_3;
      }
      else {
        *pcVar5 = '\0';
        cVar2 = *param_3;
      }
    }
    while (cVar2 == '.') {
      while (param_3[1] == '.') {
        pcVar6 = strrchr(local_38,0x2f);
        *pcVar6 = '\0';
        param_3 = param_3 + 3;
        if (*param_3 != '.') goto LAB__text__0010d188;
      }
      param_3 = param_3 + 2;
      cVar2 = *param_3;
    }
LAB__text__0010d188:
    pcVar6 = local_38;
    sVar3 = strlen(local_38);
    pcVar5 = local_38;
    (pcVar6 + sVar3)[0] = '/';
    (pcVar6 + sVar3)[1] = '\0';
    strcat(local_38,param_3);
    if (*param_4 == '\0') {
      FUN__text__00109fd4(&local_58,pcVar5);
      FUN__text__005dd198(param_1,&local_58,(int)param_2[5]);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
    }
    else {
      FUN__text__0010a15c(param_1,&local_38,param_4,(int)param_2[5]);
    }
  }
  return;
}


