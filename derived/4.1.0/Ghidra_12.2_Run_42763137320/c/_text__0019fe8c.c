/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019fe8c; name: FUN_.text__0019fe8c
 */


byte FUN__text__0019fe8c(long param_1)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_5c [20];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_18;
  
  if (*(int *)(param_1 + 0x1c8) != 0) {
    bVar2 = 0;
    goto LAB__text__0019feac;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  lVar4 = *(long *)(lVar4 + 0x158);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x28);
  lVar5 = (long)*(int *)(param_1 + 0x1c4);
  lVar3 = param_1 + lVar5 * 4;
  if (((*(char *)(lVar6 + 0x284) == '\0' && *(char *)(lVar6 + 0x285) == '\0') &&
       *(char *)(lVar6 + 0x286) == '\0') &&
     ((4 < *(uint *)(param_1 + 0x1e8) ||
      ((1 << (ulong)(*(uint *)(param_1 + 0x1e8) & 0x1f) & 0x16U) == 0)))) {
    iVar1 = *(int *)(lVar3 + 0x1bc);
    if ((iVar1 == 1) || (iVar1 == 3)) {
      lVar3 = *(long *)(param_1 + lVar5 * 0x20 + 0x68);
      local_48 = *(undefined8 *)(lVar3 + 0x5a58);
      local_40 = *(undefined8 *)(lVar3 + 0x5a60);
      local_38 = *(undefined4 *)(lVar3 + 0x5a68);
      FUN__text__00191328(auStack_5c,&local_48,param_1 + 0x1cc);
      local_18 = lVar4;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      }
      FUN__text__001916b0(uVar7,&local_18,auStack_5c,0);
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
        local_18 = 0;
      }
      bVar2 = FUN__text__00306588(lVar4);
      bVar2 = bVar2 ^ 1;
      if (lVar4 == 0) goto LAB__text__0019feac;
      goto LAB__text__001a0014;
    }
joined_r0x0019ff6c:
    if (iVar1 == 4) {
      local_48 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + lVar5 * 0x20 + 0xa8) + 0x5790),
                          *(undefined4 *)(lVar3 + 0x1b0));
      local_40 = *(undefined8 *)(param_1 + 0x1cc);
      lVar3 = FUN__text__001961a8(uVar7,&local_48);
      goto LAB__text__0019ffe0;
    }
LAB__text__001a000c:
    bVar2 = false;
  }
  else {
    if (*(char *)(lVar6 + 0x284) == '\0') {
      if (*(char *)(lVar6 + 0x286) != '\0') {
        iVar1 = *(int *)(lVar3 + 0x1bc);
        goto joined_r0x0019ff6c;
      }
      goto LAB__text__001a000c;
    }
    if (*(int *)(lVar3 + 0x1bc) == 3) {
      lVar3 = *(long *)(param_1 + lVar5 * 0x20 + 0x68);
      local_48 = *(undefined8 *)(lVar3 + 0x5a58);
      local_40 = *(undefined8 *)(lVar3 + 0x5a60);
      local_38 = *(undefined4 *)(lVar3 + 0x5a68);
      FUN__text__00191328(auStack_5c,&local_48,param_1 + 0x1cc);
      lVar3 = FUN__text__00195358(uVar7,auStack_5c);
    }
    else {
      if (*(int *)(lVar3 + 0x1bc) != 1) goto LAB__text__001a000c;
      lVar3 = FUN__text__0019616c(uVar7,*(undefined4 *)(lVar3 + 0x1b0),param_1 + 0x1cc);
    }
LAB__text__0019ffe0:
    bVar2 = lVar3 != 0;
  }
  if (lVar4 != 0) {
LAB__text__001a0014:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    return bVar2 & 1;
  }
LAB__text__0019feac:
  return bVar2 & 1;
}


