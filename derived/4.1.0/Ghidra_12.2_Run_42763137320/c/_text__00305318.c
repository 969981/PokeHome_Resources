/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305318; name: FUN_.text__00305318
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00305318(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 local_f4 [2];
  undefined1 local_f0 [8];
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long lStack_d0;
  void *local_c8;
  undefined1 local_70 [16];
  undefined8 local_60;
  ushort local_58 [8];
  void *local_48;
  
  if ((&DAT_0094c1c0)[param_1] != '\0') {
    *(undefined2 *)(&DAT_0094c1ca + param_1) = 0;
    *(undefined8 *)(&DAT_0094c1c2 + param_1) = 0;
    uVar2 = DAT_008e1640;
    local_d8 = (undefined1 *)((ulong)local_d8 & 0xffffffffffff0000);
    _local_f0 = FUN__text__0011b95c(DAT_008e15f0);
    local_e0 = (undefined1 *)0x10015f008c54000;
    std::string::assign((char *)&local_d8);
    FUN__text__00309ac0(uVar2,local_f0);
    if (((ulong)local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    memset((void *)(param_1 + 0x50),0,0x94c171);
    return false;
  }
  cVar1 = (&DAT_0094c1c2)[param_1];
  *(undefined4 *)(param_1 + 0x50) = 1;
  if (cVar1 == '\0') {
    if ((((((&DAT_0094c1c3)[param_1] == '\0') && ((&DAT_0094c1c4)[param_1] == '\0')) &&
         ((&DAT_0094c1c5)[param_1] == '\0')) &&
        (((&DAT_0094c1c6)[param_1] == '\0' && ((&DAT_0094c1c7)[param_1] == '\0')))) &&
       ((((&DAT_0094c1c8)[param_1] == '\0' &&
         (((&DAT_0094c1c9)[param_1] == '\0' && ((&DAT_0094c1ca)[param_1] == '\0')))) &&
        ((&DAT_0094c1cb)[param_1] == '\0')))) {
      return true;
    }
LAB__text__00305494:
    bVar4 = (&DAT_0094c1cb)[param_1] == '\0';
  }
  else {
    if (((((&DAT_0094c1c3)[param_1] == '\0') || ((&DAT_0094c1c4)[param_1] == '\0')) ||
        ((&DAT_0094c1c5)[param_1] == '\0')) ||
       ((((&DAT_0094c1c6)[param_1] == '\0' || ((&DAT_0094c1c7)[param_1] == '\0')) ||
        (((&DAT_0094c1c8)[param_1] == '\0' ||
         (((&DAT_0094c1c9)[param_1] == '\0' || ((&DAT_0094c1ca)[param_1] == '\0'))))))))
    goto LAB__text__00305494;
    bVar4 = false;
    (&DAT_0094c1cb)[param_1] = 1;
  }
  if ((bVar4) && ((&DAT_0094c1c3)[param_1] == '\0')) {
LAB__text__003054d4:
    if ((&DAT_0094c1c4)[param_1] != '\0') goto LAB__text__003054dc;
LAB__text__003054f8:
    if ((&DAT_0094c1c5)[param_1] != '\0') goto LAB__text__00305500;
LAB__text__0030551c:
    if ((&DAT_0094c1c6)[param_1] != '\0') goto LAB__text__00305524;
LAB__text__00305540:
    if ((&DAT_0094c1c7)[param_1] != '\0') goto LAB__text__00305548;
LAB__text__00305568:
    if ((&DAT_0094c1c8)[param_1] != '\0') goto LAB__text__00305570;
LAB__text__0030558c:
    if ((&DAT_0094c1c9)[param_1] != '\0') goto LAB__text__00305594;
LAB__text__003055b0:
    if ((&DAT_0094c1ca)[param_1] == '\0') goto LAB__text__003055cc;
  }
  else {
    uVar5 = FUN__text__00596670(param_1 + 0x80,0x1c5200);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    if (cVar1 == '\0') goto LAB__text__003054d4;
LAB__text__003054dc:
    uVar5 = FUN__text__00596670(param_1 + 0x1c5280,0x1c5200);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 100) = uVar5;
    if (cVar1 == '\0') goto LAB__text__003054f8;
LAB__text__00305500:
    uVar5 = FUN__text__00596670(param_1 + 0x38a480,0x1c5200);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    if (cVar1 == '\0') goto LAB__text__0030551c;
LAB__text__00305524:
    uVar5 = FUN__text__00596670(&UNK__text__0054f680 + param_1,0x1c5200);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    if (cVar1 == '\0') goto LAB__text__00305540;
LAB__text__00305548:
    uVar5 = FUN__text__00596670(param_1 + 0x714880,0xe2900);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    if (cVar1 == '\0') goto LAB__text__00305568;
LAB__text__00305570:
    uVar5 = FUN__text__00596670((long)&DWORD_007f7180 + param_1,&LAB__text__00148200);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 0x74) = uVar5;
    if (cVar1 == '\0') goto LAB__text__0030558c;
LAB__text__00305594:
    uVar5 = FUN__text__00596670(param_1 + 0x93f380,0x2a30);
    cVar1 = (&DAT_0094c1cb)[param_1];
    *(undefined4 *)(param_1 + 0x78) = uVar5;
    if (cVar1 == '\0') goto LAB__text__003055b0;
  }
  uVar5 = FUN__text__00596670(param_1 + 0x941db0,0x2a30);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
LAB__text__003055cc:
  uVar5 = FUN__text__00596670(param_1 + 0x60,0x20);
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar2 = DAT_008e1640;
  local_58[0] = 0;
  local_70 = FUN__text__0011b95c(DAT_008e15f0);
  local_60 = 0x10015f008c54000;
  std::string::assign((char *)local_58);
  local_f4[0] = 0;
  local_f0 = (undefined1  [8])&DAT__text__00305dc0;
  local_e8 = FUN__text__003060a0;
  local_e0 = &LAB__text__00306178;
  local_d8 = &LAB__text__00306184;
  lStack_d0 = param_1;
  iVar6 = FUN__text__00309640(uVar2,local_70,local_f0,local_f4,1);
  pcVar3 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1  [8])0x0;
    local_e8 = (code *)0x0;
    (*pcVar3)(&lStack_d0);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  return iVar6 == 0;
}


