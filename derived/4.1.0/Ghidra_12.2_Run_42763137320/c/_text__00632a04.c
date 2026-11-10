/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632a04; name: FUN_.text__00632a04
 */


void FUN__text__00632a04(long param_1,ulong param_2,byte param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),param_2,
                              *(undefined1 *)(param_1 + 0x54));
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),param_2 & 0xffffffff,
                              *(undefined1 *)(param_1 + 0x54));
  bVar1 = FUN__text__0063cbb8(uVar2,uVar3,*(undefined1 *)(param_1 + 0x54));
  if (param_3 <= bVar1) {
    bVar1 = param_3;
  }
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),param_2 & 0xffffffff,bVar1,
                      *(undefined1 *)(param_1 + 0x54));
  return;
}


