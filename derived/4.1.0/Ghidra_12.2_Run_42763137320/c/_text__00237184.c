/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00237184; name: FUN_.text__00237184
 */


void FUN__text__00237184(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  
  FUN__text__00128ca0(param_1,0,1);
  lVar2 = *(long *)(param_1 + 0x2d0);
  if (lVar2 != 0) {
    plVar3 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN__text__003c7c60(lVar2,0x72a948,0);
  local_18 = 0xa393a9f060c3e94b;
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_18);
  FUN__text__003a14e8(uVar1,1);
  local_18 = 0xa393a9f060c3e94b;
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_18);
  FUN__text__003a14e8(uVar1,0);
  *(undefined1 *)(*(long *)(param_1 + 0x7a0) + 0x15a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x7a8) + 0x15a) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x7b0) + 0x15a) = 0;
  *(undefined8 *)(param_1 + 0x778) = 0;
  *(undefined8 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x768) = 0;
  return;
}


