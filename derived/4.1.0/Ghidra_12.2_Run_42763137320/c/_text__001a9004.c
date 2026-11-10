/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a9004; name: FUN_.text__001a9004
 */


undefined8 FUN__text__001a9004(long param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *(long *)(param_1 + 0x158);
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  local_38 = lVar3;
  FUN__text__0019485c(uVar4,&local_38,param_2);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  sVar1 = FUN__text__00306600(lVar3);
  if (sVar1 != 0) {
    iVar2 = FUN__text__003065f8(lVar3);
    uVar4 = 1;
    if (((iVar2 - 0x1e3U < 0xb) && ((1 << (ulong)(iVar2 - 0x1e3U & 0x1f) & 0x413U) != 0)) ||
       (iVar2 == 0x3f9)) goto LAB__text__001a90bc;
  }
  uVar4 = 0;
LAB__text__001a90bc:
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return uVar4;
}


