/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00343e70; name: FUN_.text__00343e70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00343e70(void)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  FUN__text__0018d370(&local_48,local_28,&local_28);
  if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar1 = FUN__text__00321ac0();
  *(undefined2 *)(&DAT__text__0019376c + lVar1) = 0;
  lVar1 = FUN__text__00321ac0();
  iVar3 = 0;
  *(undefined2 *)(&DAT__text__0019376e + lVar1) = 0;
  do {
    iVar4 = 0;
    do {
      FUN__text__003204d0(&local_50);
      lVar1 = local_50;
      local_58 = local_48;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
      }
      FUN__text__00300380(lVar1,&local_58,iVar3,iVar4);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      }
      uVar2 = FUN__text__00306588(local_48);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN__text__00307ba4(local_48);
        if ((uVar2 & 1) != 0) {
          lVar1 = FUN__text__00321ac0();
          *(short *)(&DAT__text__0019376c + lVar1) = *(short *)(&DAT__text__0019376c + lVar1) + 1;
        }
        uVar2 = FUN__text__00307b78(local_48);
        if ((uVar2 & 1) != 0) {
          lVar1 = FUN__text__00321ac0();
          *(short *)(&DAT__text__0019376e + lVar1) = *(short *)(&DAT__text__0019376e + lVar1) + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1e);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 300);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


