/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013d0c4; name: FUN_.text__0013d0c4
 */


void FUN__text__0013d0c4(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x64c) == 1) {
    if (*(code **)(param_1 + 0xa50) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0xda0));
      uVar1 = (**(code **)(param_1 + 0xa50))(param_1 + 0xa70,&local_28);
    }
    lVar2 = FUN__text__0012cb14(param_1 + 0x110,0x723a38);
    if (*(code **)(param_1 + 0xad0) == (code *)0x0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
    }
    else {
      local_28 = CONCAT44(local_28._4_4_,*(undefined4 *)(param_1 + 0xda0));
      uVar3 = (**(code **)(param_1 + 0xad0))(param_1 + 0xaf0,&local_28);
      *(undefined1 *)(lVar2 + 0x110) = 0;
      uVar4 = 0x900000000;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0x800000000;
      }
      *(undefined8 *)(lVar2 + 0x108) = uVar4;
    }
    lVar5 = *(long *)(param_1 + 0x2d0);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_28 = 0x15b41afda1d3f1fb;
    FUN__text__003c83d0(lVar5,&local_28,0x720bf4);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    FUN__text__003a14c4(lVar2,uVar1 & 1);
    if (*(code **)(param_1 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_28 = CONCAT44(local_28._4_4_,0xffffffff);
      uVar1 = (**(code **)(param_1 + 0x9d0))(param_1 + 0x9f0,&local_28);
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = FUN__text__0012cb14(param_1 + 0x110,0x723a40);
    FUN__text__003a14c4(uVar4,uVar1 & 1);
  }
  return;
}


