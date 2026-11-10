/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00308dec; name: FUN_.text__00308dec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00308dec(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long local_a8;
  long local_a0 [6];
  undefined1 auStack_70 [48];
  long local_40;
  
  if (DAT_008e1540 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__005da7f0(auStack_70,DAT_008e1540,param_2,*(undefined8 *)(param_2 + 0x10));
  iVar4 = FUN__text__005dd608(auStack_70);
  if (iVar4 - 1U < 2) {
    local_a8 = param_2 + 0x19;
    if ((*(byte *)(param_2 + 0x18) & 1) != 0) {
      local_a8 = *(long *)(param_2 + 0x28);
    }
    FUN__text__002148dc(local_a0,&local_a8,auStack_70);
    plVar1 = _DAT_0089f5d0;
    if (local_a0[0] != 0) {
      plVar1 = (long *)(local_a0[0] + 0x60);
    }
    plVar2 = local_a0 + 2;
    if (local_a0[3] != 0) {
      plVar2 = plVar1;
    }
    iVar4 = nn::fs::GetEntryType((DirectoryEntryType *)&local_a8,(char *)*plVar2);
    FUN__text__005daa98(DAT_008e1540,auStack_70);
    bVar3 = iVar4 == 0;
    if ((local_a0[3] != 0) && (local_a0[0] != 0)) {
      (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
    }
    local_a0[0] = 0;
    local_a0[1] = 0xcbf29ce484222645;
    local_a0[2] = 0x70f683;
    local_a0[3] = 0;
    if (local_a0[4] != 0) {
      (**(code **)(*(long *)(local_a0[4] + 0x48) + 0x18))();
    }
  }
  else {
    bVar3 = false;
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return bVar3;
}


