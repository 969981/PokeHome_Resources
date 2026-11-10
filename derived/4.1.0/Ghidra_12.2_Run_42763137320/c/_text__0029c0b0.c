/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029c0b0; name: FUN_.text__0029c0b0
 */


void FUN__text__0029c0b0(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 0x868) = 0;
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  local_28 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
  FUN__text__003a14e8(uVar2,*(int *)(param_1 + 0x940) == 0);
  local_28 = 0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
  bVar1 = false;
  if (*(int *)(param_1 + 0x940) == 1) {
    bVar1 = *(int *)(*(long *)(param_1 + 0x950) + 0xe8) != 0;
  }
  FUN__text__003a14e8(uVar2,bVar1);
  return;
}


