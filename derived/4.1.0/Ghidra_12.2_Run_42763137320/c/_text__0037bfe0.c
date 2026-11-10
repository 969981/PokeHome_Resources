/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037bfe0; name: FUN_.text__0037bfe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037bfe0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  uVar1 = *_DAT_0089f518;
  FUN__text__0037c290(uVar1);
  FUN__text__0037c38c(uVar1);
  FUN__text__0037c488(uVar1);
  FUN__text__0037c584(uVar1);
  FUN__text__0037c680(uVar1);
  FUN__text__0037c924(uVar1);
  FUN__text__0037ca20(uVar1);
  FUN__text__0037cb1c(uVar1);
  FUN__text__0037cc18(uVar1);
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  FUN__text__0039b7d0(uVar1,auStack_40);
  FUN__text__0037e6ac();
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  FUN__text__0038ac94(*(undefined8 *)(param_1 + 8));
  FUN__text__005e927c(auStack_40,_DAT_008a3150);
  FUN__text__0039b7d0(uVar1,auStack_40);
  FUN__text__0037efe4();
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


