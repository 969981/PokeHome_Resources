/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432788; name: FUN_.text__00432788
 */


undefined8 FUN__text__00432788(long param_1,void *param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar3 = (long *)(param_1 + 0x18);
  if (*plVar3 != 0) {
    FUN__text__00400fc0(0);
  }
  uVar1 = 0x1f;
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(int *)(param_1 + 0x20) = param_3 + 2;
    lVar2 = FUN__text__00400f80(0,(param_3 + 2) * 0x14);
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0x34;
    }
    *(undefined4 *)(param_1 + 0x24) = param_4;
    memcpy((void *)(lVar2 + 0xc),param_2,(ulong)(uint)(param_3 * 0xc));
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 8) = 9;
    **(undefined4 **)(param_1 + 0x18) = 0xff7fffff;
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 4) =
         *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x10);
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 0xc + 8) = 9
    ;
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 0xc) =
         0x7f7fffff;
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 0xc + 4) =
         *(undefined4 *)
          (*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 2) * 0xc + 4);
    FUN__text__00432e60(plVar3);
    if ((*(long *)(param_1 + 0x18) != 0) && ((*(uint *)(param_1 + 0x20) & 0xfffffffd) != 0)) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0xc);
      local_24 = *(undefined4 *)(param_1 + 0x28);
      local_28 = 0;
      FUN__text__0041a060(plVar3,&local_24,&local_28);
      *(undefined4 *)(param_1 + 0x28) = local_24;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x38) = local_28;
      *(undefined4 *)(param_1 + 0x3c) = local_28;
    }
    uVar1 = 1;
  }
  return uVar1;
}


