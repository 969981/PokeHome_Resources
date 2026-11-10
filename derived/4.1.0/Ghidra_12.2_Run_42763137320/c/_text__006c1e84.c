/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1e84; name: FUN_.text__006c1e84
 */


void FUN__text__006c1e84(long param_1,long param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar1 = FUN__text__006eb7ec(param_2);
  FUN__text__006eb818(param_1,uVar1);
  uVar1 = FUN__text__006eb7f4(param_2);
  FUN__text__006eb850(param_1,uVar1);
  FUN__text__006eb7cc(param_2);
  pvVar2 = (void *)FUN__text__006a0f04();
  pvVar3 = (void *)FUN__text__006eb798(param_2);
  sVar4 = FUN__text__006eb7cc(param_2);
  memcpy(pvVar2,pvVar3,sVar4);
  FUN__text__006eb808(param_1,pvVar2);
  FUN__text__006eb7d4(param_2);
  pvVar2 = (void *)FUN__text__006a0f04();
  pvVar3 = (void *)FUN__text__006eb790(param_2);
  sVar4 = FUN__text__006eb7d4(param_2);
  memcpy(pvVar2,pvVar3,sVar4);
  FUN__text__006eb810(param_1,pvVar2);
  return;
}


