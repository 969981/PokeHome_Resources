/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633304; name: FUN_.text__00633304
 */


void FUN__text__00633304(long param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xff) < 4) {
    uVar1 = FUN__text__0063cbb8(param_3,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),param_2,param_3,
                        *(undefined1 *)(param_1 + 0x54));
    FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),param_2,0,*(undefined1 *)(param_1 + 0x54));
    FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),param_2,uVar1,
                        *(undefined1 *)(param_1 + 0x54));
    return;
  }
  return;
}


