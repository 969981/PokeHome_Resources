/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002462cc; name: FUN_.text__002462cc
 */


void FUN__text__002462cc(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *param_1;
  uVar1 = FUN__text__0012cbe0(lVar2 + 0x110,0x70ee35);
  local_28 = 0;
  FUN__text__003a8304(uVar1,&local_28,1,0);
  *(undefined4 *)(lVar2 + 0x708) = 1;
  FUN__text__00243e90(lVar2);
  FUN__text__00128ca0(lVar2,1,1);
  return;
}


