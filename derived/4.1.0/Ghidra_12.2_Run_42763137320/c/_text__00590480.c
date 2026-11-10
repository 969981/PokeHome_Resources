/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00590480; name: FUN_.text__00590480
 */


void FUN__text__00590480(long param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = param_2[2];
  uStack_38 = param_2[3];
  local_30 = param_2[4];
  uStack_28 = param_2[5];
  local_50 = *param_2;
  uStack_48 = param_2[1];
  bVar4 = *(short *)(param_1 + 0x5c) != 1;
  piVar2 = (int *)(param_1 + 0x34);
  if (bVar4) {
    piVar2 = (int *)(param_1 + 0xdc);
  }
  iVar3 = *piVar2;
  iVar1 = 0;
  if (bVar4) {
    iVar1 = *(int *)(param_1 + 0xd4);
  }
  *(undefined1 *)(param_1 + 0xcc) = 1;
  *(int *)(param_1 + 200) =
       (*(int *)(param_1 + 0x118) + iVar1 + iVar3) - (int)*(undefined8 *)(param_1 + 0x110);
  FUN__text__0058f2e0(param_1 + 0x60,*(undefined2 *)(param_1 + 0xe4),
                      *(undefined8 *)(param_1 + 0x110),param_1 + 0x120,param_1 + 0x128);
  uStack_28 = CONCAT44(*(int *)(param_1 + 100),(undefined4)uStack_28);
  if (*(int *)(param_1 + 100) != 2) {
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + (ulong)*(uint *)(param_1 + 0x6c);
    FUN__text__004ddbe4(param_1 + 8,*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x60)
                        ,*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xc0),&local_50);
  }
  *param_2 = local_50;
  param_2[1] = uStack_48;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_40;
  return;
}


