/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067ff28; name: FUN_.text__0067ff28
 */


int FUN__text__0067ff28(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(int *)(param_1 + 0x930) == 1) goto LAB__text__0067ff78;
  }
  else if (*(int *)(param_1 + 0x938) < 1) {
LAB__text__0067ff78:
    if (0x2aaaaaaaaaaaaaaa <
        ((ulong)(param_3 * -0x5555555555555555) >> 1 | param_3 * -0x5555555555555555 << 0x3f)) {
      return -0x1f5;
    }
    local_28 = 0;
    local_88 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_98 = 0;
    local_90 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    iVar1 = FUN__text__006843f0(&local_28,&local_88,param_2,param_3,param_1 + 0x890);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      iVar1 = FUN__text__006866dc(param_1,0,local_28,local_88);
    }
    else {
      FUN__text__00683d4c(&local_80,param_3,4,0,0);
      local_70 = local_88;
      uStack_68 = local_28;
      iVar1 = FUN__text__0067ca48(param_1,&local_80,1);
    }
    FUN__text__006809e4(param_1 + 0x890,local_28);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN__text__00679e88(&local_98);
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      param_4 = 0;
    }
    lVar2 = FUN__text__0067a960(param_1,1,0,&local_98,1,param_4);
    if (lVar2 == 0) {
      return -0x385;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      FUN__text__00685b30(lVar2,2);
      *(undefined4 *)(param_1 + 0x934) = 1;
      *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 2;
      return 0;
    }
    FUN__text__00685b30(lVar2,1);
    *(undefined8 *)(param_1 + 0x938) = 0x100000001;
    return 0;
  }
  return -0x1f9;
}


