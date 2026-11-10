/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9320; name: FUN_.text__005e9320
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e9320(long *param_1,char *param_2)

{
  byte bVar1;
  size_t sVar2;
  char *__dest;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = _DAT_0089f690;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar3 + 0x10;
  lVar3 = 0;
  if (uVar6 != 0) {
    if (*(long *)(uVar6 + 0x98) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  uVar6 = 0xcbf29ce484222645;
  param_1[0xd] = 0;
  param_1[0xb] = -0x340d631b7bddd9bb;
  param_1[0xc] = 0x70f683;
  *param_1 = 0x897af0;
  param_1[1] = lVar3;
  param_1[9] = 0x897b28;
  plVar5 = *(long **)(DAT_008e1448 + 8);
  sVar2 = strlen(param_2);
  __dest = (char *)(**(code **)(*plVar5 + 0x10))(plVar5,sVar2 + 1,8);
  param_1[0xe] = (long)__dest;
  strcpy(__dest,param_2);
  pbVar4 = (byte *)param_1[0xe];
  param_1[0xc] = (long)pbVar4;
  bVar1 = *pbVar4;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
    bVar1 = *pbVar4;
  }
  param_1[0xb] = uVar6;
  param_1[0xd] = sVar2;
  return;
}


