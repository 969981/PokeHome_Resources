/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00232aa8; name: FUN_.text__00232aa8
 */


void FUN__text__00232aa8(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  FUN__text__0012c300(param_1 + 0x110,0x710294);
  FUN__text__00128ca0(param_1,0,1);
  if (*(int *)(*(long *)(param_1 + 0x650) + 0x74) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x640) + 0x10);
    uVar2 = FUN__text__0012cbe0(param_1 + 0x110,0x7296fd);
    local_18 = 0;
    uStack_14 = uVar1;
    FUN__text__003a8304(uVar2,&local_18,1,0);
  }
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x768),0);
  return;
}


