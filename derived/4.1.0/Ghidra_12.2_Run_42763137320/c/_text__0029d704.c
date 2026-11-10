/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029d704; name: FUN_.text__0029d704
 */


void FUN__text__0029d704(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *param_1;
  local_28 = 0x431e769ffc1ad350;
  uVar1 = FUN__text__0012ce7c(lVar2 + 0x110,&local_28);
  FUN__text__003a14e8(uVar1,*(int *)(lVar2 + 0x940) == 0);
  local_28 = 0x431e779ffc1ad503;
  uVar1 = FUN__text__0012ce7c(lVar2 + 0x110,&local_28);
  if (*(int *)(lVar2 + 0x940) == 1) {
    FUN__text__003a14e8(uVar1,*(int *)(*(long *)(lVar2 + 0x950) + 0xe8) != 0);
    return;
  }
  FUN__text__003a14e8(uVar1,0);
  return;
}


