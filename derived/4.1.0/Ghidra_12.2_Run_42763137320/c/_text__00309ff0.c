/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00309ff0; name: FUN_.text__00309ff0
 */


undefined8 FUN__text__00309ff0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *piVar4;
  long local_58;
  long local_50 [6];
  
  piVar4 = (int *)*param_3;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar2 = *param_1;
  local_58 = lVar2 + 0x199;
  if ((*(byte *)(lVar2 + 0x198) & 1) != 0) {
    local_58 = *(long *)(lVar2 + 0x1a8);
  }
  FUN__text__002148dc(local_50,&local_58);
  local_58 = 0;
  iVar1 = FUN__text__00214dfc(&local_58,local_50,*(undefined4 *)(lVar2 + 0x1b0),0);
  *piVar4 = iVar1;
  if (iVar1 == 0) {
    FUN__text__005dc04c(local_58,0,0);
    iVar1 = FUN__text__005dc198(local_58,*(undefined8 *)(lVar2 + 0x1b8),
                                *(undefined4 *)(lVar2 + 0x1b0));
    *piVar4 = iVar1;
    if (iVar1 == 0) {
      iVar1 = FUN__text__005dc190(local_58);
      *piVar4 = iVar1;
      if (iVar1 == 0) {
        FUN__text__005dc014(local_58);
        uVar3 = 1;
        goto joined_r0x0030a0a4;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
joined_r0x0030a0a4:
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  if ((local_50[3] != 0) && (local_50[0] != 0)) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  local_50[0] = 0;
  local_50[1] = 0xcbf29ce484222645;
  local_50[2] = 0x70f683;
  local_50[3] = 0;
  if (local_50[4] != 0) {
    (**(code **)(*(long *)(local_50[4] + 0x48) + 0x18))();
  }
  return uVar3;
}


