/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046b650; name: FUN_.text__0046b650
 */


void FUN__text__0046b650(long *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 local_28;
  
  plVar2 = param_1 + 3;
  local_28 = (**(code **)(*plVar2 + 0x38))(plVar2);
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
  FUN__text__0046c3b0(plVar2,&local_28,uVar1 & 1);
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1 + 0x11) = 0;
    FUN__text__00400fc0(0);
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
  }
  param_1[2] = 0;
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[0x16] != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN__text__00400fc0(0);
    param_1[0x16] = 0;
    *(undefined4 *)((long)param_1 + 0xbc) = 0;
  }
  return;
}


