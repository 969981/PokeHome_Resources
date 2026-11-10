/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00634614; name: FUN_.text__00634614
 */


void FUN__text__00634614(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  iVar2 = FUN__text__006106d0(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)(param_1 + 0x54));
  if ((iVar1 == 0x1ed) && (iVar2 == 0x79)) {
    FUN__text__00610050(*(undefined8 *)(param_1 + 0x2f0));
    FUN__text__00638c84();
    return;
  }
  if ((iVar1 == 0x305) && (iVar2 == 0xe1)) {
    FUN__text__00610050(*(undefined8 *)(param_1 + 0x2f0));
    FUN__text__00638e3c();
    return;
  }
  uVar3 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0));
  FUN__text__005fe954(iVar1,uVar3,*(undefined1 *)(param_1 + 0x54));
  return;
}


