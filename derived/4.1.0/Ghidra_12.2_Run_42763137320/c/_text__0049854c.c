/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049854c; name: FUN_.text__0049854c
 */


undefined8 FUN__text__0049854c(long param_1,void *param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  plVar3 = (long *)(param_1 + 0x10);
  if (param_3 == 0) {
    if (*plVar3 != 0) {
      FUN__text__00400fc0(0);
    }
    uVar2 = 1;
  }
  else {
    if (*plVar3 != 0) {
      FUN__text__00400fc0(0);
    }
    *plVar3 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 1;
    if (param_2 == (void *)0x0) {
      uVar2 = 0x1f;
    }
    else {
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(int *)(param_1 + 0x18) = param_3 + 2;
      lVar1 = FUN__text__00400f80(0,(param_3 + 2) * 0x14);
      *(long *)(param_1 + 0x10) = lVar1;
      if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
        memcpy((void *)(lVar1 + 0xc),param_2,(ulong)(uint)(param_3 * 0xc));
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 9;
        **(undefined4 **)(param_1 + 0x10) = 0xff7fffff;
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 4) =
             *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0xc + 8)
             = 9;
        *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0xc) =
             0x7f7fffff;
        *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)(*(int *)(param_1 + 0x18) - 1) * 0xc + 4)
             = *(undefined4 *)
                (*(long *)(param_1 + 0x10) + (ulong)(*(int *)(param_1 + 0x18) - 2) * 0xc + 4);
        FUN__text__00432e60(plVar3);
        uVar2 = FUN__text__00498aa0(param_1);
        return uVar2;
      }
      uVar2 = 0x34;
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  return uVar2;
}


