/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205d60; name: FUN_.text__00205d60
 */


void FUN__text__00205d60(int *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN__text__00631008(param_2);
  *param_1 = iVar3;
  uVar2 = FUN__text__00631010(param_2);
  *(undefined2 *)(param_1 + 1) = uVar2;
  iVar3 = FUN__text__0063378c(param_2);
  param_1[2] = iVar3;
  bVar1 = FUN__text__00634538(param_2);
  *(byte *)(param_1 + 3) = bVar1 & 1;
  bVar1 = FUN__text__00633b34(param_2,2);
  *(byte *)((long)param_1 + 0xd) = bVar1 & 1;
  iVar3 = FUN__text__00634578(param_2);
  param_1[4] = iVar3;
  uVar4 = FUN__text__006319d4(param_2);
  param_1[5] = uVar4 & 0xff;
  param_1[6] = -1;
  iVar3 = *param_1;
  if (iVar3 == 0x365) {
    uVar4 = FUN__text__00631324(param_2);
    param_1[6] = uVar4 & 0xff;
    iVar3 = *param_1;
  }
  if ((iVar3 == 0x37a) && ((short)param_1[1] == 1)) {
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[5] = 2;
  }
  return;
}


