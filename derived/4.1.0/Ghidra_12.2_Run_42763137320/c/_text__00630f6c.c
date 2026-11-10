/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00630f6c; name: FUN_.text__00630f6c
 */


void FUN__text__00630f6c(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_3a [26];
  
  uVar1 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0));
  uVar2 = FUN__text__00610d20(*(undefined8 *)(param_1 + 0x2f0));
  FUN__text__00601290(auStack_3a,uVar1,uVar2);
  FUN__text__0061ea30(*(undefined8 *)(param_1 + 0x2f0),auStack_3a);
  FUN__text__0061e580(*(undefined8 *)(param_1 + 0x2f0),0);
  return;
}


