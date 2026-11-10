/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019efec; name: FUN_.text__0019efec
 */


void FUN__text__0019efec(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  if (*(int *)(param_1 + 0x1bc) == 0) {
    *(undefined4 *)(lVar3 + 4) = 0;
    iVar1 = *(int *)(param_1 + 0x1c0);
  }
  else {
    if (*(int *)(param_1 + 0x1bc) == 4) {
      *(undefined4 *)(lVar3 + 4) = 4;
      *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x5790);
    }
    else {
      iVar1 = *(int *)(*(long *)(param_1 + 0x68) + 0x4cc);
      if (iVar1 != 1) {
        if (iVar1 == 0) {
          *(undefined4 *)(lVar3 + 4) = 1;
          *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1b0);
          iVar1 = *(int *)(param_1 + 0x1c0);
        }
        else {
          *(undefined4 *)(lVar3 + 4) = 3;
          uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x5a68);
          *(undefined8 *)(lVar3 + 0x14) = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x5a60);
          *(undefined4 *)(lVar3 + 0x1c) = uVar2;
          *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1b0);
          iVar1 = *(int *)(param_1 + 0x1c0);
        }
        goto joined_r0x0019f070;
      }
      *(undefined4 *)(lVar3 + 4) = 2;
    }
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_1 + 0x228);
    *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)(param_1 + 0x1b0);
    iVar1 = *(int *)(param_1 + 0x1c0);
  }
joined_r0x0019f070:
  if (iVar1 == 0) {
    *(undefined4 *)(lVar3 + 8) = 0;
    goto LAB__text__0019f0e8;
  }
  if (iVar1 == 4) {
    *(undefined4 *)(lVar3 + 8) = 4;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 200) + 0x5790);
LAB__text__0019f0d8:
    *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(param_1 + 0x22c);
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 0x4cc);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar3 + 8) = 1;
    }
    else {
      if (iVar1 == 1) {
        *(undefined4 *)(lVar3 + 8) = 2;
        goto LAB__text__0019f0d8;
      }
      *(undefined4 *)(lVar3 + 8) = 3;
      uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5a68);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5a60);
      *(undefined4 *)(lVar3 + 0x28) = uVar2;
    }
  }
  *(undefined4 *)(lVar3 + 0x10) = *(undefined4 *)(param_1 + 0x1b4);
LAB__text__0019f0e8:
  *(undefined4 *)(lVar3 + 0x3c) =
       *(undefined4 *)(&DAT_00723978 + (long)*(int *)(param_1 + 0x1c4) * 4);
  *(undefined4 *)(lVar3 + 0x40) = *(undefined4 *)((long)*(int *)(param_1 + 0x1c8) * 4 + 0x724880);
  *(undefined8 *)(lVar3 + 0x44) = *(undefined8 *)(param_1 + 0x1cc);
  return;
}


