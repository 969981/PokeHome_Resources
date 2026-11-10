/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065cb78; name: FUN_.text__0065cb78
 */


undefined8 FUN__text__0065cb78(long *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_2e0 [672];
  
  if (((int)param_1[0x2f] == 2) && (*(char *)((long)param_1 + (long)param_2 + 0x3f8) == '\0')) {
    pcVar1 = (char *)((long)param_1 + (long)param_2 + 0x3f8);
    uVar4 = FUN__text__00677b70(param_1,param_2,pcVar1);
    if ((int)uVar4 != 0) {
      *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 1;
      return uVar4;
    }
    if (*pcVar1 == '\0') {
      return 0;
    }
  }
  if (((*(uint *)((long)param_1 + 0x3fc) ^ 0xffffffff) & 0x4020) != 0) {
    return 0;
  }
  lVar5 = *param_1;
  uVar4 = *(undefined8 *)(lVar5 + 0x1e8);
  memset(auStack_2e0,0,0x2a0);
  *(undefined1 **)(lVar5 + 0x1e8) = auStack_2e0;
  FUN__text__00650d38(param_1,0);
  if ((*(uint *)((long)param_1 + 0x3fc) >> 2 & 1) == 0) {
    if (param_2 == 1) {
      lVar5 = param_1[0x1d];
LAB__text__0065cc10:
      uVar3 = (uint)*(ushort *)(param_1 + 0x34);
      goto LAB__text__0065cc54;
    }
    lVar5 = param_1[0x1a];
  }
  else {
    lVar5 = param_1[0x20];
    if (param_2 == 1) goto LAB__text__0065cc10;
  }
  if ((*(uint *)((long)param_1 + 0x3fc) >> 3 & 1) == 0) {
    uVar3 = *(uint *)(param_1 + 0x33);
  }
  else {
    uVar3 = *(uint *)((long)param_1 + 0x19c);
  }
LAB__text__0065cc54:
  uVar2 = FUN__text__0065cca4(param_1,param_2,lVar5,uVar3);
  *(undefined8 *)(*param_1 + 0x1e8) = uVar4;
  if ((int)uVar2 == 0) {
    FUN__text__006783e4(param_1[0x8b]);
    param_1[0x8b] = 0;
    return 0;
  }
  return uVar2;
}


