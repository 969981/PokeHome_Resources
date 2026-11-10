/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c10b0; name: FUN_.text__002c10b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__002c10b0(long param_1,undefined4 *param_2,ulong param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long local_38;
  
  cVar3 = *(char *)(param_2 + 3);
  iVar7 = 5;
  if (cVar3 == '\0') {
    iVar7 = 1;
  }
  iVar8 = 3;
  if (cVar3 != '\0') {
    iVar8 = 7;
  }
  if ((param_3 & 1) != 0) {
    iVar7 = iVar8;
  }
  iVar8 = 2;
  if (cVar3 != '\0') {
    iVar8 = 6;
  }
  iVar1 = (uint)(cVar3 != '\0') << 2;
  if ((param_3 & 1) != 0) {
    iVar1 = iVar8;
  }
  if ((param_2[2] & 0xfffffffd) == 0) {
    iVar7 = iVar1;
  }
  *param_4 = iVar7;
  if (*(char *)((long)param_2 + 0xd) != '\0') {
    return 0;
  }
  uVar2 = *param_2;
  uVar4 = *(undefined2 *)(param_2 + 1);
  lVar9 = *(long *)(*_DAT_0089f4f8 + 0x50);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__002a5f64(&local_38,lVar9);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  uVar6 = FUN__text__002c53f0(local_38);
  uVar5 = FUN__text__002c5c20(uVar6,uVar2,uVar4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  lVar9 = param_1 + (ulong)uVar5 * 0x18 + 0x151a8;
  if (0x5c7 < uVar5 - 1) {
    lVar9 = 0;
  }
  return lVar9;
}


