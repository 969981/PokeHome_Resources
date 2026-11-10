/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00654628; name: FUN_.text__00654628
 */


long FUN__text__00654628(long *param_1,undefined8 param_2,undefined4 param_3)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_140;
  char acStack_136 [262];
  
  lVar3 = *param_1;
  memset(acStack_136,0,0x106);
  FUN__text__00654930(param_2,param_3,acStack_136);
  sVar1 = strlen(acStack_136);
  lVar2 = FUN__text__00654034(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1);
  if (lVar2 == 0) {
    if ((*(byte *)(lVar3 + 0xf68) >> 2 & 1) == 0) {
      return 0;
    }
    FUN__text__00654930(0x71a415,param_3,acStack_136);
    sVar1 = strlen(acStack_136);
    lVar2 = FUN__text__00654034(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (*(long *)(lVar3 + 0xc08) == -1) {
    return lVar2;
  }
  uStack_140 = 0;
  FUN__text__00679878(&uStack_140);
  FUN__text__00666f74(lVar3,0x71f814);
  FUN__text__00653f90(*(undefined8 *)(lVar3 + 200),acStack_136,sVar1 + 1);
  return 0;
}


