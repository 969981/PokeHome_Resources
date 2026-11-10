/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00152a60; name: FUN_.text__00152a60
 */


void FUN__text__00152a60(long *param_1,long *param_2,ulong param_3)

{
  undefined2 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*param_1 == 0) {
    return;
  }
  FUN__text__005beb80(*(undefined8 *)(*param_1 + 0xb0));
  lVar4 = *param_1;
  uVar1 = FUN__text__005cd4dc(*(undefined8 *)(*param_2 + 0xb0));
  local_34 = CONCAT22(local_34._2_2_,uVar1);
  uVar1 = FUN__text__005cd554(*(undefined8 *)(*param_2 + 0xb0));
  local_38 = CONCAT22(local_38._2_2_,uVar1);
  FUN__text__005bea08(*(undefined8 *)(lVar4 + 0xb0),&local_34,&local_38);
  local_34 = 1;
  FUN__text__005bea4c(*(undefined8 *)(*param_1 + 0xb0),&local_34);
  local_34 = 0;
  FUN__text__005bea34(*(undefined8 *)(*param_1 + 0xb0),&local_34);
  FUN__text__005bd83c(*(undefined8 *)(*param_1 + 0xb0),param_1 + 2);
  if ((param_3 & 1) == 0) {
    plVar3 = param_1 + 1;
    lVar4 = *param_1;
  }
  else {
    if (*(char *)((long)param_1 + 0x14) == '\0') goto LAB__text__00152b30;
    plVar3 = (long *)((long)param_1 + 0xc);
    lVar4 = *param_1;
  }
  local_34 = 0;
  FUN__text__005bdfd0(*(undefined8 *)(lVar4 + 0xb0),&local_34,plVar3);
LAB__text__00152b30:
  local_34 = 0;
  local_38 = 0;
  lVar4 = *param_1;
  iVar2 = FUN__text__005cd4dc(*(undefined8 *)(*param_2 + 0xb0));
  local_3c = (float)iVar2;
  iVar2 = FUN__text__005cd554(*(undefined8 *)(*param_2 + 0xb0));
  local_40 = (float)iVar2;
  FUN__text__005bfdc4(*(undefined8 *)(lVar4 + 0xb0),&local_34,&local_38,&local_3c,&local_40);
  local_34 = 0;
  FUN__text__005bd83c(*(undefined8 *)(*param_1 + 0xb0),&local_34);
  return;
}


