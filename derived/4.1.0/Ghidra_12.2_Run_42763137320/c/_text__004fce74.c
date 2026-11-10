/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fce74; name: FUN_.text__004fce74
 */


long FUN__text__004fce74(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                        long *param_5,undefined1 *param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_180 [304];
  undefined8 local_38;
  
  *param_5 = 0;
  lVar5 = FUN__text__004f6178(param_2,&local_38);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(lVar5 + 0x20);
  }
  FUN__text__004f6114(auStack_180,param_3,1);
  lVar5 = FUN__text__004f6178(auStack_180,param_5);
  if (lVar5 == 0) {
    iVar6 = 0;
    uVar1 = *param_4 + 1;
    *param_4 = uVar1;
  }
  else {
    iVar6 = *(int *)(lVar5 + 0x20);
    uVar1 = *param_4 + 1;
    *param_4 = uVar1;
  }
  if (uVar1 < 0x41) {
    lVar5 = FUN__text__004f7ad0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x78),
                                uVar7,local_38,iVar6,*param_5);
    if ((long *)*param_5 == (long *)0x0) {
      bVar3 = false;
    }
    else {
      iVar4 = (**(code **)(*(long *)*param_5 + 0x80))();
      bVar3 = iVar4 == 8;
    }
    bVar2 = false;
    if (**(int **)(lVar5 + 0x10) != iVar6) {
      bVar2 = bVar3;
    }
    *param_6 = bVar2;
  }
  else {
    lVar5 = FUN__text__004f7cf0();
  }
  FUN__text__004f6174(auStack_180);
  return lVar5;
}


