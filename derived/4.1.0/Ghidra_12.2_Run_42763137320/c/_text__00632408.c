/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632408; name: FUN_.text__00632408
 */


ulong FUN__text__00632408(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = FUN__text__0060f008(*(undefined8 *)(param_1 + 0x2f0));
  if ((uVar5 & 1) == 0) {
    uVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
    uVar2 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
    uVar3 = FUN__text__00610350(*(undefined8 *)(param_1 + 0x2f0));
    uVar4 = FUN__text__00637870(uVar1,uVar2,uVar3);
    return (ulong)(uVar4 & 0xff);
  }
  uVar5 = FUN__text__0060fec8();
  return uVar5;
}


