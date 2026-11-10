/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d2e30; name: FUN_.text__001d2e30
 */


void FUN__text__001d2e30(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_48;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  lVar2 = *(long *)(lVar2 + 0x158);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  else {
    plVar5 = (long *)(lVar2 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar3 = *(long *)(param_1 + 8);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar3 = lVar3 + 0x110;
  local_48 = lVar2;
  iVar1 = FUN__text__00195870(uVar4,&local_48,param_2);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (iVar1 == 0) {
    FUN__text__0012c378(lVar3,param_3 + 0x80);
  }
  else if (iVar1 == *(int *)(param_2 + 0x2c)) {
    FUN__text__0012c378(lVar3,param_3 + 0x90);
  }
  else {
    FUN__text__0012c378(lVar3,param_3 + 0x88);
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


